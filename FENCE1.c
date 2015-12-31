# include <stdio.h>
# include <math.h>

int main()
{
	int l;
	double area;
	
	scanf("%d", &l);
	
	while(l != 0) {
		area = (l*l) / (2*M_PI); // it has to be semicircle => l = pi*r, hence find area of semicircle //
		printf("%.2lf\n", area);
		scanf("%d", &l);
	}
	
	return 0;
}
		
