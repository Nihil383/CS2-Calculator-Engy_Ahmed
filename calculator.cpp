#include "calculator.h"
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;

double add(double a, double b) {
	return a + b;
}

double sub(double a, double b) {
	return a - b;
}

double multi(double a, double b) {
    return a * b;
}

double divd(double a, double b) {
    if (b == 0) {
        cout << "Division failed, division by zero is undefined/n";
	return a;
    }
    return a / b;
}

int fact (int a) {
	if (a == 0 || a == 1) {
        	return 1;
    	}
    	return a * fact(a - 1);
}

int cstGcd (int a, int b) {
	if (b == 0) {
        	return a;
    	}
    	return cstGcd(b, a % b);
}

int lcm (int a, int b) {
	return ((a*b)/(cstGcd(a,b)));
}

void seedRandom() {
    srand(time(0));
}

int rndm(int a) {
    return (rand() % (2 * abs(a) + 1)) - a;
}
