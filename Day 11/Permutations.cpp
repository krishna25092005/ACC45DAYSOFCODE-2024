/*
    Time Complexity : O(n*n!)
    Space Complexity : O(n*n!)
*/
class Solution
{
public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> result;

        sort(nums.begin(), nums.end());
        result.push_back(nums);

        // NOTE: Implementation using built-in STL function next_permutation(First Iterator, Last Iterator)
        // next_permutation() returns true if the function could rearrange the object as a lexicographically greater permutation.
        // Otherwise, it returns false.
        while (next_permutation(nums.begin(), nums.end()))
        {
            result.push_back(nums);
        }
        return result;
    }
};