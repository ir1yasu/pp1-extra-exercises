#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, sum = 0;
    cin >> a;

    for (int i=1; i <= a; i++) {
        sum += i * i;
    }

    cout << sum;


    return 0;
}