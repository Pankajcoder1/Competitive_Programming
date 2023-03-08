/*
    written by Pankaj Kumar.
    country:-INDIA
*/
typedef long long ll ;
const ll INF=1e18;
const ll mod1=1e9+7;
const ll mod2=998244353;
//Add main code here

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {
        // method 1
        ListNode *slow = head, *fast = head;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next; 
            fast = fast->next->next;
            if(slow == fast){
                slow = head;
                while(slow != fast){
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow;
            }
        }
        return NULL;

        // method 2
        ListNode *temp = head;
        unordered_map<ListNode *, int> m;
        while (temp != NULL)
        {
            if (m.find(temp) != m.end())
            {
                return temp;
            }
            m[temp]++;
            temp = temp->next;
        }
        return NULL;
    }
};