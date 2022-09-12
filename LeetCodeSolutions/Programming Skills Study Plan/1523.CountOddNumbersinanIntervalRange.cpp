class Solution
{
public:
    int countOdds(int low, int high)
    {

        int r;
        if (low % 2 == 0 and high % 2 == 0)
            r = (high - low) / 2;
        else
            r = 1 + (high - low) / 2;
        return r;
    }
};