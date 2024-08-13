// approach 1
class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        if (n <= 0)
            return false;
        while (n > 1)
        {
            if (n & 1)
            {
                return false;
            }
            n >>= 1;
        }
        return true;
    }
};

// approach 2

// class Solution
// {
// public:
//     bool isPowerOfTwo(int n)
//     {
//         if (n <= 0)
//             return false;
//         // int temp=log2(n);
//         // temp=pow(2,temp);
//         // return temp==n;
//         int largest = pow(2, 31);
//         return largest % n == 0;
//     }
// };