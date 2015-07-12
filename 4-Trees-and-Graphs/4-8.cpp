
/*
    method1: if I can modify the treenode ， I can record the subtree number of elements 
    then we check the subtree if the number of the subtree node is equal to the T2.
    we can avoid not nessisary check.
    time complexity is O(n+m*k)  n is nodes of T1， m is nodes of T2; k is the number of nodes having the same nodes with T2. 

*/
struct node{
    int val;
    int nums;
    Treenode* left;
    Treenode* right;
}Treenode;

int computeNumsOfNode(Treenode* root){
    if(root==nullptr)
        return 0;
    root->nums = 1+computeNumsOfNode(root->left)+computeNumsOfNode(root->right);
    return root->nums;
}
bool isSameTree(Treenode* root1, Treenode* t2){
    if(root1==nullptr&&t2==nullptr) return true;
    if(root1==nullptr || t2==nullptr) return false;
    if(root1->nums==t2->nums && root1->val==t2->val &&
        isSameTree(root11->left,t2->left)&& isSameTree(root1->right,t2->right))
        return true;
    return false;
}

bool isSubTree(Treenode* t1, Treenode* t2){
    if(t1->nums==t2->nums)
        return isSameTree(t1,t2);
    if(t1->nums<t2->nums)
        return false;
    return isSubTree(t1->left,t2)||(t2->right,t2);
}

bool solve(Treenode* t1, Treenode* t2){
    computeNumsOfNode(t1);
    computeNumsOfNode(t2);
    return isSubTree(t1,t2);
}

/**
 * method 2 : not modify the treenode
 * we check the subtree if the node have the same value.
 * 
 * 
 */ 
