#include <stdio.h>

int main()
{
	int t;
	long int n;
	long long int ans;
	
	scanf("%d", &t);
	printf("\n");
	while(t--) {
		scanf("%ld", &n);
		ans = ((n*(3*n +1)) / 2) % 1000007;
		printf("%lld\n", ans);
	}
	
	return 0;
}
