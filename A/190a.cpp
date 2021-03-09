//標準関数をすべてインクルードする。
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int A, B, C; cin >> A >> B >> C;

    string res = "";

    if(A > B){
        res = "Takahashi";
    }else if (B > A){
        res = "Aoki";
    }else{
        if(C == 0) res = "Aoki"; 
        else res = "Takahashi";
    }

    cout << res << endl;
    return 0;
}