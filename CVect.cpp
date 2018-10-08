#include "CVect.h"

void Days(int& n, vector<int>& temp)
{
	int sum = 0;
	int a = temp.size();

	for (auto v : temp)
	{
		sum += v;
	}

	int mid = sum / a;

	for (int i = 0; i < a; ++i)
	{
		if (temp[i] > mid)
		{
			temp.push_back(i);
		}
	}
	temp.erase(temp.begin(), temp.begin() +a);
}

void PrintDays(const vector<int>& temp)
{
	cout << temp.size() << endl;

	for (int i = 0; i < temp.size(); ++i)
	{
		cout << temp[i] << " ";
	}
}
