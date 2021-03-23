//素数判定
//正の整数Nが、2以上N^(1/2)以下の整数で割り切れないならば、N^(1/2)以上N-1以下の整数で割り切れることもない。
#include <bits/stdc++.h>
using namespace std;

bool is_prime(long long N) {
    if (N == 1) return false;
    for (long long i = 2; i * i <= N; ++i) {//i * i <= Nという部分で、N^(1/2)まで試すことを表している
        if (N % i == 0) return false;
    }
    return true;
}

int main() {
    long long N;
    cin >> N;
    if (is_prime(N)) cout << "Yes" << endl;
    else cout << "No" << endl;
}

