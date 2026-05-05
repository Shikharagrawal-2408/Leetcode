/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL)
        return head;

        int cnt=1;
        ListNode* tail = head;
        ListNode* temp=head;
        while(tail->next!=NULL)
        {
            cnt++;
            tail=tail->next;
        }
        
        k%=cnt;
        if(k==0)
        return head;

        int a=cnt-k;
        temp=head;

        for(int i=1;i<a;i++)
            temp=temp->next;
        
        ListNode* newhead=temp->next;
        temp->next=NULL;
        tail->next=head;
        return newhead;
    }
};