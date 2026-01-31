#include <iostream>
using namespace std;
int main () {
    int n, k;
    cin >> n >> k;
    int j = k%n;
    cout << k/n << " " << j << " " << (n - j) * ((j + n - 1) / n);
    return 0;
}
