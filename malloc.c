#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	int *p,*table;
	int size;
	printf("enter size of table\n");
	scanf("%d",&size);
	if((table=(int*)malloc(size*sizeof(int)))==NULL)
	{
		printf("no space available");
		return 0;
	}
	printf("address of first byte = %d \n",table);
	printf("enter table values");
	for(p=table;p<table+size;p++)
	scanf("%d",p);
	for(p=table+size-1;p>=table;p--)
	printf("%d is stored at %d\n",*p,p);
	return 0;
	getch();
}
