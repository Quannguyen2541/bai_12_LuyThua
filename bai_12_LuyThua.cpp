// bai_12_LuyThua.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main() {
	cout << "Luy Thua\n";
	int so, mu, luythua = 1;
	cout << "nhap so:\n";
	cin >> so;
	cout << "nhap mu:\n";
	cin >> mu;
	for (int a = 1; a < mu; a++)
	{
		luythua *= so;
	}
	cout << luythua*so;
	return 0;
}



