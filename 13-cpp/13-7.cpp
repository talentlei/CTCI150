
struct node{
  int val;
  node* left;
  node* right;
  node(int _val)
    :val(_val),left(nullptr),right(nullptr){};
}
//may have cycle.  attention!!
map<node*,node*> mp;
node* copy(node* root){
  node * res=nullptr;
  if(root==nullptr) return res;
  if(mp.count(root)>0)
    return mp[root];
  res = new node(root->val);
  mp[root] = res;
  res->left = copy(root->left);
  res->right = copy(root->right);
  return res;
}
