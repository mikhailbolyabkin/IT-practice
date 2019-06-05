#include <math.h>
#include "func.h"

namespace for_loop
{
	double summ2(double eps)
	{
		double res = 0;

		for(int i = 0; !(fabs(a(i)) <= eps); i++)
		{
			res += a(i);
		}

		return res;
	}
}
