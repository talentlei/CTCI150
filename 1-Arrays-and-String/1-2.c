#include <stdio.h>
#include <string.h>

//reverse the str

void reverse(char * str){
    int begin=0,end=0,len=0;
    char ch;
    if(!str)
        return;
    len = strlen(str);
    for(begin=0,end=len-1; begin<end; begin++,end--){
       ch=*(str+begin);
       *(str+begin)= *(str+end);
       *(str+end)=ch;
    }
}

int main(){
    char  str[]="hello world";
    printf("before reverse: %s\n",str);
    reverse(str);
    printf("afer reverse: %s\n",str);

}
