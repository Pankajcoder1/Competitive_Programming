/*
    written by Pankaj Kumar.
    country:-INDIA
*/
typedef long long ll ;


/* ascii value
A=65,Z=90,a=97,z=122
*/

/*  --------------------MAIN PROGRAM----------------------------*/
// to run ctrl+b
const ll INF=1e18;
const ll mod1=1e9+7;
const ll mod2=998244353;
// Techniques :
// divide into cases, brute force, pattern finding
// sort, greedy, binary search, two pointer
// transform into graph

// Experience :
// Cp is nothing but only observation and mathematics.


//Add main code here

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

// // approach 1
// class Solution
// {
// public:
//     bool isPalindrome(ListNode *head)
//     {
//         // approach 1   
//         vector<int> v1,v2;
//         while(head!=NULL){
//             v2.push_back(head->val);
//             head=head->next;
//         }
//         v1=v2;
//         reverse(v2.begin(),v2.end());
//         return v1==v2;
//     }
// };


// approach 2
class Solution
{
private:
    ListNode *findMiddle(ListNode *head)
    {
        ListNode *mid = head;
        ListNode *fast = head->next;
        while (fast != NULL && fast->next != NULL)
        {
            mid = mid->next;
            fast = fast->next->next;
        }
        return mid;
    }
    ListNode *reverseList(ListNode *head)
    {
        ListNode *pre = NULL;
        ListNode *curr = head;
        while (curr != NULL)
        {
            ListNode *next = curr->next;
            curr->next = pre;
            pre = curr;
            curr = next;
        }
        return pre;
    }

public:
    bool isPalindrome(ListNode *head)
    {
        // step 1 -> find the middle of the linked list
        ListNode *middle = findMiddle(head);

        // step 2 -> reverse the second half of the linked list and attach it to othe first half
        middle->next = reverseList(middle->next);

        // step 3 -> compare the first and second half of the list and check if their values are the same
        ListNode *head2 = middle->next;
        ListNode *head1 = head;
        while (head2 != NULL)
        {
            if (head1->val != head2->val)
            {
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        return true;
    }
};

/* -----------------END OF PROGRAM --------------------*/
/*
* stuff you should look before submission
* constraint and time limit
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/