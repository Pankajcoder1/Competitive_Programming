/*
    written by Pankaj Kumar.
    country:-INDIA
*/
typedef long long ll ;
const ll INF=1e18;
const ll mod1=1e9+7;
const ll mod2=998244353;
//Add main code here

class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {
        int n = letters.size();
        int left = 0;
        int right = n - 1;

        // If the target is greater than or equal to the last letter, the next greatest letter should be the first letter in the array
        if (target >= letters[right])
        {
            return letters[left];
        }

        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            // If the middle letter is less than or equal to the target, the next greatest letter will be in the right half of the array
            if (letters[mid] <= target)
            {
                left = mid + 1;
            }
            // If the middle letter is greater than the target, the next greatest letter could be the middle letter or in the left half of the array
            else
            {
                right = mid - 1;
            }
        }

        // Once the binary search ends, the left pointer will be pointing to the index of the next greatest letter
        return letters[left];
    }
};