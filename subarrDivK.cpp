class Solution {
public:
    int subarraysDivByK(vector<int>& A, int K) {
        unordered_map<int, int> s;
        s[0]=1;
        int freq=0;
        int sum=0;
        int rem;
        for(int i=0; i<A.size(); i++)
        {
            sum +=A[i];        
            rem= sum%K;
            if(rem<0)
            {
              rem+=K;
            }
            if(s.count(rem)>0)
            {
              freq+= s[rem];
            }
            s[rem]++;            
        }     
        return freq;
    }
};
