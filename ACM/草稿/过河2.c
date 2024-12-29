#include <stdio.h>
long long f1[40][40];
long long f2[40][40];
int n, m, a, b;
void sign(int x, int y) {
	f2[x][y] = 1;
	f2[x - 1][y - 2] = 1;
	f2[x - 1][y + 2] = 1;
	f2[x - 2][y - 1] = 1;
	f2[x - 2][y + 1] = 1;
	f2[x + 1][y + 2] = 1;
	f2[x + 1][y - 2] = 1;
	f2[x + 2][y + 1] = 1;
	f2[x + 2][y - 1] = 1;
}

int main() 
{
	scanf("%d%d%d%d", &n, &m, &a, &b);
	//标记一下马的位置
	sign(a , b);
	f1[1][0] = 1;
	for (int i = 1; i <= n+1; i++)
	{
		for (int j = 1; j <= m+1; j++)
		{
			f1[i][j] = f1[i - 1][j] + f1[i][j - 1];
			if (f2[i - 1][j - 1]) //如果被标记过，则赋值为0
			{
				f1[i][j] = 0;
			}
		}
	}
	printf("%ld",f1[n + 1][m + 1]);
}
