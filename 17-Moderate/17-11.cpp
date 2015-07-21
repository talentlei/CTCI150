
int rand7(){
  int i = rand5();
  int j = rand5();
  int val = i*5+j;
  if(val>20)
    return rand7();
  return (val+1)/3;
}
