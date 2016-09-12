// Mutiply.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	
	int a = 0;
	int b = 0;
	int c;
	int count = 0;
	
	cout << "   0  1  2  3  4  5  6  7  8  9  10" << endl;
	cout << "   " << endl;

	while (b < 11){
		cout << count << "  ";
		count++;

		while (a < 11){
			c = a*b;
			cout << c << "  ";
				a++;
				
		}
		b++;
		a = 0;
		cout << "   " << endl;
	}
	
	return 0;
}

