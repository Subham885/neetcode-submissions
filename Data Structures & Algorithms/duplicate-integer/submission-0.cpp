class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> dict;
        for(int i = 0;i<nums.size();i++){
            dict[nums[i]]++;
            if(dict[nums[i]]>1) return true;
        }
        return false;
    }
};