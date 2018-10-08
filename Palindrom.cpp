#include "Palindrom.h"

bool IsPalindrom(std::string str)
{
	std::string s;
	if (str == " "|| str.size() == 1 || str.size() == 0)return true;
	else
	{
		for (int i=str.size()-1;i>=0;--i)
		{
			s+= str[i];
		}
		if (str == s)return true;
		else return false;
	}
}

bool IsPalindromm(std::string str)
{
	for (size_t i = 0; i < str.size()/2; ++i)
	{
		if (str[i] != str[str.size() - i - 1])
			return false;
	}
	return true;
}

std::vector<std::string> PalindromFilter(std::vector<std::string> words, int minLength)
{
	std::vector<std::string> vs;
	for (int i = 0; i <words.size(); ++i)
	{
		if(words[i].size() >= minLength && IsPalindromm(words[i]))
		{
			vs.emplace_back(words[i]);
		}
	}
	for (int i = 0; i < vs.size(); ++i)
	{
		std::cout << vs[i] << std::endl;
	}
	return vs;
}