#include <iostream>

using namespace std;

double pow(int x, int n)
{
    if(n == 0)
        return 1;
    if(n < 0)
        return (1/pow(x, -n));
    if(n % 2 == 0) {
        double m = pow(x, n / 2);
        return m * m;
    }
    else
        return x * pow(x, n-1);
}

int main()
{
    cout << pow(2, 4) << '\n';
    cout << pow(2, -2) << '\n';
    cout << pow(2, 3) << '\n';
    return 0;
}
