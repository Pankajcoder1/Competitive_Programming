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
    bool hasCycle(ListNode *head) {

        // method 1
        ListNode *fast = head, *slow = head;

        while (fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow){
                return true;
            }
        }
        return false;

        // method 2
        ListNode* temp=head;
        map<ListNode*, int> coun;
        while(temp){
            if (coun[temp] > 0)
            {
                return true;
            }
            coun[temp]++;
            temp=temp->next;
        }
        return false;
    }
};