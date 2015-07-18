
struct node{
  int val;
  node* left;
  node* right;
  node(int _val)
    :val(_val),left(nullptr),right(nullptr){};
}
node* copy(node* root){
  node * res=nullptr;
  if(root==nullptr) return res;
  res = new node(root->val);
  res->left = copy(root->left);
  res->right = copy(root->right);
  return res;
}
