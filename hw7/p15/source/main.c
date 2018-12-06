#include<stdio.h>
#include<stdlib.h>
#define Size 10
void bubble(int *array, int size);
main()
{
	int a[Size] = { 2,4,6,8,10,12,89,68,45,37 };
	int i;
	printf("Data item in oringin order: ");
	for (i = 0; i < Size; i++)
	{
		printf("%d ", a[i]);
	}
	bubble(a, Size);
	printf("\n");
	for (i = 0; i < Size; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	system("pause");
}
void bubble(int *array, int size)
{
	int pass, j,hold;
	for (pass = 0; pass < Size-1; pass++)
	{
		for (j = 0; j < Size-1; j++)
		{
			if (*(array+j) > *(array + j+1))
			{
				hold = *(array + j);
				*(array + j) = *(array + j + 1);
				*(array + j + 1) = hold;
			}
		}
	}
}