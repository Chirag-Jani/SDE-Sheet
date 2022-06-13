// comment karelu che e maru try karelu che via recursion

class Solution
{
    // public:
    //     int f(vector<int>& nums, int &ans, int idx){
    //         if(idx == nums.size()) return ans;

    //         int l = f(nums, ans, idx + 1);
    //         ans = ans * nums[idx];
    //         int r = f(nums, ans, idx + 1);

    //         return max(l, r);
    //     }
public:
    int maxProduct(vector<int> &nums)
    {

        // int ans = 1;
        // return f(nums, ans, 0);

        int prod1 = nums[0], prod2 = nums[0], result = nums[0];

        for (int i = 1; i < nums.size(); i++)
        {
            int temp = max({nums[i], prod1 * nums[i], prod2 * nums[i]});
            prod2 = min({nums[i], prod1 * nums[i], prod2 * nums[i]});
            prod1 = temp;

            result = max(result, prod1);
        }

        return result;
    }
};