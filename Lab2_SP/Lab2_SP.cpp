#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int a, b, quantity, price, num, n;
    float d1 = 120.0f, t1 = 2.0f, d2 = 80.0f, t2 = 1.0f;

    cin >> a >> b;
    a ^= b;
    b ^= a;
    a ^= b;
    cout << a << " " << b << "\n";

    cin >> quantity >> price;
    cout << (quantity * price) << "\n";

    cin >> num;
    cout << (abs(num) % 10) << "\n";

    cout << ((d1 + d2) / (t1 + t2)) << "\n";

    cin >> n;
    cout << ((n % 10) * 100 + ((n / 10) % 10) * 10 + (n / 100));

    return 0;
}
