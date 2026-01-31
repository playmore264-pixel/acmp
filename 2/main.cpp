#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int a;
    if (N >= 1) {
        a = N * (N + 1) / 2;
    } else {
        a = (1 + N) * (1 - N + 1) / 2;
    }

    cout << sum << endl;
    return 0;
}
