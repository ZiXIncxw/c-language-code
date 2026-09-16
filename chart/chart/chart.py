import numpy as np
import matplotlib.pyplot as plt
from matplotlib.colors import LinearSegmentedColormap
import geopandas as gpd
import matplotlib
matplotlib.use('TkAgg')

# 创建模拟数据
def create_liaoning_base():
    """创建辽宁基础地图（需要实际 shapefile）"""
    # 如果没有 shapefile，可以使用模拟的边界数据
    # 这里返回一个空的地图对象，实际使用时需要加载真实数据
    fig, ax = plt.subplots(1, 1, figsize=(12, 10))
    
    # 模拟辽宁省边界（简化版）
    # 实际使用时：liaoning = gpd.read_file('path/to/liaoning.shp')
    # liaoning.plot(ax=ax, color='lightgray', edgecolor='black')
    
    return fig, ax

def plot_spatial_interpolation():
    """图 4-2 基频空间分布图"""
    fig, ax = create_liaoning_base()
    
    # 模拟插值网格
    x = np.linspace(118, 126, 100)
    y = np.linspace(38, 43, 100)
    X, Y = np.meshgrid(x, y)
    
    # 模拟基频数据
    Z = 180 + 20 * np.sin((X - 122) * 0.5) * np.cos((Y - 40) * 0.8)
    Z += 5 * np.random.randn(*Z.shape)
    
    # 绘制插值图
    cmap = LinearSegmentedColormap.from_list('freq', ['blue', 'green', 'yellow', 'red'])
    contour = ax.contourf(X, Y, Z, levels=20, cmap=cmap, alpha=0.8)
    plt.colorbar(contour, ax=ax, label='基频均值 (Hz)')
    
    ax.set_xlim(118, 126)
    ax.set_ylim(38, 43)
    ax.set_xlabel('经度')
    ax.set_ylabel('纬度')
    ax.set_title('图 4-2 辽宁方言基频空间分布图', fontsize=14, fontweight='bold')
    
    plt.tight_layout()
    plt.savefig('figure_4_2_f0_distribution.png', dpi=300, bbox_inches='tight')
    plt.show()

def plot_rhotic_density():
    """图 4-3 儿化音核密度图"""
    fig, ax = create_liaoning_base()
    
    # 模拟核密度数据
    x = np.linspace(118, 126, 100)
    y = np.linspace(38, 43, 100)
    X, Y = np.meshgrid(x, y)
    
    # 模拟儿化音密度
    Z = np.exp(-((X - 121.5)**2 + (Y - 41.2)**2) / 2) * 0.8
    Z += np.exp(-((X - 124)**2 + (Y - 41.5)**2) / 3) * 0.6
    Z = Z / Z.max()
    
    # 绘制等高线热力图
    contour = ax.contourf(X, Y, Z, levels=15, cmap='hot', alpha=0.8)
    plt.colorbar(contour, ax=ax, label='儿化音密度')
    
    ax.set_xlim(118, 126)
    ax.set_ylim(38, 43)
    ax.set_xlabel('经度')
    ax.set_ylabel('纬度')
    ax.set_title('图 4-3 儿化音核密度图', fontsize=14, fontweight='bold')
    
    plt.tight_layout()
    plt.savefig('figure_4_3_rhotic_density.png', dpi=300, bbox_inches='tight')
    plt.show()

def plot_dei_map():
    """图 4-8 濒危预警地图"""
    fig, ax = create_liaoning_base()
    
    # 模拟方言点
    points = {
        '丹东某镇': (124.35, 40.00, 2.4),
        '大连某村': (121.62, 38.92, 2.1),
        '锦州某镇': (121.13, 41.10, 1.8),
        '营口某乡': (122.23, 40.67, 1.9),
        '本溪某村': (123.77, 41.29, 1.7),
        '铁岭某镇': (123.73, 42.22, 1.6),
        '朝阳某乡': (120.45, 41.57, 1.5),
        '盘锦某村': (122.07, 41.12, 1.8),
        '辽阳某镇': (123.23, 41.27, 1.6),
        '鞍山某乡': (122.98, 41.08, 1.5),
        '阜新某村': (121.67, 42.02, 1.5),
        '葫芦岛某镇': (120.85, 40.72, 1.6),
    }
    
    # 绘制濒危点
    for name, (lon, lat, dei) in points.items():
        size = 100 + (dei - 1.5) * 150
        color = 'red' if dei >= 2.0 else 'orange' if dei >= 1.5 else 'yellow'
        ax.scatter(lon, lat, s=size, c=color, edgecolors='black', zorder=5, alpha=0.8)
        ax.annotate(f'{name}\nDEI={dei}', (lon, lat), xytext=(10, 10),
                   textcoords='offset points', fontsize=8)
    
    ax.set_xlim(118, 126)
    ax.set_ylim(38, 43)
    ax.set_xlabel('经度')
    ax.set_ylabel('纬度')
    ax.set_title('图 4-8 辽宁方言濒危预警地图', fontsize=14, fontweight='bold')
    
    plt.tight_layout()
    plt.savefig('figure_4_8_dei_map.png', dpi=300, bbox_inches='tight')
    plt.show()

# 运行地图生成函数
plot_spatial_interpolation()
plot_rhotic_density()
plot_dei_map()

pip install matplotlib numpy geopandas