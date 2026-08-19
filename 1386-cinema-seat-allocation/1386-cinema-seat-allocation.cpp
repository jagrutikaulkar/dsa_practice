class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int,vector<int>>mpp;
        for(auto it:reservedSeats){
            mpp[it[0]].push_back(it[1]);
        }
        int ans=(n-mpp.size())*2;
        for(auto i:mpp){
            bool k=0;
            vector<bool>s(11,0);
            for(auto x:i.second){
                s[x]=1;
            }
            if(!s[2] && !s[3] && !s[4] && !s[5]){
                ans++;
                k=1;
            }
            if(!s[6] && !s[7] && !s[8] && !s[9]){
                ans++;
                k=1;
            }
            if(!k){
                if(!s[6] && !s[7] && !s[4] && !s[5]){
                    ans++;
                }
            }
        }
        return ans;
    }
};