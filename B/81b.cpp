//標準関数をすべてインクルードする。
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int n; 
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; ++i){
        cin >> A.at(i);    
    }

    bool res = true;
    int ans = 0;
    while(res){
        for (int i = 0; i < n; ++i){
            if(A[i] % 2 == 0){
                A[i] /= 2;
            }else{
                res = false;
            }
        }
        if (res) ans++;        
    }

    cout << ans << endl;

    return 0;
}