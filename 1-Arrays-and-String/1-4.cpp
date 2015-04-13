#include <iostream>
#include <string>


using namespace std;
//replace space using "%20"
void replaceSpace(char* s1,int size){
	int num=0;
	for(int i=0; i<size; i++){
		if(s1[i]==' ')
			num++;
	}
	int ntail=size+num*2-1;
	int otail=size-1;
	while(otail<ntail){
		if(s1[otail]==' '){
			s1[ntail--]='0';
			s1[ntail--]='2';
			s1[ntail--]='%';
			otail--;			
		}
		else {
			s1[ntail--]=s1[otail--];
		}
	}
	s1[size+num*2]=0;
	return;
}

int main(){
	char arr[30]; 
	string s1="hello world! my lover!";
	for(int i=0; i<s1.size(); i++)
		arr[i]=s1[i];
	arr[s1.size()]=0;
	cout<< arr <<endl;	
	replaceSpace(arr,22);
	cout<< arr <<endl;

}
