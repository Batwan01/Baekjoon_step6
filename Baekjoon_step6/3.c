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
		if (a == m) NULL;
		else
		{
			for (j = a; j < m; j++)
			{
				basket[1][j] = basket[0][j]; //�պκ� ����
			}
			h = a;
			for (j = m; j <= b; j++)
			{
				basket[0][h] = basket[0][j]; //�̵�~�� ��(a)���� ������
				h++;
			}
			h = (b - m + 1) + a;
			for (j = a; j < m; j++)
			{
				basket[0][h] = basket[1][j]; //��~�̵� �̵�(m)���� ������
				h++;
			}
		}
	}
	for (i = 1; i <= n; i++)
	{
		printf("%d ",basket[0][i]);
	}
}