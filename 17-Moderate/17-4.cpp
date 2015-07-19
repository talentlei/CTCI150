
template<typename T>
T max(const T& a, const T& b){
  return (a+b+abs(a-b))/2;
}
int sign(int a){
  return (a>>31)&1;
}

int flip(int bit){
  return bit^1;
}

int getMax(int a,int b){
  int c = a-b;
  
  int sa = sign(a);
  int sb = sign(b);
  int sc = sign(c);
  
  int use_sign_of_a = sa^sb;
  int use_sign_of_c = flip(sa^sb);
  
  int k = use_sign_of_a*sa+use_sign_of_c*sc;
  int q = flip(k);
  return a*k+b*q;
}
