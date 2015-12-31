#include<stdio.h> 

int main()
{
    int n;
    long long i;
    long long s;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%lld",&i);
        s=0;
        while(i)
        {
            i = i/5;
            s+=i;
        }
        printf("%lld\n",s);
    }

    return 0;
}
