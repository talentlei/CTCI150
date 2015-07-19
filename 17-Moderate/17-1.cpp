// what number ? interger or double?
template<class T>
void swap(T* a, T* b){
  a=a^b;
  b=a^b;
  a=a^b;
}

void swap2(T* a, T* b){
  a = a-b;
  b = b+a;
  a = b-a;
}
