#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> arr;
        int y = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (target == nums[i])
            {
                arr.push_back(i); //->3->4
                y++;              //->2
            }
        }
        if (y == 1)                                    
            arr.push_back(arr[0]);
        if (y == 0)
        {
            return {-1, -1};
        }
        if (y == 0 || y == 1)
            return arr;
        else
            return {arr[0], arr[arr.size() - 1]};
    }
};
int main()
{
    Solution s;

    int target;
    int n;
    int x, y;
    cin >> n;
    vector<int> nums;
    vector<int> brr;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        nums.push_back(x);
    }
    cin >> target;
    brr = s.searchRange(nums, target);
    cout << brr[0] << " " << brr[1];
}