
int stairsWays(int n){
  if(n<1) return 0;
  vector <int > ways(n);
  ways[0] = 1;
  ways[1] = ways[0]+1;
  ways[2] = ways[0]+ways[1]+1;
  int i=3; 
  while(i<n)
    ways[i] = ways[i-1]+ways[i-2]+ways[i-3];
  return ways[n-1];
}
