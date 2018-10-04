#include "Equation.h"

void Equation()
{
	float A, B, C, x1, x2;
	while (cin)
	{
		cin >> A >> B >> C;
		if (A != 0)
		{
			int D = B*B - 4 * A*C;

			if (D > 0)
			{
				x1 = (-B + sqrt(D)) / (2 * A);
				x2 = (-B - sqrt(D)) / (2 * A);
				cout << x1 << " " << x2 << endl;
			}
			else if (D == 0)
			{
				x1 = -B / (2 * A);
				cout << x1 << endl;
			}
			else if (D < 0)
			{
				cout << "NO SOLUTION" << endl;
			}
		}
		else
		{
			cout << -C / B;
		}
	}
}