#include <stdio.h>
#include <math.h>

double f(double x);

int main()
{
	double x, y;

	scanf("%lf", &x);
	y = f(x);

	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);
	
	system("pause");
	return 0;
}

double f(double x)
{
	return pow(cos(x), 2) - pow(sin(x), 2);
}
