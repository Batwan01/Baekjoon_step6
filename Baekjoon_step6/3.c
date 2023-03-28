#include <stdio.h>

int main()
{
	int n, try,i, j, h, a, b, m;
	int basket[3][100];
	scanf("%d %d", &n, &try);
	for (i = 1; i <= n; i++)
	{
		basket[0][i] = i;
	}
	for (i = 0; i < try; i++)
	{
		scanf("%d %d %d", &a, &b, &m);
		for (j = a; j <= m; j++)
		{
			basket[1][j] = basket[0][j]; //앞부분 저장
		}
		for (j = m; j <= b; j++)
		{
			h = a;
			basket[0][a] = basket[0][j]; //미들~끝 앞(a)으로 보내기
			h++;
		}
		for (j = a; j <= m; j++)
		{
			h = m;
			basket[0][m] = basket[1][j]; //앞~미들 미들(m)으로 보내기
			h++;
		}
	}
	for (i = 1; i <= n; i++)
	{
		printf("%d ",basket[0][i]);
	}
}