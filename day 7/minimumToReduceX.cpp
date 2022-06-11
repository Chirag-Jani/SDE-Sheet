#include <iostream>
#include <vector>
using namespace std;

int f(vector<int> &nums, int start, int end, int target, int ans)
{
    if (target == 0)
    {
        cout << "target 0" << endl;
        return ans;
    }
    else
    {
        if (nums[start] > target && nums[end] > target)
        {
            cout << "chose none" << endl;
            return -1;
        }

        else if (nums[end] >= nums[start] && nums[end] <= target)
        {
            cout << "chose end" << endl;
            cout << "target " << target - nums[end] << endl;
            return f(nums, start, end - 1, target - nums[end], ans + 1);
        }

        else if (nums[end] < nums[start] && nums[end] <= target)
        {
            cout << "chose end" << endl;
            cout << "target " << target - nums[end] << endl;
            return f(nums, start, end - 1, target - nums[end], ans + 1);
        }

        else if (nums[start] >= nums[end] && nums[start] <= target)
        {
            cout << "chose start" << endl;
            cout << "target " << target - nums[start] << endl;
            return f(nums, start + 1, end, target - nums[start], ans + 1);
        }
        else
        {
            cout << "chose start" << endl;
            cout << "target " << target - nums[start] << endl;
            return f(nums, start + 1, end, target - nums[start], ans + 1);
        }
    }

    return -1;
}

int minOperations(vector<int> &nums, int x)
{
    int n = nums.size();
    int ans = -1;
    ans = f(nums, 0, n - 1, x, ans + 1);

    return ans;
}

int main()
{
    vector<int> nums = {3, 2, 20, 1, 1, 3};
    int x = 10;
    cout << minOperations(nums, x);
}