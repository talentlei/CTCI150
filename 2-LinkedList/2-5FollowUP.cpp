#include <iostream>

//add two num represent using linkedlist , every element store one digit, and the last important digit is the tail of the linkedlist;
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

LinkedList tailadd(LinkedList l1, LinkedList l2){
	if(l1==NULL)
		return l2;
	if(l2==NULL)
		return l1;
	int re=0,tsum=0;
	LinkedList thead(0);
	LinkedList pre=thead;
	while(l1!=NULL && l2!=NULL){
		tsum=re+l1.val+l2.val;
		re=tsum/10;
		tsum=tsum%10;
		LinkedList temp(tsum);
		pre.next=temp;
		pre=temp;
		l1=l1.next;
		l2=l2.next;
	}
	LinkedList rest=NULL;
	if (l1!=NULL)
		rest=l1;
	if(l2!=NULL )
		rest=l2;
	while(res!=NULL){
		tsum=re+res.val;
		re=tsum/10;
		tsum=tsum%10;
		LinkedList temp(tsum);
		pre.next=temp;
		pre=temp;
		res=res.next;
	}
	if(re!=0){
		LinkedList temp(re);
		pre.next=temp;
	}
	return thead.next;
}

LinkedList add(LinkedList l1, LinkedList l2){
	LinkedList tl1=reverse(l1);
	LinkedList tl2=reverse(l2);
	LinkedList tres= tailadd(tl1,tl2);
	LinkedList res= reverse(tres);
}
