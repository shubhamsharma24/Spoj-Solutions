#include <stdio.h>
#include <math.h>

int main()
{
	double a;
	double b;
	double c;
	double d;
	double s;
	double r;
	int t;
	
	while (t--) {
	
		scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
		
		s = (a + b + c + d)/ 2;
		r = (s-a)*(s-b)*(s-c)*(s-d);
		r = pow(r, 0.5);
		printf("%0.2lf\n", r);
	}
	
	return 0;
	
}
