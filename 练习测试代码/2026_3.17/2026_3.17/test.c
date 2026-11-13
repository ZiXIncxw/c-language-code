#define _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

typedef int BTDataType;
typedef struct bynode
{
	struct bynode* left;
	struct bynode* right;
	BTDataType data;
}BTNode;

// 二叉树第k层节点个数
int TreeLevelKSize(BTNode* root, int k)
{
	if (root == NULL)
		return 0;

	if (k == 1)
		return 1;

	// 子问题
	return TreeLevelKSize(root->left, k - 1)
		+ TreeLevelKSize(root->right, k - 1);
}

BTNode* TreeFind(BTNode* root, BTDataType x)
{
	if (root == NULL)
		return NULL;
	if (root->data == x)
		return root;
	TreeFind(root->left, x);
	TreeFind(root->right, x);

}

//// 二叉树查找值为x的节点
//BTNode* TreeFind(BTNode* root, BTDataType x)
//{
//	if (root == NULL)
//		return NULL;
//
//	if (root->data == x)
//		return root;
//
//	BTNode* ret1 = TreeFind(root->left, x);
//	if (ret1)
//		return ret1;
//
//	BTNode* ret2 = TreeFind(root->right, x);
//	if (ret2)
//		return ret2;
//
//	return NULL;
//}

//BTNode* TreeFind(BTNode* root, BTDataType x)
//{
//	if (root == NULL)
//		return NULL;
//
//	if (root->data == x)
//		return root;
//
//	BTNode* ret1 = TreeFind(root->left, x);
//	if (ret1)
//		return ret1;
//
//	return TreeFind(root->right, x);
//}
// 二叉树查找值为x的节点
//BTNode* TreeFind(BTNode* root, BTDataType x)
//{
//	if (root == NULL)
//		return NULL;
//
//	if (root->data == x)
//		return root;
//
//	BTNode* ret1 = TreeFind(root->left, x);
//	if (ret1)
//		return ret1;
//
//	BTNode* ret2 = TreeFind(root->right, x);
//	if (ret2)
//		return ret2;
//
//	return NULL;
//}

//BTNode* TreeFind(BTNode* root, BTDataType x)
//{
//	if (root == NULL)
//		return NULL;
//
//	if (root->data == x)
//		return root;
//
//	BTNode* ret1 = TreeFind(root->left, x);
//	if (ret1)
//		return ret1;
//
//	return TreeFind(root->right, x);
//}

int main()
{
	BTNode* root = CreatBinaryTree();
	PrevOrder(root);
	printf("\n");

	InOrder(root);
	printf("\n");
	TreeFind(root,)
	//printf("%d\n", fun(10000));

	/*int size = 0;
	TreeSize(root, &size);
	printf("TreeSize:%d\n",size);

	size = 0;
	TreeSize(root, &size);
	printf("TreeSize:%d\n", size);*/

	printf("TreeSize:%d\n", TreeSize(root));
	printf("TreeLeafSize:%d\n", TreeLeafSize(root));
	printf("TreeHeight:%d\n", TreeHeight(root));
	printf("TreeLevelKSize:%d\n", TreeLevelKSize(root, 3));
	printf("TreeLevelKSize:%d\n", TreeLevelKSize(root, 4));

	return 0;
}

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isUnivalTree(struct TreeNode* root) {
	if (root == NULL)
		return true;
	if (root->left && root->left->val != root->val)
		return false;
	if (root->right && root->right->val != root->val)
		return false;

	return isUnivalTree(root->left) && isUnivalTree(root->right);
}

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
	if (p == NULL && q == NULL)
		return true;
	if (p == NULL || q == NULL)
		return false;

	if (p->val != q->val)
		return false;

	return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);

}

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isMirror(struct TreeNode* p, struct TreeNode* q)
{
	if (p == NULL && q == NULL)
		return true;
	if (p == NULL || q == NULL)
		return false;
	return (p->val == q->val)
		&& isMirror(p->left, q->right)
		&& isMirror(p->right, q->left);
}
bool isSymmetric(struct TreeNode* root) {
	if (root == NULL)
		return true;
	return isMirror(root->left, root->right);
}

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
	if (p == NULL && q == NULL)
		return true;
	if (p == NULL || q == NULL)
		return false;

	if (p->val != q->val)
		return false;
	return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);

}
bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot) {
	if (root == NULL)
		return false;
	if (subRoot == NULL)
		return true;
	// 检查当前节点为根的树是否与 subRoot 相同
	if (isSameTree(root, subRoot))
		return true;
	// 否则递归检查左子树和右子树
	return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);

}
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 /**
  * Note: The returned array must be malloced, assume caller calls free().
  */
int treeSize(struct TreeNode* root) {
	if (root == NULL)
		return 0;
	return treeSize(root->left) + treeSize(root->right) + 1;
}
void preorder(struct TreeNode* root, int* a, int* i)
{
	if (root == NULL)
	{
		return;
	}
	a[(*i)++] = root->val;
	preorder(root->left, a, i);
	preorder(root->right, a, i);
}
int* preorderTraversal(struct TreeNode* root, int* returnSize) {
	*returnSize = treeSize(root);
	int* a = (int*)malloc(sizeof(int) * (*returnSize));
	int i = 0;
	preorder(root, a, &i);
	return a;

}