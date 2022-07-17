class Solution {
public:
    
    void findsubsets(vector<int> nums, int i, int n, vector<int> &temp, vector<vector<int>> &res)
    {
        if(i==n)
        {
            res.push_back(temp);
            return;
        }
        
        findsubsets(nums,i+1,n,temp,res);
        temp.push_back(nums[i]);
        findsubsets(nums,i+1,n,temp,res);
        temp.pop_back();
           
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        
        int n = nums.size();
        
        vector<vector<int>> res;
        vector<int> temp;
        
        findsubsets(nums,0,n,temp,res);
        
        return res;
        
    }
};