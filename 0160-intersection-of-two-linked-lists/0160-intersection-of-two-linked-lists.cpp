/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1=0,l2=0;

        ListNode *temp1=headA, *temp2=headB;

        while(temp1!=NULL)
        {
            l1++;
            temp1=temp1->next;
        }
        while(temp2!=NULL)
        {
            l2++;
            temp2=temp2->next;
        }

        temp1=headA;

        temp2=headB;
        if(l1>l2)
        {
            int a=l1-l2;
            while(a-- && temp1!=NULL )
            temp1=temp1->next;
        }
        else
        {
            int a=l2-l1;
            while(a-- && temp2!=NULL )
            temp2=temp2->next;
        }

        while(temp1!=NULL && temp2!=NULL)
        {

            //if(temp1->val==temp2->val && temp1->next==temp2->next)
            if(temp1==temp2)
            return temp1;

            temp1=temp1->next;
            temp2=temp2->next;
        }
        return NULL;
    }
};