#define  _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
int leap(int year)
{
	if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
		return 1;
	else
		return 0;

}

int sum(int year, int months, int days)
{
	int d = 0, i = 0;
	int a[] = { 0,31,29,31,30,31,30,31,31,30,31,30 ,31 };
	int b[] = { 0,31,28,31,30,31,30,31,31,30,31,30 ,31 };
	if (leap(year) == 1)
	{
		for (i = 0; i < months; i++)
		{
			d += a[i];
		}
	}
	else
	{
		for (i = 0; i < months; i++)
		{
			d += b[i];
		}
	}
	d = d + days;
	return d;
}


int main()
{
	int year = 0, months = 0, days = 0, n = 0;
	printf("�����������գ�");
	while (scanf("%d %d %d", &year, &months, &days) != EOF)
	{
		n = sum(year, months, days);
		printf("������%d��ĵ�%d��\n", year, n);
	}
	return 0;
}



