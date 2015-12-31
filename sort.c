#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,c;
	int a[]={4,1,8,7};
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<3;j++)
		{
			if(a[i]>a[j])
			{
				c=a[i];
			    	a[i]=a[j];
			    	a[j]=c;
		    }
		}
	}
	for(i=0;i<3;i++)
	printf("%d",a[i]);
	
	getch();
}
