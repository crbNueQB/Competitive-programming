#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N, K;
    cin >> N >> K;
    vector<long long> A(N,0);
    vector<long long> B(N,0);
    long long sumA = 0;
    long long sumB = 0;
    for(int i = 0; i < N; i++) {
        cin >> A.at(i);
        sumA += A.at(i);
    }
    for(int i = 0; i < N; i++) {
        cin >> B.at(i);
        sumB += B.at(i);
    }

    long long a = abs(sumA - sumB);
    long long c = a % 2;
    long long b = K % 2;
    //cout << sumA << sumB << endl;
    if(c == b){
        if(a <= K) cout << "YES" << endl;
        else cout << "No" << endl;
    }else{
        cout << "No" << endl;
    }

    //cout << << endl;

    return 0;
}