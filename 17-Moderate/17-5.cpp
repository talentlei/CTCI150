
void MasterMind(string solution, string guess){
  unordered_map<char> hits;
  unordered_map<char> phits;
  
  int cnt=0;
  for(int i=0; i<4; i++){
    if(solution[i]==guess[i])
      cnt++;
    else{
      hits[solution[i]]++;
      phits.[guess[i]]++; 
    }
  }
  int pcnt=0;
  for(unordered_map<char>::iterator iter=phits.begin(); iter!=phits.end(); iter++){
    if(hits.count(iter->first)!=0){
      int dt = max(iter->second,hits[iter->first]);
      pcnt +=  dt;
    }
  }
  cout << "hits:"<<cnt<<endl;
  cout <<"presudo hits:" <<pcnt<<endl;
  
}
