#include <stdio.h>

int main()
{
	int a;
	int b;
	int c;
	int i;
	while (1) {
		scanf("%d %d %d", &a, &b, &c);
		if ( a == 0 && b == 0 & c == 0) {
			break;
		}  
		
		if ( (b - a) == (c - b) ) {
			printf("AP ");
			i = b - a;
			i = i + c;
			printf("%d\n", i);
		} else {
			printf("GP ");
			i = b / a;
			i = i*c;
			printf("%d\n", i);
		}
	}
	return 0;
	
}
