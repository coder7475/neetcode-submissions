/**
* Time Complexity: O(n)
* Space Complexity: 
    - O(1) for extra space
    - O(n) for output size
*/
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        if (nums.empty()) return {};

        int n = nums.size(), prod = 1, zeroCount = 0;

        for (int num: nums) {
            if (num != 0)
                prod *= num;
            else
                zeroCount++;
        }

        if (zeroCount > 1) return vector<int>(n, 0);

        vector<int> res(n);

        for (int i = 0; i < n; i++) {
            if (zeroCount > 0) {
                if (nums[i] == 0)
                    res[i] = prod;
                else
                    res[i] =  0;
            }
            else{
                res[i] = prod / nums[i];
            }                
        }

        return res;

    }
};