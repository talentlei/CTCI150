#include <iostream>

//kth element to last element in a singly linked list
/*
class LinkedList{
	int val;
	LinkedList next;
}
 */

LinkedList kthToLast(LinkedList head,int k){
	if(head==NULL||k<=0)
		return NULL;
	int i=0;
	LinkedList p=head;
	while(p!=NULL and i<k-1){
		p=p.next;
		i++;
	}
	if(i!=k-1 or p==NULL) return NULL;
	LinkedList cur=head;
	while(p!=NULL){
		cur=cur.next;
		p=p.next;
	}
	return cur;
}

//test case NULL,  ([0],1),([0],1)
