#include <stdio.h>

int pi(int n)
{
     int result = n;
     int i;
       for(i = 2; i*i <= n;i++) 
       { 
         if (n % i == 0) 
         result -= result / i; 
         while (n % i == 0) 
         n /= i; 
       } 
       if (n > 1)
       result -= result / n; 
       return result; 
}

int main()
{
    int t;
	int num;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &num);
        printf("%d\n", pi(num));
    }
    return 0;
}
