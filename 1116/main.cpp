#include <iostream>
using namespace std;
int main () {
    int a, b, c, x, y, z, m, n;
    cin >> a >> b >> c >> x >> y >> z;
    m = a*3600 + b*60 + c;
    n = x*3600 + y*60 + z;
    cout << n- m;
    return 0;
}
