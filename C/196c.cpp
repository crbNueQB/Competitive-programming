//標準関数をすべてインクルードする。
#include <bits/stdc++.h>
#include <vector>
using namespace std;



int main() {
    string N;
    cin >> N;
    long long res = 0;
    if(N.length() < 2)  {
        cout << res << endl;
        return 0;
    }

    string n;
    long long k = (long long) N.length() / 2;
    if((long long) N.length() % 2 == 0){
        for (long long i = 0; i < k; ++i) n += N[i];
    }else {
        n = to_string( (long long)(pow(10, k) - 1));
    }
    long long a = 0; long long b = 0;

    for (long long i = 1; i <= stoi(n); ++i){
        a++; b++;
        if((to_string(a) == to_string(b)) && stoll(to_string(a) + to_string(b)) <= stoll(N)) ++res;
    }

    cout << res << endl;

    return 0;
}