class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {

        // Solving using STL - One Liner 😎😎
        // Time Complexity : O(n)
        // Space Complexity : O(1)
        next_permutation(nums.begin(), nums.end());
    }
};