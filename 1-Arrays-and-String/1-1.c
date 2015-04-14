#include <stdio.h>
#include <string.h>

//check if a string has all unique characters
//return 1 if unique, otherwise return 0
int isUnique(char * str){
    
    int res=1,p=0,len=0;
    int index[128]={0};
    
    if(!str)
        return 1;
    
    len = strlen(str);
    for(p=0; p<len; p++){
        if(index[str[p]]==0)
            index[str[p]]=1;
        else return 0;
    }
    return res;
}

//test case: "", " ", " asdfs" ,"hello"

int main(){
//    char **tcase={"", " ", " asdfs" ,"hello"};
    char * test="";
    printf("is %s Unique Character?: %d\n",test,isUnique(test) );
}
