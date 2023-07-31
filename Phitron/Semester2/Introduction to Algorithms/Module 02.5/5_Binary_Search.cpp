class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int left = 0, ans = -1;
        int right = nums.size() - 1;
        int mid = (left + right) / 2;
        while (left <= right)
        {
            if (nums[mid] == target)
            {
                ans = mid;
                break;
            }
            else if (target < nums[mid])
            {
                right = mid - 1;
                mid = (left + right) / 2;
            }
            else if (target > nums[mid])
            {
                left = mid + 1;
                mid = (left + right) / 2;
            }
        }
        return ans;
    }
};