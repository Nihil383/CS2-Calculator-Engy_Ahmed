#include "calculator.h"
#include <iostream>
using namespace std;

int main () {
	seedRandom();
	cout << "Adding 3 and 4.2 yields " << add(3,4.2) << endl;
	cout << "Subtracting 2 and 0.6 yields " << sub(2,0.6) << endl;
	cout << "Multiplying 10 and 1.5 yields " << multi(10,1.5) << endl;
	cout << "Dividing 5 and 2 yields" << div(5,2) << endl;
	cout << "3 factorial is " << fact(3) << endl;
	cout << "GCF of 24 and 10 is " << gcf(24,10) << endl;
	cout << "LCM of 24 and 10 is " << lcm(24,10) << endl;
	cout << "random number between -10 and 10 is " << rndm(10) << endl;
	cout << "Test Complete!" << endl;
	return 0;
}
