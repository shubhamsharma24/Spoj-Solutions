#include <stdio.h>

int main()
{
	long long int i;
	long long int j;
	long long int n;
	long long int max;
	long long int k;
	
	scanf("%lld", &n);
	printf("\n");
	
	long long int arr[n];
	
	for ( i = 0; i < n; i++) {
		scanf("%lld", &arr[i]);
	}
	scanf("%lld", &k);
	max = arr[0];
	for ( i = 0; i <= n-k; i++ ) {
		if ( i == 0 || max == arr[i-1]) {
			max = arr[i];
			for ( j = i; j <= k; j++ ) {
				if(arr[j]>max)
                max = arr[j];
			}    
        } else {
            	if(arr[i+k-1]>max)
                	max = arr[i+k-1];
        }
        printf("%lld ",max);
            if(i + k >= n){
                break;
            }
    }
                
	return 0;	
}
