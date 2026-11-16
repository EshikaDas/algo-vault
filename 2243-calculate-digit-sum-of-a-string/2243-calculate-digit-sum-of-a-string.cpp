class Solution {
public:
    string digitSum(string s, int k) {
        while(s.size()>k){
            string ans;
            string res;
            for(int i=0;i<s.size();i+=k){
                ans=s.substr(i,k);
                int dig=0;
                for(int j=0;j<ans.size();j++){
                    dig+=(ans[j]-'0');
                }
                res+=to_string(dig);
            }
            s=res;
        }
        return s;
    }
};