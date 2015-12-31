#include <stdio.h>

int main() 
{
	int t;
	int n;
	int i;
	int pos;
	
	scanf("%d", &t);
	
	while (t--) {
		scanf("%d", &n);
		pos = 0;
		for (i = 2; i <=n; i++) {
			pos = (pos + n + 1 - i) % i;
		}
		printf("%d\n", (pos+1));
	}
	return 0;
}
