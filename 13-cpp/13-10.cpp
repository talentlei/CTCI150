
int** my2DAlloc(int rows, int cols){
  if(rows<=0||cols<=0) 
    return NULL;
  int head = rows*sizeof(int*);
  int data = rows*cols*sizeof(int);
  int ** res = (int**)malloc(head+data);
  if(res==NULL)
    return res;
  int* buf = (int*)(res+rows);
  for(int i=0; i<rows; i++){
    res[i] = buf+i*cols;
  }
  return res;
}
