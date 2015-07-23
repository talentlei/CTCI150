void print(string path){
  int lastpos=0;
  while((index=path.find("&",lastpos))!=string::npos){
    cout<<path.substr(last,index-lastpos)<<"->"<<endl;
    lastpos = index+1;
  }
}
void findTransPath(set<string>& dic,string begin, string end){
  if(set.count(begin)==0||set.count(end)==0)
    return;
  map<string,string> mp;
  queue<string> que;
  que.push(begin);
  mp[begin] = begin;
  while(!que.empty()){
    string word = que.top();
    string temp = word;
    que.pop();
    for(int i=0; i<word.size();i++){
      for(int j=0; j<26; j++){
        temp[i] =  'a'+j;
        if(dic.count(temp)!=0&&mp.count(temp)==0){
          que.push(temp);
          mp[temp] = mp[word]+"&"+temp;
          if(temp==end){
            print(mp[temp]);
          }
        }
      }
    }
  }
  
}
