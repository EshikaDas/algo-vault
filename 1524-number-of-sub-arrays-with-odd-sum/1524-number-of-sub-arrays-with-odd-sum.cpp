class Solution {
public:
    int mod=pow(10,9)+7;
    int numOfSubarrays(vector<int>& arr) {
        int n=arr.size();
        int nodd=0,neve=1,ans=0,sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum%2!=0){
                ans=(ans+neve)%mod;
                nodd++;
            }
            else{
                ans=(ans+nodd)%mod;
                neve++;
            }
        }
        
        return ans%mod;
    }
};