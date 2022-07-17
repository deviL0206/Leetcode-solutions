class Solution {
public:
    
    static bool comparator(pair<int,string> p1, pair<int, string> p2)
    {
        if(p1.first==p2.first)
            return p1.second < p2.second;
        
        return p1.first > p2.first;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        map<string,int> m;
        
        int i,j;
        
        for(i=0;i<words.size();i++)
        {
            m[words[i]]++;
        }
        
        vector<pair<int,string>> vect;
        
        for(auto it: m)
        {
            vect.push_back({it.second,it.first});
        }
        
        sort(vect.begin(),vect.end(), comparator);
        
        vector<string> ans;
        
        for(i=0;i<k;i++)
        {
            ans.push_back(vect[i].second);
        }
        
        return ans;
        
    }
};