#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <ctime>

using namespace std;

int main() {
	double x[3] = { 0.5, 1.0, 0.7 };
	double weights[3] = { 0.4, 0.7, 0.5 };
	double sigmoid = (1 / (1 + pow(2.71828, -0)));
	double y;
	
	for (int i = 0; i < 2; i++)
	{
		y = sigmoid * ((x[i] * weights[1]) + weights[2]);
	}
	double output = x[0] * weights[0] + x[1] * weights[1] + x[2] * weights[2] + y;
	output = (1 / (1 + pow(2.71828, -output)));
	if (output >= 0.8)
	{
		cout << "Answer 1" << endl;
	}
	else
	{
		cout << "Answer 0" << endl;
	}
	cout << output << " Offset: " << y << endl;
	system("pause");
}