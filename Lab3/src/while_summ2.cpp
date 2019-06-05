#include <math.h>
#include "func.h"

namespace while_loop
{
	double summ2(double eps)
	{
		int i = 0;
		double res = 0;

		while( !(fabs(a(i)) <= eps) )
		{
			res += a(i);
			i++;
		}

		return res;
	}
}
