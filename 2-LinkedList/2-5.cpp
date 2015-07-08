#include <iostream>

//add two num represent using linkedlist , every element store one digit, and the last important digit is the head of the linkedlist;
/*
class LinkedList{
	int val;
	LinkedList next;
}
 */

 ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(!l1) return l2;
        if(!l2) return l1;
        int carry=0,sum,a,b;
        ListNode thead(0);
        ListNode* temp= &thead;
        while(l2!=NULL ||l1!=NULL){
            a=(l1==NULL)?0:l1->val;
            b=(l2==NULL)?0:l2->val;
            sum = a+b+carry;
            carry = sum/10;
            sum = sum%10;
            ListNode* t =new ListNode(sum);
            temp =temp->next = t;
            if(l1) l1=l1->next;
            if(l2) l2 = l2->next;
            
        }
        if(carry!=0){
            ListNode* t =new ListNode(carry); 
            temp->next = t;
        }
        return thead.next;
    }

