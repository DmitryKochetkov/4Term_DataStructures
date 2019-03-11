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

int BruteForce(String^ s, String^ sub, int& it) // spaces and register?
{
	it = 0; //?
	int res = -1;
	if (s->Length == 0 || sub->Length == 0)
		return res;
	for (int i = 0; i < s->Length - sub->Length + 1; i++)
		for (int j = 0; j < sub->Length; j++)
		{
			it++; //?
			if (sub[j] != s[i + j])
				break;
			else if (j == sub->Length - 1)
				res = i;
		}
	return res;
}

int KMP(String^ s, String^ sub)
{
	return -1;
}

int KMP(String^ s, String^ sub, int& it)
{
	it = 0;
	return -1;
}

int BM(String^ s, String^ sub)
{
	return -1;
}

int BM(String^ s, String^ sub, int& it)
{
	it = 0;
	return -1;
}

int Perfect(String^ s, String^ sub)
{
	return -1;
}

int Perfect(String^ s, String^ sub, int& it)
{
	it = 0;
	return -1;
}