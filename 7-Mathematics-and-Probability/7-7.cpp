
int getKthElement(int k){
  if(k<=0) return 0;
  queue<int> q3;
  queue<int> q5;
  queue<int> q7;
  
  q3.push(3);
  q5.push(5);
  q7.push(7);
  int cnt=0,num;
  while(cnt<k){
    int v3 = q3.top();
    int v5 = q5.top();
    int v7 = q7.top();
    num = min(v3,min(v5,v7));
    if(num==v3){
      q3.pop();
      q3.push(num*3);
      q5.push(num*5);
    }else if(num==v5){
      q5.pop();
      q5.push(num*5);
    }
    else q7.pop();
    q7.push(num*7);
    cnt++;
  }
  return num;
}
