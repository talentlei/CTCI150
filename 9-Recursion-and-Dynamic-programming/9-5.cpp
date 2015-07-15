// does it can contain duplication?
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
            
            //while(i+1<s.size()&&s[i+1]==s[i]) i++;
        }
        
    }
}

//if it can contain duplication
vector<vector<char> > res;
vector<vector<char>> permutations2(vector<char>){
    return _permutations2(vec,0);
}
vector<vector<char>> _permutations2(vector<char>& vec, int pos){
    if(pos==vec.size()){
        res.push_back(vec);
        return;
    }
    for(int i=pos; i<vec.size(); i++){
        swap(vec[i],vec[start]);
        _permutations2(vec,pos+1);
        swap(vec[i],vec[start]);
    }
    return res;
}
