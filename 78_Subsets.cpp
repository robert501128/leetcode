class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> subset;
        res.push_back(subset);
        for(int i = 0; i < nums.size(); i++)
        {
            int n = res.size();
            for(int j = 0; j < n; j++)
            {
                vector<int> temp = res[j];
                temp.push_back( nums[i] );
                res.push_back( temp );
            }
        }
        return res;
    }
};
