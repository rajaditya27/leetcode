class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n= nums.size();
        priority_queue<int> pq;
        for(auto i : nums) pq.push(i);
        int greatest = pq.top();
        pq.pop();
        int second_greatest=pq.top();
        pq.pop();

        return (greatest-1)*(second_greatest-1);

    }
};