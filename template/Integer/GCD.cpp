//  Euclid の互除法
// 2つの整数a,bの最大公約数を求める。
#include <bits/stdc++.h>
using namespace std;

// a と b の最大公約数を返す関数
long long GCD(long long a, long long b) {
    if (b == 0) return a;
    else return GCD(b, a % b);
}

//最小公倍数は最大公約数を用いて求めることができる。
long long LCM(long long a, long long b) {
    return a / GCD(a, b) * b;
}

int main() {
    //cin >> ;

    //cout << << endl;

    return 0;
}