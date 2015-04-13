#include <iostream>

using namespace std;
/*
	class LinkedList{
		int val;
		LinkedList next;
	}
	
*/
void reDupli(LinkedList head){
	if(head==NULL || head.next==NULL)
		return head;
	LinkedList cur=head;
	while(cur!=NULL){
		LinkedList p = cur.next;
		LinkedList pre = cur;
		while(p!=NULL) {
			if(p.val==cur.val){
				pre.next=p.next;
				p=p.next;
			}
			else{
				p=p.next;
				pre=pre.next;
			}
		}
		
	}
	return head;
}
