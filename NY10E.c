#include <stdio.h>

void f_name(long long int *);

int main()
{
	long long int a[10] = {1, 2, 3,  4, 5, 6, 7, 8, 9, 10};
	int t;
	int x;
	int y;
	
	scanf("%d", &t);
	
	while (t--) {
		scanf("%d %d", &x, &y);
		y--;
		long long int a[10] = {1, 2, 3,  4, 5, 6, 7, 8, 9, 10};
		while(y--) {
			f_name(a);
		}
		printf("%d %lld\n", x, a[9]);
	}
	
	return 0;
}

void f_name(long long int *a)
{
	int i;
	for ( i = 1; i < 10; i++) {
		a[i] = a[i] + a[i-1];
	}
}
