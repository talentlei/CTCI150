#include <iostream>
#include <string>
#include <sstream>


using namespace std;

//compress string using counts of repeated character; 
// if compressed string not become smaller than the original string,
// return the orginal string
string compress(string s1){
	string res="";
	if(s1.size()==0)	return s1;
	int count=1;
	stringstream ss;

	for(int i=1; i<s1.size(); i++){
		if(s1[i-1]==s1[i])
			count++;
		else{
			ss<<count;
			string cstr=ss.str();
			ss.str("");
			res+=string(1,s1[i-1])+cstr;
			count=1;
		}

	}
	ss<<count;
	string tail=ss.str();
	res+=string(1,s1[s1.size()-1])+tail;
	if(res.size()<s1.size())
		return res;
	return s1;
}

int main(){
	string s1="heeeeeeloooo!";
	cout<< s1 <<endl;	
	cout<<compress(s1)<<endl;

}
