//use bit operator
//negative number is also fit
int add(int a, int b){
  if(a==0)
    return b;
  int sum = a^b;
  int carry = a&b<<1;
  return add(carry,sum);
}
