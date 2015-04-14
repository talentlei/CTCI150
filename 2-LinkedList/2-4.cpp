#include <iostream>
//partition the linkedlist by the value x, and the element small than x should be before the element larger or equal to x;
/*
class LinkedList{
	int val;
	LinkedList next;
}
 */

LinkedList partition(LinkedList head, int x){
	if(head==NULL || head.next==NULL)
		return head;
	LinkedList pre=head,cur=head.next;
	bool isFoundX=false;
	if(head.val>=x) isFoundX=true;
	while(cur!=NULL){
		if(isFoundX && cur.val<x){
			pre.next=cur.next;
			cur.next=head;
			head=cur;
			cur=pre.next;
			continue;
		}
		else if(!isFoundX && cur.val>=x)
			isFoundX=true;
		pre=pre.next;
		cur=cur.next;
	}
}
