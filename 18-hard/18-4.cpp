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
