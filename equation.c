#include<stdio.h>
int main() {
	double a, b, c, d, e, f,x,y;
	scanf("%lf%lf%lf%lf%lf%lf", &a,& b,& c,&d,&e, &f );

	if (a*e - b * d == 0)
		printf("no roots");
	else 
		x = (c*e - b * f) / (a*e - b * d);
		y = (a*f - c * d) / (a*e - b * d);

		printf("x=%lf\n", x);
		printf("y=%lf", y);
	


}