#include "calculator.h"
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

template <typename T1, typename T2, typename T3 = decltype(T1{} + T2{})>
T3 add(T1 a, T2 b) {
	return a + b;
}

template <typename T1, typename T2, typename T3 = decltype(T1{} - T2{})>
T3 sub(T1 a, T2 b) {
	return a - b;
}

template <typename T1, typename T2, typename T3 = decltype(T1{} * T2{})>
T3 multi(T1 a, T2 b) {
    return a * b;
}

template <typename T1, typename T2, typename T3 = decltype(T1{} / T2{})>
T3 div(T1 a, T2 b) {
    if (b == 0) {
        cout << "Division failed, division by zero is undefined/n";
	return a;
    }
    return a / b;
}

int lcd (int a, int b) {
	return ((a*b)/(gcd(a,b));
}

void seedRandom() {
    srand(time(0));
}

int rndm(int a) {
    return (rand() % (2 * abs(a) + 1)) - a;
}
