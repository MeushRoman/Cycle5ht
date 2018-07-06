// ConsoleApplication14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	float n, z = 1;
	cout << "abramov 117 (a, b)\nVvedite n = ";
	cin >> n;
	cout << "a)  ";

	for (float i = 1, k = 2; i <= n*2; i +=2, k+=2)
	{
		cout << i << "/" << k;
		if (i < n*2-1) cout << " * "; else cout << " = ";
		z = z * (i / k);
		
	}
	cout << z << endl;
	
	float res = 1;

	cout << "b)  ";
	
	for (float i = 1; i <= n; i++)
	{
		cout << i * 2 - 1 << "/" << i;
		if (i < n) cout << " * "; else cout << " = ";
		res *= (i * 2 - 1) / i;
		
	}
	cout << res << endl;



    return 0;
}

