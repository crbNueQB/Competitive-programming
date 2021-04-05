//0からNまでNと互いに素になる「「個数」」を返す
vector<pair<long long, long long> > prime_factorize(long long N) {
    vector<pair<long long, long long> > res;
    for (long long a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        long long ex = 0;
        while (N % a == 0) {
            ++ex;
            N /= a;
        }
        res.push_back({a, ex});
    }
    if (N != 1) res.push_back({N, 1});
    return res;
}
int main() {
    //出力方法
    const auto &res = prime_factorize(10);
    for (auto p: res) cout << p.first;
}