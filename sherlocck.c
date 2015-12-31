#include<stdio.h>
int main()
{
	int n,m,x,y;
	x=0;
	char c[100],ch;
	scanf("%d",&y);
	scanf("%s%d",c,&n);
	
	while(c[x]!='\0')
	{
		ch=c[x];
		if(ch>='A')
		{if(ch+n>'Z')
		{
			m='Z'-ch;
			ch='A'+m;
	    }
      	else
	    ch=ch+n;
    }
    if(ch>='a')
    {
			if(ch+n>'z')
		{
			m='z'-ch;
			ch='a'+m;
	    }
      	else
	    ch=ch+n;
	}
	c[x]=ch;
	x++;
    }
    puts(c);
    system("pause");
    return 0;
    
}
