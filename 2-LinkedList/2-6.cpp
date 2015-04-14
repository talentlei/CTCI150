#include <iostream>

//find  the interval node in cycle list;
/*
class LinkedList{
	int val;
	LinkedList next;
}
 */
LinkedList  interval(LinkedList head){
	if(head==NULL|| head.next==NULL)
		return NULL;
	LinkedList fast=head.next.next,slow=head.next;
	while(fast !=NULL && fast!=slow){
		fast=fast.next;
		if (fast==NULL)
			break;
		fast=fast.next;
		slow=slow.next;
	}
	if (fast==NULL)
		return NULL;
	LinkedList p=head;
	wile(p!=slow){
		slow=slow.next;
		p=p.next;
	}
	return p;
}


