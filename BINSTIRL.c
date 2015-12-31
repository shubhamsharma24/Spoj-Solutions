#include<stdio.h>

int main()
{
    int d;
	int i;
	long long int n,m,z,w,q;
	
    scanf("%d",&d);
    
	for(i=1 ; i<=d ; i++)
    {
        scanf("%lld%lld",&n,&m);
        z = n - m;
        w = (m - 1) / 2;
        q = z & w;
        if(q == 0) 
			printf("1\n");
        else 
			printf("0\n");
    }
    return 0;
}
