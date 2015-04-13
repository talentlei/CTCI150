#include <iostream>
#include <string>

using namespace std;
//judge if s1 is s2's permutation

bool isPermu(string s1,string s2){
	if(s1.size()!=s2.size())
		return false;
	int chack[128]={0};
	for(int i=0; i<s1.size(); i++){
		chack[s1[i]]++;
	}
	for(int i=0; i<s2.size(); i++){
		if(chack[s2[i]]==0)
			return false;
		chack[s2[i]]--;
	}
	return true;
}

int main(){
	string s1="";
	string s2="";
	cout<< isPermu(s1,s2)<<endl;

}
