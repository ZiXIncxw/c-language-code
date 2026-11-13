#define _CRT_SECURE_NO_WARNINGS 1


int main()
{
	//Queue p;
	//QueueInit(&p);
	//QueuePush(&q, root);
	//while (!QueueEmpty(&p))
	//{
	//	BTNode* top = QueueFront(&p);  // 取出队首
	//	printf("%d ", top->data);
	//	QueuePop(&p);
	//	if(root->left)
	//	QueuePush(&p, root->left);
	//	if(root->right)
	//	QueuePush(&p, root->right);
	//}
	//QueueDestroy(&p);
	return 0;
}

bool BinaryTreeComplete(BTNode* root)
{
	Queue p;
	QueueInit(&p);
	QueuePush(&q, root);
	while (!QueueEmpty(&p))
	{
		BTNode* top = QueueFront(&p);  // 取出队首
		QueuePop(&p);
		if (top == NULL)
		{
			break;
		}
		QueuePush(&p, root->left);
		QueuePush(&p, root->right);
	}
	while (!QueueEmpty(&p))
	{
		BTNode* top = QueueFront(&p);  // 取出队首
		QueuePop(&p);
		if (top != NULL)
		{
			QueueDestroy(&p);
			return false;
		}
		QueueDestroy(&p);
		return true;
	}
	QueueDestroy(&p);
}



