int a=1234567890;
cout << a << endl;
//>>>1234567890

int a=12345678901;
cout << a << endl;
//訳)エラー; long int　を使いなさい
//>>>warning: overflow in conversion from 'long int' to 'int' changes value from '12345678901' to '-539222987' [-Woverflow]


#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, c, n) for (ll i = c; i < (n); ++i)
#define yn(ok, True, False) if (ok) { p(True) } else {p(False)};
//以下debug用
#define d(x) cout << #x << "; " << x << endl;
#define p(x) cout << x << endl;
#define f(x) for (int i = 0; i < x.size(); i++) cout << #x << "[" << i << "]; " << x[i] << endl;

int ans = 0, counter = 0, num = 0;
ll lans = 0, lcounter = 0, lnum = 0;
string str, str1, str2, str3;
bool ok = false;
vector<int> datas(100);
//const int INF = 1001001001; 
//const ll INF = 1LL << 60; //無限大

int main(){
  int n;
  cin >> n;

  return 0;
}

char='a'; //シングルクォーテーション
string="abc"; //ダブルクォーテーション
int=0;
double=0;

cin >> a;    //入力
cout << "a"; //出力(<<endl;をつけると改行する)


# orは||  andは&&
if (true){
}else{ 
}

if (a && b){ 
}else if (c || d){ 
}

for (int i = 0; i < 5; i++){ 
}

//文字列出力
for (char s:"abc"){
  //s='a','b','c'
}

#配列出力
for (int i:{8, 10, 18}){ 
  //i=8,10,18
} 

while (true){
  break;
}
