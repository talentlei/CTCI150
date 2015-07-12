
void findPathSum(Treenode* root, int sum){
    vector<int> path;
    findPath(root , sum , path);
}

void findPath(Treenode* root, int target, vector<int>& path){
    if(root==NULL) return ;
    path.push_back(root->val);
    int sum=0;
    for(size_t i = path.size()-1; i>=0; i--){
        sum+=path[i];
        if(sum== target)
            print(path,i);
    }
    findPath(root->left,target,path);
    findPath(root->right,target,path);
    path.pop_back();
}
void print(const vector<int>& path, int beg){
    for(size_t i = beg; i<path.size(); i++){
        cout<<path[i] << "\t" <<endl;
    }
}
