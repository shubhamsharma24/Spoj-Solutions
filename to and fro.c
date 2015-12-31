#include <stdio.h>

int main()
{
	int i;
	int j;
	int k;
	int n;
	scanf("%d", &k);
	char c[n][k];

	for ( n = 0; n < 6; n++) {
		if ( n % 2 == 0) {
			for ( i = 0; i < k; i++) {
				scanf("%c", &c[n][i]);
			}
		} else {
			for ( i = (k - 1); i >= 0; i++) {
				scanf("%c", &c[n][i]);
			}
		}
	}
	for ( i = 0; i < k; i++) {
		for ( n = 0; n < 6; n++) {
			printf("%c", c[n][i]);
		}
	}
	
	return 0;
}
