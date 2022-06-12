class Solution
{
public:
    void findSum(vector<int> &nums, int idx, vector<int> &freq, int &cSum)
    {
        if (freq[nums[idx]] == 1 || idx == nums.size() - 1)
        {
            return;
        }

        cSum += nums[idx];

        freq[nums[idx]] = 1;

        findSum(nums, idx + 1, freq, cSum);
    }

public:
    int maximumUniqueSubarray(vector<int> &nums)
    {
        int ans = INT_MIN, n = nums.size();
        vector<int> freq(n, 0);

        for (int i = 0; i < n; i++)
        {

            int cSum = 0;

            findSum(nums, i, freq, cSum);

            ans = max(ans, cSum);
        }
        return ans;
    }
};