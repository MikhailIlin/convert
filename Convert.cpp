/*
 * Convert.cpp
 *
 *  Created on: 17 июл. 2018 г.
 *      Author: user
 */
//convert.cpp -  преобразует стоуны в фунты
#include <iostream>

int stonetolb(int); //прототип функции

int main()
{
	using namespace std;
	int stone;
	cout << "Enter weight in stone: ";
	cin >> stone;
	int pounds = stonetolb(stone);

	cout << stone << " stone = ";
	cout << pounds << " pounds." << endl;
	return 0;
}

int stonetolb(int sts)
{
	return 14 * sts;
}




