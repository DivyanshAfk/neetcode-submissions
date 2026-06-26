class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st;
        int i,size=0;
        int n = s.size();
        for(int j=0;j<n;j++){
            while(st.find(s[j])!=st.end()){
                st.erase(s[i]);
                i++;
            }
            st.insert(s[j]);
            size=max(size,j-i+1);
        }
        return size;
    }
};
