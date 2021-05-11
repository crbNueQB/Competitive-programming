#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    long long K;
    cin >> N >> K;
    
    for(int i = 0; i < K; i++){
        if(N % 200 == 0){
            N /= 200;
        }else{
            string s = to_string(N);
            s += "200";
            N = stoll(s);
        }
    }

    cout << N << endl;

    return 0;
}