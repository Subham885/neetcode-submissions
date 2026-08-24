class Solution {
public:
    bool isAnagram(string s, string t) {
        int nums[26] = {0};
        for(int i = 0;i<s.size();i++){
            nums[s[i]-97]++;
        }
        for(int i = 0;i<t.size();i++){
            nums[t[i]-97]--;
        }
        for(int i = 0;i<26;i++){
            if(nums[i]!=0) return false;
        }
        return true;
    }
};
