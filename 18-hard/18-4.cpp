int length(int n){
  int len = 0;
  while(n!=0){
    len++;
    n/=10;
  }
  return len;
}
int numberOf2(int n){
  int cnt=0;
  if(n==0)
    return 0;
  int len=length(n);
  for(int i=len-1; i>=0; i++){
    int dig = n/(10^i);
    int next = n-dig*10^i;
    if(dig<2){
      cnt = dig*10^(i-1)+ numberOf2(next);
    }else if(dig==2){
      cnt = dig*10^(i-1)+next+1+numberOf2(next);
    }
    else cnt = dig*10^(i-1)+10^i+numberOf2(next);
    n = next;
  }
  return cnt;
}
//count the number 2 in d position
int countNumber2(int n, int d){
  int power10 = 10^d;
  int nextPower = power10*10;
  int right = n% power10;
  int digit = (n/power10)%10;
  
  int Down = n-n%nextPower;
  int Up   = Down+nextPower;
  int cnt = 0;
  if(digit<2)
    cnt = Down/10;
  else if(digit=2)
    cnt = Down/10+right+1;
  else cnt = Up/10;
  return cnt;
  
}
int numberOf2_2(int n){
  int len = length(n);
  for(int i=0; i<len; i++){
    countNumber2(n,len);
  }
}
