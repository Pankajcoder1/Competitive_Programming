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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* pre=head;
        ListNode* temp=head;
        int n=0;
        while(temp!=NULL)
        {
            temp=temp->next;
            n++;
        }
        temp=head;
        for(int i=0;i<n;i++)
        {
            if(temp->val==val)
            {
                if(temp==head)
                {
                    head=head->next;
                    pre=head;
                    temp=head;
                }
                else
                {
                    pre->next=temp->next;
                    temp=temp->next;
                }
            }
            else
            {
                pre=temp;
                temp=temp->next;
            }
        }
        return head;
    }
};