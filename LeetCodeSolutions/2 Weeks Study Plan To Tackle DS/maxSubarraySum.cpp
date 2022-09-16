class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {

        int n = nums.size();
        int max_till = INT_MIN;
        int maxi = 0;

        for (int i = 0; i < n; i++)
        {
            maxi = maxi + nums[i];
            if (maxi > max_till)
            {
                max_till = maxi;
            }
            if (maxi < 0)
            {
                maxi = 0;
            }
        }
        return max_till;
    }
};