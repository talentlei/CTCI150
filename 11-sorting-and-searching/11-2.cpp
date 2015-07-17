
bool cmp(string a, string b){
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    return a<b;
}

void sortAnagram(vector<string>& A){
    sort(A.begin(),A.end(),cmp());
}
