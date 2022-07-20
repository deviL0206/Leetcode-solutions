class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        stack<int> s;    
        int i,j;
        
        int n = temperatures.size();
        vector<int> res(n,-1);
        
        for(i=n-1;i>=0;i--)
        {
            while(!s.empty() && (temperatures[s.top()] <= temperatures[i]))
                s.pop();
            
            if(!s.empty())
            {
                res[i] = s.top();
            }
            else
                res[i] = 0;
            
            s.push(i);
        }
        
        for(i=0;i<n;i++)
        {
            if(res[i]!=0)
                res[i] = res[i]-i;
        }   
        return res;        
    }
};