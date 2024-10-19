#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long n, k, a, sum1 = 1, sum2 = 1, sum3 = 1;
    cin >> n >> k;

    for (int i = 1; i <= n; i++) {
        sum1 *= i;
    }
    for (int j = 1; j <= k; j++) {
        sum2 *= j;
    }
    for (int l = 1; l <= (n-k); l++) {
        sum3 *= l;
    }
    
    a = sum1 / (sum2 * sum3); 

    cout << a;  

    return 0;    
}