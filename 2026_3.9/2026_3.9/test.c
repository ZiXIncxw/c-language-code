#define _CRT_SECURE_NO_WARNINGS 1

#include "stack.h"

int main()
{
	Stack ST;
	STInit(&ST);
	STPush(&ST, 1);
	STPush(&ST, 2);
	STPush(&ST, 3);
	STPush(&ST, 4);
	while (!STEmpty(&ST))
	{
		printf("%d ", STTop(&ST));
		STPop(&ST);
	}
	STDestroy(&ST);

	return 0;
}




#include <stdbool.h>
#include <string.h>

bool isValid(char* s)
{
    int len = strlen(s);
    char Stack[len + 1];
    int top = -1;
    for (int i = 0; i < len; i++)
    {
        char ch = s[i];
        if (ch == '(' || ch == '[' || ch == '{')
        {
            Stack[++top] = ch;
        }
        else
        {
            if (top == -1)
            {
                return false;
            }
            char topChar = Stack[top];
            if ((ch == ')' && topChar != '(') || (ch == ']' && topChar != '[') || (ch == '}' && topChar != '{'))
            {
                return false;
            }
            top--;
        }

    }
    return true;
}



