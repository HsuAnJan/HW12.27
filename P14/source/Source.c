#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *a;
	int count = 0;
	char ch;
	a = fopen("C://Users/luke/Desktop/107360240_安然/P14/welcome.txt", "r");

	if (a != NULL)
	{
		while ((ch = getc(a)) != EOF)
		{

			printf("%c", ch);
			count++;
		}
		fclose(a);
	}
	else
	{
		printf("檔案開啟失敗\n");
	}
	printf("\n總共有%d個字元\n", count);
	system("pause");
}