#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef int BTDataType;

typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	BTDataType data;
}BTNode;

BTNode* BTBuy(BTDataType x)
{
	BTNode* newnode = (BTNode*)malloc(sizeof(BTNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		return NULL;
	}
	newnode->data = x;
	newnode->left = newnode->right = NULL;
	return newnode;
}

BTNode* CreateTree()
{
	BTNode* n1 = BTBuy(1);
	BTNode* n2 = BTBuy(2);
	BTNode* n3 = BTBuy(3);
	BTNode* n4 = BTBuy(4);
	BTNode* n5 = BTBuy(5);
	BTNode* n6 = BTBuy(6);
	BTNode* n7 = BTBuy(7);

	n1->left = n2;
	n1->right = n4;
	n2->left = n3;
	n4->left = n5;
	n4->right = n6;
	//n5->left = n7;
	return n1;
}

void PreOrder(BTNode * root)
{
	if (root == NULL)
	{
		printf("N ");
		return;
	}
	printf("%d ", root->data);
	PreOrder(root->left);
	PreOrder(root->right);
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

void PoOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("N ");
		return;
	}

	PoOrder(root->left);
	PoOrder(root->right);
	printf("%d ", root->data);
}

//int TreeSize(BTNode* root)
//{
//	int size = 0;
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

int TreeSize(BTNode* root)
{
	static int size = 0;
	if (root == NULL)
		return 0;
	else
		++size;

	TreeSize(root->left);
	TreeSize(root->right);

	return size;
}

int main()
{
	BTNode* root = CreateTree();
	//PreOrder(root);
	//InOrder(root);
	//PoOrder(root);
	
	printf("%d ", TreeSize(root));
	printf("%d ", TreeSize(root));
	printf("%d ", TreeSize(root));

	return 0;
}









