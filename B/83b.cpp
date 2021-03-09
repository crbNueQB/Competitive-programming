 //標準関数をすべてインクルードする。
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int dive(int N){
    int res = 0;
    while(N > 0){
        res += N % 10;
        N /= 10;
    }
    return res;
}

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    int ans = 0;
    int res = 0;
    for (int i = 0; i <= N; ++i){
        res = dive(i);
        if(res >= A && res <= B) ans += i;
    }

    cout << ans << endl;

    return 0;
}