#include<stdio.h>
int main() {
	double a, b, c, x1, x2,deta;
	scanf("%lf%lf%lf", &a,&b,&c);
	deta = b * b - 4*a*c;
	if (deta < 0)
		printf("no roots");
	else if (deta == 0)
		printf("x1=x2=%lf", -b / (2 * a));
	else {
		c = sqrt(deta);
		printf("x1=%lf", (c - b) / (2 * a));
		printf("x2=%lf", (-c - b) / (2 * a));
	}
		


}