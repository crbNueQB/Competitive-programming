//標準関数をすべてインクルードする。
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X; 
    cin >> N >> X;
    int V, P;
    double Alchol = 0.0;

    int res = -1;
    for(int i = 0; i < N; ++i){
        cin >> V >> P;
        Alchol += V * P / 100;
        if(Alchol >= X) res = i + 1;
    }

    cout << res << endl;
    return 0;
}