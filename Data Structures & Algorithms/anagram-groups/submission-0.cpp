class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>ans;

        for(auto &s:strs){
            vector<int>cnt(26,0);
            for(auto ch:s){
                cnt[ch-'a']++;
            }

            string key;
            for(int i : cnt){
                key+='#'+to_string(i);
            }
            ans[key].push_back(s);
        }   

        vector<vector<string>> res;
        for(auto &pair:ans){
            res.push_back(pair.second);
        }
        return res;
    }
};
