//標準関数をすべてインクルードする。
#include <bits/stdc++.h>
#include <vector>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

std::string substrBack(std::string str, size_t pos, size_t len) {
    const size_t strLen = str.length();
 
    return str.substr(strLen - pos, len);
}

int main() {
    string N;
    cin >> N;
    
    long long ans = 0;

    if(N.length() <= 3) ans = 0;
    else if(N.length() <= 6 && N.length() >= 4){
        ans = stoll(N) - 1000 + 1;
    }else if(N.length() <= 9 && N.length() >= 7){
        ans = stoll(N) * 2 - 1001000 + 2;
    }else if(N.length() <= 12 && N.length() >= 10){
        ans = stoll(N) * 3 - 1001001000 + 3;
    }else if(N.length() <= 15 && N.length() >= 13){
        ans = stoll(N) * 4 - 1001001001000 + 4;
    }else if(N.length() <= 18 && N.length() >= 16){
        ans = stoll(N) * 5 - 1001001001001000 + 5;
    }

    cout << ans<< endl;
    return 0;
}