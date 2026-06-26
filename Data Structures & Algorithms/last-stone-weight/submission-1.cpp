class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        if (stones.size()==1){
            return stones[0];
        }
        for(int num:stones){
            pq.push(num);
        }
        int res;
        while(pq.size()>1){
            int i = pq.top();
            pq.pop();
            int j = pq.top();
            pq.pop();
            res = abs(i-j);
            pq.push(res);
        }
        return res;
    }
};
