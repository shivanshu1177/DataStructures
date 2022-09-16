class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        if (num == 1)
        {
            return true;
        }
        int s = 1;
        int e = num / 2;

        while (s <= e)
        {
            long long mid = s + (e - s) / 2;
            long long sq = mid * mid;
            if (sq == num)
            {
                return true;
            }
            if (sq < num)
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        return false;
    }
};