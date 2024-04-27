#define  _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
int main()
{
	int i = 0;
	scanf("%d", &i);
	while (i)
	{
		printf("%d", i % 10);
		i = i / 10;
	}
	return 0;
}
