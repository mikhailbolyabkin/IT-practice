#include <math.h>
#include "func.h"

namespace while_loop
{
	int findFirstElement(double eps)
	{
		double i = 0;

		while(fabs(a(i)) >= eps) i++;

		return i;
	}
}
