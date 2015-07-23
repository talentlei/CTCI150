void shuffle(vector<int> & deck){//assume there is 52 cards;
  int m=52;
  while(m!=1){
    int idx = rand()%m;
    swap(deck[idx],deck[m-1]);
    m--;
  }
}
