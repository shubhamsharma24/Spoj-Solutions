#include <stdio.h>


int main ()
{
    int i;
    scanf("%d", &i);
    
    while (i--)
    {
        int a_plus_b, a_minus_b;
        scanf("%d", &a_plus_b);
        scanf("%d", &a_minus_b);
        
        int a = (a_plus_b + a_minus_b);
        int b = (a_plus_b - a);
        
        printf("%d\n%d\n", a, b);
    }
    return 0;
}
