
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
