#include "Functions.h"

void UpdateIfGreater(int& first, int& second)
{
	if (first > second) second = first;
}

void MoveStrings(vector<string>& src, vector<string>& dst)
{
	for (auto s : src)
	{
		dst.emplace_back(s);
	}
	src.clear();
}

void Reverse(vector<int>& v)
{
	int a = v.size();
	for (int i = 0; i < a; ++i)
	{
		auto aa = v[0];
		v.push_back(v[0]);
		v.erase(v.begin());
	}
}

vector<int> Reversed(const vector<int>& v)
{
	vector<int> a;
	for (int i=v.size()-1; i>=0;--i)
	{
		a.emplace_back(v[i]);
	}
	return a;
}
