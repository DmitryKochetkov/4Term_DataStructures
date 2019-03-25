#include "StringSearching.h"

using namespace System;

int BruteForce(String^ s, String^ sub)
{
	int res = -1;
	if (s->Length == 0 || sub->Length == 0)
		return res;
	for (int i = 0; i < s->Length - sub->Length + 1; i++)
		for (int j = 0; j < sub->Length; j++)
			if (sub[j] != s[i + j])
				break;
			else if (j == sub->Length - 1)
				res = i;
	return res;
}

int BruteForce(String^ s, String^ sub, int& it, bool reg)
{
	it = 0;
	int res = -1;
	if (s->Length == 0 || sub->Length == 0)
		return res;
	for (int i = 0; i < s->Length - sub->Length + 1; i++)
		for (int j = 0; j < sub->Length; j++)
		{
			it++;
			if (!(reg && (sub[j] == s[i + j]) || (!reg && Char::ToUpper(sub[j]) == Char::ToUpper(s[i+j]))))
				break;
			else if (j == sub->Length - 1)
				res = i;
		}
	return res;
}

std::vector<size_t> prefix(String s)
{
	{
		size_t n = s.Length;
		std::vector<size_t> pi(n);
		for (size_t i = 1; i < n; ++i)
		{
			size_t j = pi[i - 1];
			while ((j > 0) && (s[i] != s[j]))
				j = pi[j - 1];
			if (s[i] == s[j])
				++j;
			pi[i] = j;
		}
		return pi;
	}
}

int KMP(String^ s, String^ sub)
{
	return -1;
}

int KMP(String^ s, String^ sub, int& it, bool reg)
{
	it = 0;
	return -1;
}

int BM(String^ s, String^ sub, bool reg)
{
	return -1;
}

int BM(String^ s, String^ sub, int& it, bool reg)
{
	it = 0;
	return -1;
}

int Perfect(String^ s, String^ sub)
{
	return -1;
}

int Perfect(String^ s, String^ sub, int& it, bool reg)
{
	it = 0;
	return -1;
}