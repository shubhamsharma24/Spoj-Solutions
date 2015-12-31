#include<stdio.h>
int main()
{
	long long int n,r;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		r=(n*(n+2)*(2*n+1))/8;
		printf("%lld\n",r);
    }
	
	return 0;
}
