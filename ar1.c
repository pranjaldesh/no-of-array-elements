#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int array[]={1,2,3,4,5,6,7,8,9,10};
	int n;
	n=sizeof(array)/sizeof(int);
	printf("No.of elements in the array: %d\n",n);
	getch();
}