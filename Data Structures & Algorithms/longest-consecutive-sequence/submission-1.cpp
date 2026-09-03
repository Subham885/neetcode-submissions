class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        if(n == 0){
            return 0;
        }
        int sequence = 1,temp = 1;
        for(int i = 0;i<n-1;i++){
            if(nums[i] - nums[i+1] == -1){
                temp += 1;
            }
            else if(nums[i] - nums[i+1] == 0){
                continue;
            }
            else{
                temp = 1;
            }

            if(sequence < temp) {
                sequence = temp;
                
            }
        }
        return sequence;
    }
};
