#include<stdio.h>
#include<conio.h>
void quick_sort (long long *a, long long n) {
    if (n < 2)
        return;
    long long p = a[n / 2];
    long long *l = a;
    long long *r = a + n - 1;
    while (l <= r) {
        if (*l < p) {
            l++;
            continue;
        }
        if (*r > p) {
            r--;
            continue; // we need to check the condition (l <= r) every time we change the value of l or r
        }
        long long t = *l;
        *l++ = *r;
        *r-- = t;
    }
    quick_sort(a, r - a + 1);
    quick_sort(l, a + n - l);
}
int main()
{
	long long array[100000],no,i,a,x,count,j,b;
	scanf("%lld",&no);
	int arr[no];
	scanf("%lld",&a);
	b=a;
	for(i=0;i<no;i++)
    scanf("%lld",&arr[i]);
    quick_sort(&arr[0],no);
    for(i=0;i<no-1;i++)
    {  count=0,a=b;
		for(j=i+1;j<no;j++)
		{
			x=arr[no-1-i]-arr[no-1-j];
			printf("arr[%d]=%d\n",no-1-i,arr[no-1-i]);
		    printf("arr[%d]=%d\n",no-1-j,arr[no-1-j]);
			printf("x=%d\n",x);
			a=a-x;
			count++;
			if(a<0)
			break;
		}
		array[i]=count;
		printf("%d\n",array[i]);
	}
	quick_sort(&array[0],no);
	printf("ans=%lld\n",array[no-1]);
	getch();
	return 0;
}
	
			
			
