//標準関数をすべてインクルードする。
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    int ans = 0;
    for (int i = 1; i < N; ++i){
        ans += floor((N -  1) / i);
    }

    cout << ans << endl;

    return 0;
}