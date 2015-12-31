#include <stdio.h>

int main()
{
	int i;
	int j;
	int m;
	int n;
	int gs;
	int ms;
	int a[10000];
	int b[10000];
	
	gs = 0;
	ms = 0;
	
	scanf("%d", &i);
	printf("\n");
	
	while (i > 0) {
		scanf("%d", &m);
		scanf("%d", &n);
		for ( j = 0; j < m; j++) {
			scanf("%d", &a[j]);
			gs += a[j];
		}
		for ( j = 0; j < n; j++) {
			scanf("%d", &b[j]);
			ms += b[j];
		}
		if ( gs >= ms) {
			printf("Godzilla\n");
		} else if( ms > gs) {
			printf("MechaGodzilla\n");
		} else {
			printf("uncertain\n");
		}
		i--;
	}
		
		return 0;
}
