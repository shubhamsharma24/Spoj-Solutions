#include<stdio.h>
#define n 1000
int main()
{
	int x,y,count,max;
	char c[n],ch,s;
	
	x=0;
    max=0;
	gets(c);
	while(c[x]!='\0')
	{
		ch=c[x];
	    y=x+1;
	    count=1;
	    while(c[y]!='\0')
	    {
			if(c[y]==ch)
			{
				count++;
			    
			}
			y++;
	    }
		if(count>max)
		{
			s=ch;
		    max=count;
		}
	    x++;
   }
     printf("%c",s);
     return 0;
}
