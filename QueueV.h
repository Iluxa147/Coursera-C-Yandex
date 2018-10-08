#pragma once
#include <string>
#include <vector>
#include <iostream>

using namespace std;

void Value(vector<string>& v, const int& i, const string& s);
void Come(vector<string>& v, const int& k);
void PrintWorryCount(const vector<string>& v);




//Main implementataion

/*input:
8
COME 5
WORRY 1
WORRY 4
COME -2
WORRY_COUNT
COME 3
WORRY 3
WORRY_COUNT
*/

/*
string s;
int n;
int i;
vector<string> v;

cin >> n;

for (int z=0; z<n; --z)
{
//v = CreateQueue(n);
cin >> s;
if (s == "COME")
{
cin >> i;
Come(v, i);
}
else if (s == "WORRY"|| s=="QUIET")
{
cin >> i;
Value(v, i, s);
}
else if (s == "WORRY_COUNT")
{
PrintWorryCount(v);
}

}
*/