#include<stdio.h>
#define m 1000
int sort(int*,int);
int main()
{
	int i,j,k,n,t,l,s,r;
	int hm[m],hf[m],c[m],d[m],a[m];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		t=0;
		scanf("%d",&k);
		for(j=0;j<k;j++)
		{
			scanf("%d",&hm[j]);
			for(l=0;l<j;l++)
			{
				for(s=l+1;s<j;s++)
				{
					if(a[l]>a[s])
					{
						r=a[l];
						a[l]=a[s];
						a[s]=r;
					}
				}
			}
			
		}
		for(j=0;j<k;j++)
		{
			scanf("%d",&hf[j]);
			for(l=0;l<j;l++)
			{
				for(s=l+1;s<j;s++)
				{
					if(a[l]>a[s])
					{
						r=a[l];
						a[l]=a[s];
						a[s]=r;
					}
				}
			}
		}
		for(j=0;j<k;j++)
		{
			if(hm[j]>=0&&hm[j]<=10&&hf[j]<=10&&hf[j]>=0)
			{
				c[j]=hm[j]*hf[j];
			    t+=c[j];
		    }    
		}
		d[i]=t;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",d[i]);
    }
    return 0;
}
int sort(int b,int x)
{
	for(l=0;l<x;l++)
			{
				for(s=l+1;s<x;s++)
				{
					if(a[l]>a[s])
					{
						r=a[l];
						a[l]=a[s];
						a[s]=r;
					}
				}
			}
}

