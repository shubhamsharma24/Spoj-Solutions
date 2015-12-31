#include <stdio.h>
#include <math.h>

int main()
{
	long long int a;
	long long int ans;
	int t;
	
	scanf("%d", &t);
	while (t--) {
		scanf("%lld", &a);
		if(a==0||a==1) 
			printf("1\n");
		else {
			ans = floor((log(2*acos(-1)*a)/2+a*(log(a)-1))/log(10))+1 ;
			printf("%lld\n", ans);
		}
	}
	return 0;
}
