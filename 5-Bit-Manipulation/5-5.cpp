int get_change_nums(int a, int b){
  int k=0; 
  for(int c=a^b; c; c=c&(c-1))
    k++;
  return k;
}
