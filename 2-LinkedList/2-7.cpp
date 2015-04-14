#include <iostream>

//check if the linkedlist is palindrome
/*
class LinkedList{
	int val;
	LinkedList next;
}
 */
LinkedList reverse(LinkedList head){
	if(head==NULL || head.next==NULL)
		return head;
	LinkedList pre=head;
	LinkedList cur=head.next;
	while(cur!=NULL){
		pre.next=cur.next;
		cur.next=head;
		head=cur;
		cur=pre.next;
	}
	return head;
}

bool isPalindrome(LinkedList l1){
	LinkedList t= reverse(l1);
	bool res=true;
	while(l1!=NULL && t!=NULL){
		if(l1.val!=t.val)
			return false;
		l1=l1.next;
		t=t.next;
	}
	if(l1!=NULL || t!=NULL)
		return false;
	return true;

}


