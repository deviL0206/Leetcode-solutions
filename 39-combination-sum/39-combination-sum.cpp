class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<int> temp;
        vector<vector<int>> res;
        
        findCombination(temp,res,0,candidates,target);
        
        return res;
    }
    
    void findCombination(vector<int> &temp, vector<vector<int>> &res, int i, vector<int> candidates, int target)
    {
        
        if(target==0)
        {
            res.push_back(temp);
            return;
        }
        
        if(i>=candidates.size() || target<0)
            return;
        
        findCombination(temp,res,i+1,candidates,target);
        temp.push_back(candidates[i]);
        findCombination(temp,res,i,candidates,target-candidates[i]);
        temp.pop_back();
    }
};