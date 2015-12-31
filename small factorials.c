#include<stdio.h>
int fact(int);
int main()
{
	int i,n,x;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		fact(x);
		
	}
}
int fact(int a)
{
	int j;
	long long k;
	k=1;
	for(j=1;j<=a;j++)
	{
		k=k*j;
		
	}
	printf("%lld\n",k);
	system("pause");
}
