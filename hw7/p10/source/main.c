#include<stdio.h>
#include<stdlib.h>
int bear(int *n) {
	*n = (*n) * (*n)*(*n);
	//return n * n*n;
}

main()
{
	int number = 5;
	printf("The original value of number is %d\n", number);
    bear(&number);
	printf("The new value of number is%d\n", number);
	system("pause");
}