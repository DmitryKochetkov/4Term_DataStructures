#pragma once

using namespace System;

int BruteForce(String^ s, String^ sub);
int KMP(String^ s, String^ sub);
int BM(String^ s, String^ sub);
int Perfect(String^ s, String^ sub);

int BruteForce(String^ s, String^ sub, int& it);
int KMP(String^ s, String^ sub, int& it);
int BM(String^ s, String^ sub, int& it);
int Perfect(String^ s, String^ sub, int& it);