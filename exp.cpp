class Solution
{
public:
    int minOperations(int k)
    {
        int sum = 0;
        int operations = 0;
        vector<int> nums = {1};
        if (k == 1)
            return 0;

        while (sum < k)
        {
            for (int i = 1; i < k / 2; i++)
            {
                operations++;
                nums[0]++;
            }

            sum += nums.back();
            nums.push_back(nums.back());
            operations++;
        }

        return operations;
    }
};
