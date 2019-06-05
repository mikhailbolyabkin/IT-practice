#include <math.h>
#include "func.h"

namespace do_while_loop
{
	double summ2(double eps)
	{
		int i = 0;
		double res = 0;

		do
		{
			if(fabs(a(i)) <= eps) break;
			res += a(i);
			i++;
		}
		while( !(fabs(a(i)) <= eps) );

		return res;
	}
}
