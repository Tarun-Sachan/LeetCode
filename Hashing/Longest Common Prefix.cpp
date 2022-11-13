class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s=strs[0];
        string ans;
        for(int i=0;i<s.length();i++){
            bool match=true;
            for(int j=1;j<strs.size();j++){
                if(s[i]!=strs[j][i]){
                    match=false;
                    break;
                }
            }
                if(match==false)
                    break;
                else
                    ans.push_back(s[i]);
                
        }
        return ans;
        
    }
};
