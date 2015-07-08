#include <iostream>
//partition the linkedlist by the value x, and the element small than x should be before the element larger or equal to x;
/*
class LinkedList{
	int val;
	LinkedList next;
}
 */

ListNode* partition(ListNode* head, int x) {
        ListNode h1(0),h2(0);
        ListNode* l1 = &h1,*l2 =&h2;
        while(head!=nullptr){
            if(head->val>=x)   l2=l2->next=head;
            else   l1=l1->next=head;
            head = head->next;
        }
        l2->next = NULL;
        l1->next = h2.next;
        return h1.next;
    }
}
