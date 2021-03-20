//標準関数をすべてインクルードする。
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> D(N);
    int a, b;
    int res = 0;
    bool result = false;
    for (int i = 0; i < N; ++i){
        cin >> a >> b;
        if(a == b) {
            ++res;
            if (res >= 3) result = true;
        }else res = 0;
    }
    if(result)    cout << "Yes" << endl;    
    else cout << "No" << endl;

    return 0;
}