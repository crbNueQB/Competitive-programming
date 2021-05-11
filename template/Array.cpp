vector<int> a(N); //配列名[要素数]
for (int i = 0; i < N; ++i) cin >> a[i]; //入力
for (int i = 0; i < N; ++i) cout << a[i] << endl; //出力
for (int i: a) cout << i << endl; //これでも出力できる

//要素を後ろに追加
a.push_buck("要素");      
//要素を後ろから削除 
a.erase("インデックス");                
//要素の先頭
a.begin();                
//要素の末尾
a.end();                  
//要素数を取得
a.size();     

sort(a.begin(), a.end());  // a[0:N] を小さい順にソート
sort(a.begin(), a.end(), greater<int>());//大きい順にソート

//以下行う前にソートをする必要あり
binary_search(a.begin(), a.end(), 4)//「配列a」に「4」があるか検索、返り値はbool値

vector<int> a = {1, 4, 6}
auto Iter1 = lower_bound(ALL(a), 4); //>>> 6
cout << "Iter1 = " << *Iter1 << endl; //値の表示
cout << "Iter1 = " << Iter1 - a.begin() << endl; //index
//upper_bound()もある

//aとbのうち大きい方の値を返す
max(a, b);
//複数の時
max({a,b,c,d});

//aとbのうち小さい方の値を返す
min(a, b);

//変数aと変数bの値を交換する
swap(a, b);

//xの2乗
pow(x,2);

vector<vector<要素の型>> 変数名(要素数1, vector<要素の型>(要素数2, 初期値));
vector<vector<要素の型>> 変数名(要素数1, vector<要素の型>(要素数2));  // 初期値を省略

表のようなデータを扱う場合、一般的には次のようにします。

vector<vector<要素の型>> 変数名(縦の要素数, vector<要素の型>(横の要素数));

vector<vector<int>> data(3, vector<int>(4));