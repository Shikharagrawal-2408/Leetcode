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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr=head;
        int cnt=0;
        while(curr!=NULL && cnt<k)
        {
            curr=curr->next;
            cnt++;
        }

        if(cnt==k)
        {
            //reverse first k nodes
            ListNode* prev=NULL;
            ListNode* curr=head;
            ListNode* nexta=NULL;
            int cnt2=0;
        while(cnt2<k)
        {
            nexta=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nexta;
            cnt2++;
        }
        head->next=reverseKGroup(curr,k);
        return prev;
        }
        return head;
    }
};