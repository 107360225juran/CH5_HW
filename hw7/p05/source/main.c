#include<stdio.h>
#include<stdlib.h>
main()
{
	int a=7;
	int *aptr;
	aptr = &a;
	printf("The address of a is %p\nthe address of aptr is %p\n", &a, aptr);
	printf("\n\nThe value of a is %d\nthe value of aptr is %d", a, *aptr);
	printf("\n\nShowing that * and & are complement of each other\n"
		"&*aptr= %p\n*&aptr= %p", &*aptr, *&aptr);
	system("pause");
}
