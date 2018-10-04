#include "Equation.h"
#include <iostream>

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int N, rem;
	vector<int> vec;

	while (cin)
	{
		cin >> N;
		do
		{
			vec.push_back(N % 2);
			N /= 2;
		} while (N >= 1);

		for (int i = vec.size()-1; i >=0; --i)
		{
			cout << vec[i];
		}

		/*
		if (*vec.begin() == 0)
		{
			do
			{
				vec.erase(vec.begin());
				vec.begin()++;
			} while (*vec.begin() != 1);
		}*/

	}

	system("pause");
	return 0;
}