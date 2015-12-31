#include<stdio.h>
int main()
{
	int i,n;
	long long int x,y,z;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld%lld%lld",&x,&y,&z);
		if(x%2==0&&y%2==0&&z%2!=0)
		printf("NO\n");
		else if(z>x&&z>y)
		printf("NO\n");
		else if(x==y&&z<x)
		printf("NO\n");
		else if(z<x&&z<y&&z!=1)
		printf("NO\n");
		else if(x%2!=0&&y%2!=0&&z%2!=0)
		printf("NO\n");
		else
		printf("YES\n");
	}
	return 0;
}
