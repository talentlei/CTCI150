#include <iostream>
#include <string>

using namespace std;
//give the api isSubstring(str,str)
//use one call isSubstring to judge if s1 and s2 are rotation 
bool isRotationg(string s1,string s2){
	if(s1.size()!=s2.size()||s1.size()==0)
		return false;
	ds1= s1+s1;
	return isSubstring(ds1,s2);			
}
