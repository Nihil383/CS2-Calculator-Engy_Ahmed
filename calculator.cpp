template <typename T1, typename T2, typename T3 = decltype(T1{} + T2{})>
T3 add(T1 a, T2 b) {
	return a + b;
}

template <typename T1, typename T2, typename T3 = decltype(T1{} - T2{})>
T3 sub(T1 a, T2 b) {
	return a - b;

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

int fact (int a) {
	if (a == 0 || a == 1) {
        	return 1;
    	}
    	return a * fact(a - 1);
}

int gcd {
	if (b == 0) {
        	return a;
    	}
    	return gcd(b, a % b);
}
