#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int a, b, c, t;
    cin >> a >> b >> c;

    t = max(a, max(b, c));

    cout << t;

    

    return 0;
}
 