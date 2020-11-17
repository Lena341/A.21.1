#include <iostream>
using namespace std;
#pragma once
class A
{
public:
	A() { cout << "A()" << '\n'; }
	~A() { cout << "~A()" << '\n'; }
};
class B
{
public:
	B() { cout << "B()" << '\n'; }
	virtual ~B() { cout << "~B()" << '\n'; }
};

class C : public A, virtual public B
{
public:
	C() { cout << "C()" << '\n'; }
	~C() { cout << "~C()" << '\n'; }
};

class D : virtual public B
{
public:
	D() { cout << "D()" << '\n'; }
	~D() { cout << "~D()" << '\n'; }
};

class E : public C, public D
{
public:
	E() { cout << "E()" << '\n'; }
	~E() { cout << "~E()" << '\n'; }
};