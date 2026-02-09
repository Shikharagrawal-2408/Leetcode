/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        //i have to clone node and insert them right after the originalnoses.

        Node* curr=head;
        while(curr!= NULL)
        {
        Node* dummy = new Node(curr->val);
        dummy->next = curr->next;
        curr->next=dummy;
        curr=dummy->next;
        }

        //then we have to set the random pointer of the cloned nodes.
        curr=head;
        while(curr!=NULL)
        {
            if(curr->random!=NULL)
            curr->next->random = curr->random->next;

        curr=curr->next->next;
        }

        //the restore the original list and segregate the cloned list
        Node* dummy = new Node(0);
        Node* tail = dummy;

        curr=head;

        while(curr!=NULL)
        {
            Node* copyNode=curr->next;
            curr->next = copyNode->next;

            tail->next = copyNode;
            tail=tail->next;

            curr=curr->next;
        }
        return dummy->next;
    }
};