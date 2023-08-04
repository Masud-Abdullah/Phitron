class Solution
{
public:
    void merge(int l, int r, int mid, vector<int> &nums)
    {
        int left_size = mid - l + 1;
        int L[left_size + 1];

        int right_size = r - mid;
        int R[right_size + 1];

        for (int i = l, j = 0; i <= mid; i++, j++)
        {
            L[j] = nums[i];
        }

        for (int i = mid + 1, j = 0; i <= r; i++, j++)
        {
            R[j] = nums[i];
        }

        L[left_size] = INT_MAX;
        R[right_size] = INT_MAX;

        int lp = 0, rp = 0;
        for (int i = l; i <= r; i++)
        {
            if (L[lp] <= R[rp])
            {
                nums[i] = L[lp];
                lp++;
            }
            else
            {
                nums[i] = R[rp];
                rp++;
            }
        }
    }
    void mergeSort(int l, int r, vector<int> &nums)
    {
        if (l == r)
            return;
        int mid = (l + r) / 2;
        mergeSort(l, mid, nums);
        mergeSort(mid + 1, r, nums);
        merge(l, r, mid, nums);
    }
    vector<int> sortArray(vector<int> &nums)
    {
        mergeSort(0, nums.size() - 1, nums);
        return nums;
    }
};