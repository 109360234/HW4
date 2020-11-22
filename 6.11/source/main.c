#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	int temp;
	int swap=0;
	int A[9] = {3,9,6,8,16,62,62,19,2};
		for (int i = 0; i < 8; i++)
		{
			 swap = 0;
			for (int j = 0; j <8; j++)
			{
				if (A[j] > A[j + 1])
				{
					temp = A[j];
					A[j] = A[j + 1];
					A[j + 1] = temp;
					swap = 1;
				}
			}
			if (swap==0)
				break;
		}
		printf("最大值%d", A[8], "\n");
		printf("最小值%d", A[0], "\n");
	system("pause");
	return 0;
}
