//標準関数をすべてインクルードする。
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int A, B; cin >> A >> B;
    int res = 0;

    if(A + B >= 15 && B >= 8) res = 1;
    else if (A + B >= 10 && B >= 3) res = 2;
    else if (A + B >= 3) res = 3;
    else res = 4;

    cout << res << endl;
    return 0;
}