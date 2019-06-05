#include <stdio.h>
#include <math.h>

int main()
{
	double x, y;

	x = 5;
	y = pow(cos(x), 2) - pow(sin(x), 2);

	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);

	scanf("%lf", &x);
	y = 1 - pow(cos(x), 2) - pow(sin(x), 2);

	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);
	
	system("pause");
	return 0;
}
