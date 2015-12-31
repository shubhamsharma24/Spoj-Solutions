#include <stdio.h>
#include <string.h>

int gcd (int a, int b);
int con (char str[], int d);

int main() {
	int t;
	char str[255];
	int a;
	
	scanf("%d", &t);
	
	while(t--) {
		scanf("%d", &a);
		scanf("%s", str);
		if (a == 0) {
			printf("%s\n", str);
		} else if (str[0] == '0') {
			printf("%d\n", a);
		} else {
			printf("%d\n", gcd(a, con(str, a)));
		}
	}	
	return 0;
}

int gcd(int a, int b)
{
	if (b==0)
		return a;
	else
		return gcd(b,a%b);
}

int con(char str[], int d)
{
	int r;
	int i;
	
	r = 0;
	
	for ( i = 0; str[i]; i++) {
		r = 10*r + (str[i] - '0');
		r = r % d;
	}
	
	return r;
}
