#include <iostream>

//remove the mid node of linkedlist given the mid node;
/*
class LinkedList{
	int val;
	LinkedList next;
}
 */

void delMid(LinkedList mid){
	if(mid==NULL || mid.next==NULL){
		mid=NULL;
		return;
	}
	mid.val=mid.next.val;
	mid.next=mid.next.next;
}
