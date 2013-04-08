#include <cstdio>
#include "array.h"
#include <iostream>

using namespace std;

void main()
{
	int a[5] = {1,2,3,6,8};
	int b[5] = {1,4,6,8,3};
	Array a1 = Array(5, a);
	Array a2 = Array(a1);
	Array a3;
	Array a4 = Array(5,b);
	a3 = a + a1;
	a4 = a + a4;
	cout << "a3 = ";
	for (int i = 0; i < 10; i++)
	{
		cout << a3[i] << " ";
	}
	cout << endl << "a4 = ";
	for (int i = 0; i < 10; i++)
	{
		cout << a4[i] << " ";
	}
}