#define  _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
int fib(int N)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (N > 2)
	{
		c = a + b;
		a = b;
		b = c;
		N--;
	}
	return c;
}

int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		int r = fib(n);
		printf("%d\n", r);
	}

	return 0;
}

