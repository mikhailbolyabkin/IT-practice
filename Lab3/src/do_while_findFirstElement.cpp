#include <math.h>
#include "func.h"

namespace do_while_loop
{
	int findFirstElement(double eps)
	{
		double i = 0;

		do
		{
			if(fabs(a(i)) <= eps) break;
			i++;
		}
		while(fabs(a(i)) >= eps);

		return i;
	}
}
