#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int N, i;
    double P;
    cout << "N = "; cin >> N;
    P = 1;
    i = N;
    while (i <= 16)
    {
        P *= (i * N) / (pow(i, 2) + pow(N, 2));
        i++;
    }
    cout << P << endl;
    P = 1;
    i = N;
    do {
        P *= (i * N) / (pow(i, 2) + pow(N, 2));
        i++;
    } while (i <= 16);
    cout << P << endl;
    P = 1;
    for (i = N; i <= 16; i++)
    {
        P *= (i * N) / (pow(i, 2) + pow(N, 2));
    }
    cout << P << endl;
    P = 1;
    for (i = 16; i >= N; i--)
    {
        P *= (i * N) / (pow(i, 2) + pow(N, 2));
    }
    cout << P << endl;
    return 0;
}
