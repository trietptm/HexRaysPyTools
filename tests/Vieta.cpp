// Vieta.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class Couple {
public:
	double x;
	double y;
	double getSum() {
		return (x + y);
	}
	double getProduct() {
		return (x * y);
	}
};

class Triple {
public:
	double x;
	double y;
	double z;
	double getSum() {
		return (x + y + z);
	}
	double getSumPairProduct() {
		return (x*y + y*z + z*x);
	}
	double getProduct() {
		return (x * y * z);
	}
};

int main(int argc, char *argv[])
{
	Couple couple;
	Triple triple;
	char *win_msg = "You win!\n";
	char *fail_msg = "Fail, you should learn simple math and Reverse Engineering!\n";
	if (argc == 3)
	{
		couple.x = atoi(argv[1]);
		couple.y = atoi(argv[2]);
		if ((couple.getSum() == 5) && (couple.getProduct() == 6))
			cout << win_msg;
		else
			cout << fail_msg;
	}

	if (argc == 4)
	{
		triple.x = atoi(argv[1]);
		triple.y = atoi(argv[2]);
		triple.z = atoi(argv[3]);
		if ((triple.getSum() == 10) && (triple.getSumPairProduct() == 31) && (triple.getProduct() == 30))
			cout << win_msg;
		else
			cout << fail_msg;
		//cout << triple.getSum() << endl;
		//cout << triple.getSumPairProduct() << endl;
		//cout << triple.getProduct() << endl;
	}

	if ((argc != 3) && (argc != 4))
		cout << fail_msg;
	cin.get();
	return 0;
}

