// FourierTransform.cpp : Defines the entry point for the console application.
//

#include "stdafx.h" 
#include <iostream>
#include <math.h> 
#define PI 3.14159265
using namespace std;


void enterPause() {
	cout << endl;
	cout << "Pauses program until [Enter] is pressed";
	cin.get();

}


void add() {
	int firstNum, secondNum, sumNum;
	cout << "Enter a first integer";
	cin >> firstNum;
	cout << "Enter a second integer";
	cin >> secondNum;
	sumNum = firstNum + secondNum;
	cout << "The sum is:" << sumNum << endl;
	cout << endl;
}

void genCosine(double fs, double T, double f) {
	double N;
	N = T / (1 / fs);
	double *signal{ new double[10] {} };

	for (int k = 0; k <= N-1;k++) {
	
		signal[k] = cos(2*PI*f*(k/fs));
		cout << signal[k] << "\n";
	//	return *signal;
	}
	
	
	
//	return 0;
}


int main(){
	double sampfreq;
	double duration;
	double sigfreq;
	double generated;

		cout << "Hello world \n";
	//	genCosine(1000.0, 0.01, 100.0);
		genCosine(sampfreq = 1000, duration = 0.01, sigfreq = 100);
	//	cout << generated;
	//	add();
		enterPause();


    return 0;
}

