class Solution {
public:
    static bool comparator(vector<int> p1, vector<int> p2)
    {
        return p1[0]*p1[0] + p1[1]*p1[1] < p2[0]*p2[0] + p2[1]*p2[1];
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        vector<vector<int>> res;
        
        int i,j;
        
        int n = points.size();
        
        sort(points.begin(),points.end(),comparator);
        
        for(i=0;i<k;i++)
        {
            res.push_back(points[i]);
        }
        
        return res;
        
    }
};