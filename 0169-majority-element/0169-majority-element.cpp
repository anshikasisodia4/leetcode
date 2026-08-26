class Solution {
public:
    int majorityElement(vector<int>& num) {
        int n=num.size();

        for(int val: num){
            int freq=0;

            for(int el:num){
                if(el==val){
                    freq++;
                }
            }

            if(freq>n/2){
                return val;
            }
        }
        return -1;
    }
};