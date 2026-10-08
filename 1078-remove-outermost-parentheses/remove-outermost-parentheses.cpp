class Solution {
public:
    string removeOuterParentheses(string s) {

        vector<char> v;
        
        int count=0;
        for(int i=0; i<s.size(); i++){

            if(s[i]=='(')
            {
                if(count > 0){
                    v.push_back(s[i]);
                }
                count++;
            }
            else
            {
                count--;

                if(count > 0){
                     v.push_back(s[i]);
                }
            }
            
            
        }
        string ans(v.begin(), v.end());
        return ans;
        
    }
};