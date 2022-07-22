class Solution {
public:
    static int toint(string s)
    {
        stringstream geek(s);
        int x = 0;
        geek >> x;
        
        return x;
    }
    static bool comp(pair<string,int> p1, pair<string,int> p2)
    {
        int x = toint(p1.first);
        int y = toint(p2.first);
        return x<y;
    }
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
        
        int i,j;
        vector<int> smallest;
        for(i=0;i<queries.size();i++)
        {
            int k = queries[i][0];
            int index = queries[i][1];
            vector<pair<string,int>> temp;
            
            for(j=0;j<nums.size();j++)
            {
                temp.push_back({nums[j].substr(nums[j].length()-index),j});
            }
            sort(temp.begin(),temp.end());
            
            smallest.push_back({temp[k-1].second});
            
        }        
        return smallest;
        
        
    }
};