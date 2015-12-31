#include<stdio.h>
int pow(int a,int b)
{
	int i=1,k;
	k=1;
	while(i<=b)
	{
		k=k*a;
		i++;
    }
    return k;
}
	
int main()
{
	int N,D,r;
	while(1)
	{
		scanf("%d%d",&N,&D);
		if(N==0&&D==0)
		return 0;
		else
		{
			r=pow(N,D);
			printf("%d\n",r);
	    }
    }
    return 0;
}
