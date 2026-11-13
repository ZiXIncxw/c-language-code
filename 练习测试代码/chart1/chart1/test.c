#define _CRT_SECURE_NO_WARNINGS 1
/**
 * 东北官话数字保护系统 - 图表数据生成程序
 * 编译: gcc -o generate_data generate_data.c -lm
 * 运行: ./generate_data
 *
 * 输出: 所有图表所需的 CSV 数据文件
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 // 随机数生成器
double random_double(double min, double max) {
    return min + (max - min) * (rand() / (RAND_MAX + 1.0));
}

// 生成模拟训练数据 (图 3-4)
void generate_training_data() {
    FILE* fp = fopen("data_training.csv", "w");
    if (!fp) {
        printf("无法创建文件 data_training.csv\n");
        return;
    }

    fprintf(fp, "epoch,train_loss,val_loss,val_per\n");

    for (int epoch = 1; epoch <= 40; epoch++) {
        double train_loss = 2.5 * exp(-epoch / 15.0) + 0.2 +
            random_double(-0.05, 0.05);
        double val_loss = 2.8 * exp(-epoch / 18.0) + 0.3 +
            random_double(-0.05, 0.05);
        double val_per = 45.0 * exp(-epoch / 12.0) + 15.0 +
            random_double(-1.5, 1.5);

        fprintf(fp, "%d,%.4f,%.4f,%.2f\n", epoch, train_loss, val_loss, val_per);
    }

    fclose(fp);
    printf("? 生成 data_training.csv (图3-4 训练曲线数据)\n");
}

// 生成混淆矩阵数据 (图 3-5)
void generate_confusion_matrix() {
    FILE* fp = fopen("data_confusion.csv", "w");
    if (!fp) {
        printf("无法创建文件 data_confusion.csv\n");
        return;
    }

    char* phonemes[] = { "zh", "ch", "sh", "z", "c", "s", "other" };
    int n = 7;
    double matrix[7][7] = { 0 };

    // 初始化对角线和混淆值
    for (int i = 0; i < n; i++) {
        matrix[i][i] = 0.85;
    }
    matrix[0][3] = 0.12;  // zh -> z
    matrix[1][4] = 0.10;  // ch -> c
    matrix[2][5] = 0.11;  // sh -> s
    matrix[3][0] = 0.08;  // z -> zh
    matrix[4][1] = 0.07;  // c -> ch
    matrix[5][2] = 0.09;  // s -> sh

    // 重新计算对角线
    for (int i = 0; i < n; i++) {
        double sum = 0;
        for (int j = 0; j < n; j++) {
            if (j != i) sum += matrix[i][j];
        }
        matrix[i][i] = 1.0 - sum;
        if (matrix[i][i] < 0) matrix[i][i] = 0.85;
    }

    // 写入 CSV
    fprintf(fp, "true\\pred");
    for (int j = 0; j < n; j++) {
        fprintf(fp, ",%s", phonemes[j]);
    }
    fprintf(fp, "\n");

    for (int i = 0; i < n; i++) {
        fprintf(fp, "%s", phonemes[i]);
        for (int j = 0; j < n; j++) {
            fprintf(fp, ",%.4f", matrix[i][j]);
        }
        fprintf(fp, "\n");
    }

    fclose(fp);
    printf("? 生成 data_confusion.csv (图3-5 混淆矩阵数据)\n");
}

// 生成共振峰散点图数据 (图 3-6)
void generate_formant_data() {
    FILE* fp = fopen("data_formant.csv", "w");
    if (!fp) {
        printf("无法创建文件 data_formant.csv\n");
        return;
    }

    fprintf(fp, "region,f1,f2\n");

    srand(42);  // 固定种子保证可重复

    int n_samples = 50;
    char* regions[] = { "东北官话", "胶辽官话", "北京官话" };

    for (int r = 0; r < 3; r++) {
        double f1_mean, f2_mean, f1_std, f2_std;

        switch (r) {
        case 0:  // 东北官话
            f1_mean = 650; f2_mean = 1250; f1_std = 40; f2_std = 50; break;
        case 1:  // 胶辽官话
            f1_mean = 700; f2_mean = 1350; f1_std = 45; f2_std = 55; break;
        default: // 北京官话
            f1_mean = 600; f2_mean = 1150; f1_std = 35; f2_std = 45; break;
        }

        for (int i = 0; i < n_samples; i++) {
            double f1 = f1_mean + random_double(-f1_std, f1_std);
            double f2 = f2_mean + random_double(-f2_std, f2_std);
            fprintf(fp, "%s,%.1f,%.1f\n", regions[r], f1, f2);
        }
    }

    fclose(fp);
    printf("? 生成 data_formant.csv (图3-6 共振峰散点图数据)\n");
}

// 生成代际差异数据 (图 4-7)
void generate_generational_data() {
    FILE* fp = fopen("data_generational.csv", "w");
    if (!fp) {
        printf("无法创建文件 data_generational.csv\n");
        return;
    }

    fprintf(fp, "city,lng,lat,idi\n");

    // 城市数据: 名称, 经度, 纬度, 代际差异指数
    char* cities[] = { "沈阳", "大连", "丹东", "锦州", "抚顺", "朝阳",
                      "营口", "鞍山", "本溪", "铁岭", "葫芦岛", "阜新" };
    double lng[] = { 123.43, 121.62, 124.35, 121.13, 123.90, 120.45,
                    122.23, 122.98, 123.77, 123.73, 120.85, 121.67 };
    double lat[] = { 41.80, 38.92, 40.00, 41.10, 41.88, 41.57,
                    40.67, 41.08, 41.29, 42.22, 40.72, 42.02 };
    double idi[] = { 1.20, 1.60, 1.80, 1.15, 1.25, 1.10,
                    1.45, 1.30, 1.35, 1.40, 1.20, 1.15 };

    for (int i = 0; i < 12; i++) {
        fprintf(fp, "%s,%.2f,%.2f,%.2f\n", cities[i], lng[i], lat[i], idi[i]);
    }

    fclose(fp);
    printf("? 生成 data_generational.csv (图4-7 代际差异数据)\n");
}

// 生成濒危方言点数据 (图 4-8)
void generate_endangered_data() {
    FILE* fp = fopen("data_endangered.csv", "w");
    if (!fp) {
        printf("无法创建文件 data_endangered.csv\n");
        return;
    }

    fprintf(fp, "point_name,lng,lat,dei,level\n");

    // 濒危点数据
    char* points[] = { "丹东某镇", "大连某村", "锦州某镇", "营口某乡",
                      "本溪某村", "铁岭某镇", "朝阳某乡" };
    double lng[] = { 124.35, 121.62, 121.13, 122.23, 123.77, 123.73, 120.45 };
    double lat[] = { 40.00, 38.92, 41.10, 40.67, 41.29, 42.22, 41.57 };
    double dei[] = { 2.4, 2.1, 1.8, 1.9, 1.7, 1.6, 1.5 };
    char* level[] = { "高度濒危", "高度濒危", "中度濒危", "中度濒危",
                     "中度濒危", "轻度濒危", "轻度濒危" };

    for (int i = 0; i < 7; i++) {
        fprintf(fp, "%s,%.2f,%.2f,%.1f,%s\n", points[i], lng[i], lat[i], dei[i], level[i]);
    }

    fclose(fp);
    printf("? 生成 data_endangered.csv (图4-8 濒危点数据)\n");
}

// 生成 t-SNE 聚类数据 (图 3-7)
void generate_tsne_data() {
    FILE* fp = fopen("data_tsne.csv", "w");
    if (!fp) {
        printf("无法创建文件 data_tsne.csv\n");
        return;
    }

    fprintf(fp, "region,x,y\n");

    srand(42);

    // 三个聚类中心
    double centers[3][2] = {
        {5.0, 8.0},   // 东北官话
        {-4.0, 6.0},  // 胶辽官话
        {1.0, -3.0}   // 北京官话
    };
    char* regions[] = { "东北官话", "胶辽官话", "北京官话" };
    int n_per_region = 20;

    for (int r = 0; r < 3; r++) {
        for (int i = 0; i < n_per_region; i++) {
            double x = centers[r][0] + random_double(-1.2, 1.2);
            double y = centers[r][1] + random_double(-1.0, 1.0);
            fprintf(fp, "%s,%.4f,%.4f\n", regions[r], x, y);
        }
    }

    fclose(fp);
    printf("? 生成 data_tsne.csv (图3-7 t-SNE聚类数据)\n");
}

// 生成方言点坐标数据 (图 4-1)
void generate_dialect_points() {
    FILE* fp = fopen("data_dialect_points.csv", "w");
    if (!fp) {
        printf("无法创建文件 data_dialect_points.csv\n");
        return;
    }

    fprintf(fp, "point_id,name,lng,lat,region\n");

    // 模拟 42 个方言点
    char* cities[] = { "沈阳", "大连", "鞍山", "抚顺", "本溪", "丹东", "锦州",
                      "营口", "阜新", "辽阳", "盘锦", "铁岭", "朝阳", "葫芦岛",
                      "新民", "瓦房店", "海城", "东港", "凤城", "凌海", "北镇",
                      "盖州", "大石桥", "灯塔", "开原", "调兵山", "凌源", "北票",
                      "兴城", "绥中", "建昌", "喀左", "义县", "黑山", "彰武",
                      "法库", "康平", "西丰", "昌图", "台安", "岫岩", "长海" };

    char* regions[] = { "东北官话", "胶辽官话", "东北官话", "东北官话", "东北官话",
                       "胶辽官话", "北京官话", "胶辽官话", "北京官话", "东北官话",
                       "东北官话", "东北官话", "北京官话", "北京官话", "东北官话",
                       "胶辽官话", "东北官话", "胶辽官话", "胶辽官话", "北京官话",
                       "北京官话", "胶辽官话", "胶辽官话", "东北官话", "东北官话",
                       "东北官话", "北京官话", "北京官话", "北京官话", "北京官话",
                       "北京官话", "北京官话", "北京官话", "北京官话", "北京官话",
                       "东北官话", "东北官话", "东北官话", "东北官话", "东北官话",
                       "胶辽官话", "胶辽官话" };

    // 城市中心坐标 (简化)
    double base_lng[] = { 123.43, 121.62, 122.98, 123.90, 123.77, 124.35, 121.13,
                         122.23, 121.67, 123.23, 122.07, 123.73, 120.45, 120.85 };

    for (int i = 0; i < 42; i++) {
        // 根据城市名确定大致坐标
        double lng = 122.0, lat = 41.0;
        for (int j = 0; j < 14; j++) {
            if (i < 14 && i == j) {
                lng = base_lng[j];
                lat = 38.0 + j * 0.3;
                break;
            }
        }
        // 添加随机偏移
        lng += random_double(-0.5, 0.5);
        lat += random_double(-0.3, 0.3);

        fprintf(fp, "DP_%03d,%s,%.4f,%.4f,%s\n", i + 1, cities[i], lng, lat, regions[i]);
    }

    fclose(fp);
    printf("? 生成 data_dialect_points.csv (图4-1 方言点坐标数据)\n");
}

// 主函数
int main() {
    printf("\n========================================\n");
    printf("东北官话数字保护系统 - 图表数据生成\n");
    printf("========================================\n\n");

    // 创建数据目录
    system("mkdir -p data");
    chdir("data");

    // 生成所有数据文件
    generate_training_data();
    generate_confusion_matrix();
    generate_formant_data();
    generate_generational_data();
    generate_endangered_data();
    generate_tsne_data();
    generate_dialect_points();

    printf("\n========================================\n");
    printf("数据生成完成！共生成 7 个 CSV 文件\n");
    printf("使用 Python 脚本即可绘制所有图表\n");
    printf("========================================\n");

    return 0;
}