#include "QueueV.h"

/*vector<string> CreateQueue(const int& n)
{
	vector<string> v(n);
	return v;
}*/

void Value(vector<string>& v, const int & i, const string & s)
{
	v[i] = s;
}

void Come(vector<string>& v, const int & k)
{
	if (k < 0)
	{
		for (int i = 0; i < k*(-1); ++i)
		{
			v.pop_back();
		}
	}
	else
	{
		/*if (v.size() == 0)
		{
			v.resize(k);
		}*/

		for (int i = 0; i < k; ++i)
		{
			v.push_back("QUIET");
		}
	}
}

void PrintWorryCount(const vector<string>& v)
{
	int i = 0;
	for (auto vv : v)
	{
		if (vv == "WORRY")
		{
			i++;
		}
	}
	cout << i << endl;
}
