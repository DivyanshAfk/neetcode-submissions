class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mp;
        for(auto x: nums){
            mp[x]++;
        }
        vector<vector<int>>freq(n+1);
        for(auto entry: mp){
            freq[entry.second].push_back(entry.first);
        }

        vector <int> res;
        for(int i=freq.size()-1; i>0 ;--i ){
            for(int n :freq[i]){
                res.push_back(n);
                if(res.size()==k){
                    return res;
                }
            }
            
        }
        return res;
    }
};
