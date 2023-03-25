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
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2)
    {
        int m = 0, n = 0;
        ListNode *curr1 = head1, *curr2 = head2;
        while (curr1 != NULL)
        {
            m++;
            curr1 = curr1->next;
        }
        while (curr2 != NULL)
        {
            n++;
            curr2 = curr2->next;
        }
        curr1 = head1, curr2 = head2;
        if (m > n)
        {
            int diff = m - n;
            while (diff)
            {
                curr1 = curr1->next;
                diff--;
            }
            while (curr1 != NULL)
            {
                if (curr1 == curr2)
                    return curr1;
                curr1 = curr1->next;
                curr2 = curr2->next;
            }
        }

        else
        {
            int diff = n - m;
            while (diff)
            {
                curr2 = curr2->next;
                diff--;
            }
            while (curr1 != NULL)
            {
                if (curr1 == curr2)
                    return curr1;
                curr1 = curr1->next;
                curr2 = curr2->next;
            }
        }
        return NULL;

        // map<ListNode*, int> mp;
        // while(headA!=nullptr){
        //     mp[headA]++;
        //     headA=headA->next;
        // }
        // while(headB!=nullptr){
        //     if(mp[headB]>0){
        //         return headB;
        //     }
        //     headB=headB->next;
        // }
        // return NULL;
    }
};