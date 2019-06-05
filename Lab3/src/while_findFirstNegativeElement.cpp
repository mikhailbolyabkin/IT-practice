#include <math.h>
#include "func.h"

namespace while_loop
{
	int findFirstNegativeElement(double eps)
	{
		int i = 0;

		while(true)
		{
			if( fabs(a(i)) <= eps && a(i) < 0) break;
			i++;
		}

		return i;
	}
}
