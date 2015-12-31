#include<stdio.h>

int main()
{
	int t;
	int i;
	long long int a3;
	long long int a3l;
	long long int sum;
	long long int n;
	long long int a;
	long long int c;
	long long int d;
	
	scanf("%d",&t);
	while(t--) {
		scanf("%lld %lld %lld", &a3, &a3l, &sum);
		n = (sum*2) / (a3 + a3l);
		printf("%lld\n", n);
		d = (a3l - a3) / (n - 5);
		a = a3 - 2*d;
		c = a;
		for ( i = 1; i <= n; i++) {
			printf("%lld ", a);
			a = c + i*d;
		}
		printf("\n");
		
	}
	
	return 0;
}
