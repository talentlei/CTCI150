
unsigned int getNext(unsigned int num){
    unsigned int temp = num;
    int c1=0,c2=0;
    while(temp!=0 && (temp&1)==0)   {
        c1++;
        temp>>1;
    }
    while((temp&1)==1){
        c2++;
        temp>>1;
    }
    if(c1+c2==0||c1+c2==32) return 0;
    int q = c1+c2;
    num |= 1<<q;
    int mask = ~0<<q;
    num&=mask;
    mask = (1<<c2-1)-1;
    num |= mask;
    return num;
}

unsigned int getPre(unsigned int num){
    unsigned int temp = num;
    int c1=0,c2=0;
    while(temp!=0 && (temp&1)==1)   {
        c1++;
        temp>>1;
    }
    while((temp&1)==0){
        c2++;
        temp>>1;
    }
    if(c1+c2==0||c1+c2==32) return 0;
    int q = c1+c2;
    int mask = ~0<<(q+1);
    num &=mask;
     mask = ((1 << (c1 + 1)) - 1) << (c2 - 1);
  return num |= mask;
}
