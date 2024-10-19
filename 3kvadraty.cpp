#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        c = sqrt(i);
        if (c * c == i) {
            cout << i << " ";            
        }
    }

    
}