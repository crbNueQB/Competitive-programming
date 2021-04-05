//binary=2進数
//decimal=10進数

// 10進数->2進数
int binary(int deci){
    int ans = 0;
    for (int i = 0; deci>0 ; i++){
        ans = ans+(deci%2)*pow(10,i);
        deci = deci/2;
    }
    return ans;
}
// 2進数->10進数
int decimal(int bina){
  int decimal = 0;
  int base = 1;
  while(bina>0){
    decimal = decimal + ( bina % 10 ) * base;
    bina = bina / 10;
    base = base * 2;
  }
  return decimal;
}