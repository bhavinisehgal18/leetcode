class Solution {
public:
   int myAtoi(string s) {
        long ans=0;
        int sign=1,i=0;
        while(s[i]==' ') { 
            ++i; 
        }
        if(s[i]=='-' || s[i]=='+') {
            if(s[i]=='-') 
                sign=-1;
            else 
                sign=1;
            ++i;
        }
        while(s[i]>='0' && s[i]<='9') {
            ans=ans*10+(s[i]-'0');
            if(ans*sign>=INT_MAX) 
                return INT_MAX;
            if(ans*sign<=INT_MIN) 
                return INT_MIN;   
            ++i;
        } 
        return ans*sign; 
    
    }
};
