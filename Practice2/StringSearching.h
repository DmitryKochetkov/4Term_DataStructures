#pragma once
#include <vector>

using namespace System;

int BruteForce(String^ s, String^ sub);
int KMP(String^ s, String^ sub);
int BM(String^ s, String^ sub);
int Perfect(String^ s, String^ sub);

std::vector<size_t> prefix(String s);

int BruteForce(String^ s, String^ sub, int& it, bool reg);
int KMP(String^ s, String^ sub, int& it, bool reg);
int BM(String^ s, String^ sub, int& it, bool reg);
int Perfect(String^ s, String^ sub, int& it, bool reg);