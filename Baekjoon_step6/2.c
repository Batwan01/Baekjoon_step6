#include <stdio.h>

int main()
{
	int i, j=1, a, s=1,h;
	scanf("%d", &a);
	for (i = 0; i < 2*a-1; i++)
	{	
		if (i < a)
		{
			for (h = 0; h < a - j; h++)
			{
				printf(" ");
			}
			for (h = 0; h < s; h++)
			{
				printf("*");
			}
			j++;
			s += 2;
		}
		else if (i == a) 
		{
			s -= 4; 
			j = 1;
			for (h = 0; h < j; h++)
			{
				printf(" ");
			}
			for (h = 0; h < s; h++)
			{
				printf("*");
			}
			j++;
			s -= 2;
		}
		else
		{
			for (h = 0; h < j; h++)
			{
				printf(" ");
			}
			for (h = 0; h < s; h++)
			{
				printf("*");
			}
			j++;
			s -= 2;
		}
	printf("\n");
	}
}