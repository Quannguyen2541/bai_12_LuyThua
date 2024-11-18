// bai_12_LuyThua.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main() {
	cout << "Luy Thua\n";
	int so, luythua = 1, b=4;
	cin >> so;
	for (int a = 1; a < b; a++)
	{
		luythua *= so;
	}
	cout << luythua*so;
	return 0;
}



