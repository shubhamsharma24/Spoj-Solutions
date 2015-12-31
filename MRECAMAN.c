#include <stdio.h>
#define max 500000
#define max2 5000000
long int a[max];
long int b[max2] = {0};

int main() 
{
	int l;
	int size;
	int key;
	long int i;
	
	size = 1;
	l = 0;
	a[0] = 0;
	b[0] = 1;
	
	scanf("%ld", &i);
	while( i != -1) {
		if (i == 0) {
			printf("0\n");
		} else {
			for ( l = size; l <= i; l++) {
				key = a[l-1] - l;
				if ( key > 0 && (b[key] == 0) ) {
					a[l] = key;
					b[key] = 1;			
				} else {
					key = a[l-1] + l;
					a[l] = key;
					b[key] = 1;	
				}
				size++;
			}
			printf("%ld\n", a[l-1]);
		}
		
		scanf("%ld", &i);
	}
	return 0;
}

