
int neg(const int a ){
    if(a==numeric_limits<int>::min())
        throw exception();
    int sng = a>0?-1:1;
    int res=0;
    int ta = a;
    while(ta!=0){
        res += sng;
        ta   += sng;
    }
    return res;
}
int subtract(const int a, const int b){
    return a+neg(b);
}

int multiply(const int a, const int b){
    int MIN = numeric_limits<int>::min();
    if(a==MIN&&b==1||b==MIN||a==1) return MIN;
    if(a==MIN||b==MIN) throw exception();
    int sum=0;
    for(int k=1; k<=abs(b); k++)
        sum+=a;
    return b<0? neg(sum):sum;
}

int divide(int a, int b){
int res = 1;
  while (1){
    if (multiply(res, abs(b)) > abs(a)){
      res--;
      break;
    }
    res++;
  }
  int sgn = multiply(a, b) > 0 ? 1 : -1;
  return sgn > 0 ? res : _negate(res);
}
