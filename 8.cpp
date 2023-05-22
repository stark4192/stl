#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> arr;
        int m = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                for (int k = 0; k < nums.size(); k++)
                {
                    if (nums[i] + nums[j] + nums[k] == 0)
                    {
                        arr[m].push_back(nums[i]);
                        arr[m].push_back(nums[j]);
                        arr[m].push_back(nums[k]);
                        m++;
                    }
                }
            }
        }
        return arr;
    }
};
int main()
{
    Solution s;
    vector<int> arr(5);
    vector<vector<int>> brr;
    vector<int>::iterator it;
    arr = {-1, -2, 0, 2, 3};
    brr = s.threeSum(arr);
    cout << brr[0][0];
    return 0;
}