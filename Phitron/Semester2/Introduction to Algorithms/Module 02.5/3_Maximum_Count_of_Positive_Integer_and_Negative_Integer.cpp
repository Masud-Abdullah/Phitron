class Solution
{
public:
    int maximumCount(vector<int> &nums)
    {
        int count_positive = 0;
        int count_negative = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0)
                count_positive++;
            else if (nums[i] < 0)
                count_negative++;
        }
        return max(count_positive, count_negative);
    }
};