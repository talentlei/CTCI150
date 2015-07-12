
int insert(int m, int n, int i, int j){
  int mask = 0;
  for (int k = j; k >= i; k--){
    mask += 1 << k;
  }
  return (~mask & n) | (m << i);
}
