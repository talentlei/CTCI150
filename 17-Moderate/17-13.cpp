
class BiNode{
  public:
    BiNode node1,nod2;
    int data;
    BiNode(int val):data(val){}；
}

BiNode* BST2DoubleList(BiNode* root){
    BiNode* cur=root, *pre=NULL,*head=NULL;
    stack<BiNode*> stk;
    while(!stk.empty()&&cur!=NULL){
      while(cur!=NULL){
        stk.push(cur);
        cur = cur->left;
      }
      cur = stk.top();
      stk.pop();
      if(pre==NULL){
        head = cur;
        pre = cur; 
      }
      else {
        pre->node2 = cur;
        cur->node1 = pre;
      }
      cur = cur->node2;
    }
    return head;
}

BiNode* BST2DoubleList2(BiNode*root){
  if(root==nullptr)
    return root;
  
  BiNode left=nullptr,right=nullptr;
  if(root->node1){
    left = BST2DoubleList2(root->node1);
    BiNode* ptr = left;
    while(ptr->node2){
      ptr = ptr->node2;
    }
    ptr->node2 = root;
    root->node1 = ptr;
  }
  if(root->node2){
    right = BST2DoubleList2(root->node2);
    root->node2 = right;
    right->node1 = root;
  }
  return left?left:root;
  
}
