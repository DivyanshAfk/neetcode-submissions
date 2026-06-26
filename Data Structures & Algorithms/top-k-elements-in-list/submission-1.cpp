class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //we
        unordered_map<int,int> count;
        for(auto n : nums){
            count[n]++;
        }
        priority_queue<pair<int,int>>q;
        for(auto &entry:count){
            q.push(make_pair(entry.second,entry.first));
        }
    vector<int>ans;
        while(k--){
            int x = q.top().second;
            ans.push_back(x);
            q.pop();
        }
        return ans;
    }
};
