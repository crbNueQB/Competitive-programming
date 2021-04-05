"""
入力値 >>> A B
"""
string strA, strB;
cin >> strA >> strB;  //strA = "A" ,strB = "B"

"""
入力値 >>> d1 d2 ... dN
&
入力値 >>> d1 
          d2 
          ...
          dN
"""
vector<int> a;
for (int i = 0; i < N; ++i) cin >> a.push_back();
//a = {d1,d2,...dN}


"""
入力値　>>> 3 4
           99 99 99
           99 0 99
           99 99 99
           99 99 99
"""
int H,W;
cin >> H >> W;
int box[H][W];
for(int i = 0; i < H; i++){
    for(int k = 0; k < W; k++){
    cin >> box[i][k];
    }
}


"""
入力値 >>> 10 12
          W........WW.
          .WWW.....WWW
          ....WW...WW.
          .........WW.
          .........W..
          ..W......W..
          .W.W.....WW.
          W.W.W.....W.
          .W.W......W.
          ..W.......W.
"""

// 入力
int N, M;
vector<string> field;

// 入力受け取り
cin >> N >> M;
field.resize(N + 1);
for (int n = 0; n < N; ++n) cin >> field[n];
// field[0] == "W........WW."
// field[0][0] == 'W'


"""
入力値 >>> d1 d2 .. d? （入力数が不明）
"""
vector<int> a;
while(true){
  int x;
  cin >> x;
  if(cin.eof()) break;
  a.push_back(x);
}
/*
windowsは「Ctrl+Z」
Macは「Ctrl+D」
で標準入力終了(EOF)となる
*/