class Solution {
public:
    bool isValid(string s) {
        stack<char> s_one;
        map<char,char> close = {{']','['},{')','('},{'}','{'}};

        for(char c : s){
            if(close.count(c)){
                if(!s_one.empty() && s_one.top() == close[c]){
                    s_one.pop();
                }
                else{
                    return false;
                }
            }
            else{
                s_one.push(c);
            }
        }
        return s_one.empty();
    }
};
