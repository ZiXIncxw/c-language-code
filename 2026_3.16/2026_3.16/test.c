#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

typedef int BTDataType;
typedef struct BinaryTreeNode
{
	BTDataType data;
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
}BTNode;

BTNode* BuyNode(int x)
{
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	if (node == NULL)
	{
		perror("malloc fail");
		return NULL;
	}

	node->data = x;
	node->left = NULL;
	node->right = NULL;

	return node;
}

BTNode* CreatBinaryTree()
{
	BTNode* node1 = BuyNode(1);
	BTNode* node2 = BuyNode(2);
	BTNode* node3 = BuyNode(3);
	BTNode* node4 = BuyNode(4);
	BTNode* node5 = BuyNode(5);
	BTNode* node6 = BuyNode(6);
	BTNode* node7 = BuyNode(6);


	node1->left = node2;
	node1->right = node4;
	node2->left = node3;
	node4->left = node5;
	node4->right = node6;
	//node5->right = node7;

	return node1;
}

void PrevOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("N ");
		return;
	}

	printf("%d ", root->data);
	PrevOrder(root->left);
	PrevOrder(root->right);
}

void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("N ");
		return;
	}

	InOrder(root->left);
	printf("%d ", root->data);
	InOrder(root->right);
}

//int size = 0;
//int TreeSize(BTNode* root)
//{
//	if (root == NULL)
//		return 0;
//	else
//		++size;
//
//	TreeSize(root->left);
//	TreeSize(root->right);
//
//	return size;
//}

//void TreeSize(BTNode* root, int* psize)
//{
//	if (root == NULL)
//		return 0;
//	else
//		++(*psize);
//
//	TreeSize(root->left, psize);
//	TreeSize(root->right, psize);
//}

int TreeSize(BTNode* root)
{
	return root == NULL ? 0 :
		TreeSize(root->left) + TreeSize(root->right) + 1;
}

int main()
{
	BTNode* root = CreatBinaryTree();
	
	/*int size = 0;
	TreeSize(root, &size);
	printf("TreeSize:%d\n", size);
	size = 0;
	TreeSize(root, &size);
	printf("TreeSize:%d\n", size);*/

	return 0;
}






