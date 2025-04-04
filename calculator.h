template <typename T1, typename T2, typename T3 = decltype(T1{} + T2{})>
T3 add(T1 a, T2 b);
template <typename T1, typename T2, typename T3 = decltype(T1{} - T2{})>
T3 sub(T1 a, T2 b);

template <typename T1, typename T2, typename T3 = decltype(T1{} * T2{})>
T3 multi(T1 a, T2 b);
template <typename T1, typename T2, typename T3 = decltype(T1{} / T2{})>
T3 div(T1 a, T2 b);

int lcd(int a, int b);
int rndm(int a);
void seedRandom();
