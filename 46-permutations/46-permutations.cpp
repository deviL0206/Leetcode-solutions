class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<int> temp;
        vector<vector<int>> res;
        
        map<int,bool> m;
        
        findPermutations(nums,temp,res,m);
        return res;
    }
    
    void findPermutations(vector<int> nums, vector<int> &temp, vector<vector<int>> &res, map<int,bool> &m)
    {
        if(temp.size()==nums.size())
            res.push_back(temp);
        
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(nums[i])==m.end())
            {
                m[nums[i]]=true;
                temp.push_back(nums[i]);
                findPermutations(nums,temp,res,m);
                temp.pop_back();
                m.erase(nums[i]);
            }
        }
    }
};