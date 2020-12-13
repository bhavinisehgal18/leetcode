class Solution {
public:
    int subarraySum(vector<int>& A, int k) {
        unordered_map<int, int> s;
        s[0]=1;
        int freq=0;
        int sum=0;
        int comp=0;
        for(int i=0; i<A.size(); i++)
        {
            sum += A[i];        
            comp = sum-k;            
            if(s.find(comp)!=s.end())
            {
              freq+=s[comp];
            }
            s[sum]++;            
        }     
        return freq;
    }
};
