
vector<vector<char>> res;
vector<vector<char>> permutations(string s){
    sort(s.begin(),s.end());
    vector<char> one;
    vector<bool> base(s.size(),false);
    dfs(s,0,one,base);
    return res;
}

void dfs(string s, int dep , vector<char>& one,  vector<bool>& base){
    if(dep==s.size()){
        res.push_back(one);
        return;
    }
    for(int i=0; i<s.size(); i++){
        if(!base[i]){
            base[i] = true;
            one.push_back(s[i]);
            dfs(s,dep+1,one,base)
            one.pop_back();
            base[i] = false;
            
            while(i+1<s.size()&&s[i+1]==s[i]) i++;
        }
        
    }
}
