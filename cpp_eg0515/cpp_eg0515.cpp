// cpp_eg0515.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CDemo
{
	int id;
public:
	CDemo(int i)
	{
		id = i;
		cout << "id= " << id << "constucted" << endl;
	}
	~CDemo()
	{
		cout << "id= " << id << "destructed" << endl;
	}
	void A()
	{
		cout << "id= " << id << "A";
	}
	CDemo & display()
	{
		cout << "id= " << id << "hello" << endl;
		return *this;
	}
};
CDemo d1(1);
void Func()
{
	static CDemo d2(2);
	CDemo d3(3);
	cout << "Func" << endl;
}

int main()
{
	CDemo d4(4);
	d4.display().A();
	/*CDemo *p;
	d4 = 6;
	cout << "main" << endl;
	{
	CDemo d5(5);
	}
	Func();
	p = &d4;
	p->display();
	cout << "main ends" << endl;*/
	return 0;
}
