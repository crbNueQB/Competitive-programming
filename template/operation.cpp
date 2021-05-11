//数値から文字へ
int num = 12;
string str = to_string(num);  

//切り上げと四捨五入
//10/3 = 3.33333..の時
//切り上げ (a+(b-1))/b 
(10 + (3 - 1)) / 3 = 4   
//四捨五入 (a+(b/2))/b
(10 + (3 / 2) / 3) = 3 

//doubleをintに入れると少数桁を切り捨てる
double dou = 4.82;
int num = int(dou); // >>> 4

//文字列から数値へ
string str = "12";
int num = str-'0'; // <-'0'を引くことでintへ 
long long num = stoll(str); // long long への変換
//ASCII番号
//文字からASCII番号へ
char ch = 'a';
int num = int(ch); // >>> 97
//ASCII番号から文字へ
int num = 90;
char ch = char(num); // >>> 'Z'

//文字取得
string str = "abcd";
str.at(2);  // >>> c
str.size(); // >>> 4

//文字列を反転
reverse(str.begin(), str.end()); // >>> "dcba"
//文字列からbを削除
str.erase(remove(str.begin(), str.end(), ｂ), str.end()); 

//文字列出力
for (char s:"abc"){
  //s='a','b','c'
}

//文字列ソート
string s = "3412";
sort(begin(s), end(s), greater<>());
int X = stoi(s); // >>> "4321"
reverse(begin(s), end(s));
int Y = stoi(s); // >>> "1234"

string s = "akidon";
sort(begin(s), end(s), greater<>());
string X = s; // >>> "onkida"
reverse(begin(s), end(s));
string Y = s; // >>> "adikno"


文字の小文字大文字判定に以下が役に立つ

文字	ASCII番号
A	65
Z	90
a	97
z	122