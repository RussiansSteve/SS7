#pragma once
#include <cstdint>
#include <iostream>

using namespace std;

struct rational
{
	int64_t p;
	int64_t q;
	rational& operator= (int a);
	rational& operator +=(const rational& a);
	rational& operator -=(const rational& a);
	rational& operator *=(const rational& a);
	rational& operator /=(const rational& a);
};
rational operator+ (const rational& a,const rational& b);
rational operator- (const rational& a, const rational& b);
rational operator* (const rational& a, const rational& b);
rational operator/ (const rational& a, const rational& b);
void del(rational& a);
void set(rational& a);
rational set();
void show(const rational& a);

