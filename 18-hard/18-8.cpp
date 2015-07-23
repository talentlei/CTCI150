
class SuffixTreeNode{
  public:
  char val;
  map<char,SuffixTreeNode* > nexts;
  vector<int >indexs;
  Node(char _val):val(_val){};
  
}

class SuffixTree{
  SuffixTree(){
    root = new SuffixTreeNode('/');
  }
  SuffixTree(string str){
    root = new SuffixTreeNode('/');
    for(int i=0; i<str.size(); i++){
      insert(str.substr(i),i);
    }
  }
  void insert(string str,int idx){
    if(str.empty())
      return ;
    SuffixTreeNode* cur = root;
    int i=0;
    for(; i<str.size(); i++){
      if(cur->next.count(str[i])==0)
        break;
      cur = cur->next[str[i]];
      cur->indexs.push_back(idx);
    }
    while(i<str.size()){
      SuffixTreeNode stn = new SuffixTreeNode(str[i]);
      stn->indexs.push_back(idx);
      cur->next.insert(make_pair(str[i],stn));
      cur = stn;
      i++;
    }
  }
  vector<int> search(string str){
    SuffixTreeNode* cur = root;
    for(int i=0; i<str.size(); i++){
      if(cur->next.count(str[i])!=0){
        cur = cur->next[str[i]];
        if(i==str.size()-1)
          return cur->indexs;
      }
      else break;
    }
    return {-1};
  }
  private :
  root = nullptr;
}
