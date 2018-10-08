#include "Factorial.h"

int Factorial(int x)
{
	if (x == 0) return 0;
	if (x < 0 || x==1) return 1;
	else
	{
		return x * Factorial(x - 1);
	}
}
