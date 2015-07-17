
class rankNode{
public :
  int left_size;
  int val;
  rankNode* left;
  rankNode* right;
  explicit rankNode(int _val,int 0)
    :val(_val),left_size(0),left(nullptr),right(nullptr){};
  
}
class rankTree{
public :
  void track(int val){
    _track(val,root);
  }
  int getRank(int val){
    return _getRank(val,root);
  }
private:
  void _track(int val,rankNode* root){
    if(root==nullptr){
      return new rankNode(val);
    }
    if(val<=root->val){
      (root->left_size)++;
      _track(val,root->left);
    }else _track(val,root->right);
    return root;
  }
  
  int _getRank(int val,rankNode* root){
    if(root==nullptr) return -1;
    if(root->val==val) return root->left_size;
    if(root->val>val)
      return _getRank(val,root->left);
    else {
      int rank_right = _getRank(root->right)
      if(rank_right==-1) return -1;
      return root->left_size+1+ rank_right;
    }
  }
  rankNode* root = nullptr;
}
