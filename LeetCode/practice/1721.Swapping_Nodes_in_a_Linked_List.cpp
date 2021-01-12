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
    ListNode* swapNodes(ListNode* head, int k) {
        int n=0,target=0;
        ListNode *v1,*v2,*temp;
        temp=head;
        while(temp!=nullptr)
        {
            n++;
            temp=temp->next;
        }
        target=n-k+1;
        n=0;
        temp=head;
        while(temp!=nullptr)
        {
            n++;
            if(n==k)
                v1=temp;
            if(n==target)
                v2=temp;
            temp=temp->next;
        }
        swap(v1->val,v2->val);
        return head;
    }
};