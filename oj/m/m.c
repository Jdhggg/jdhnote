#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//异或函数 将数组每个元素累计异或
int xor (long long a[], int flog)
{
	long long	 res = 0;
	for (int i = 0; i < flog; i++)
	{
		res ^= a[i];
	}
	return res;
}	

int main()
{
	int n = 0, q = 0, c = 0, r = 0, l = 0;
	long long a[] = { 0 };
	int sum[] = { 0 };
	int j = 0;
	int longs[] = { 0 };
	int flog = 0;
	long long daian = 0;
	scanf("%d %d", &n, &q);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}//数组
	for (j = 0; j < q; j++)
	{

		scanf("%d %d %d", &l, &r, &c);
		// r,l,c
		int suns = 0;
		for (int f = 0; f < 2; f++)
		{

			if (a[f] % 2 == c % 2)
			{
				a[f] = a[f] + 1;
				suns = a[f] + suns;
			}

		}
		sum[j] = suns;
	}
	for (int bu = 0; bu < sizeof(sum); bu++)
	{
		longs[bu] = ((bu + 1) * sum[bu]);
	}
	flog = sizeof(longs);
	daian = xor (longs, flog);
	printf("%lld", daian);
	return 0;
}
