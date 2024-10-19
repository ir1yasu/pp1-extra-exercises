#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, sum = 0, b = 1;
    int n;
    cin >> a >> n;

    for (int i = 0; i <= n; i ++) {
        sum += b;
        b *= a;
    }

    cout << sum;
}