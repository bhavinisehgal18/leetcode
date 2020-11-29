class Solution {
public:
    long long int reverse(long long int x) {
        int digit;
        long long int rev=0;
        while(x!=0)
        {
            digit= x%10;
            x=x/10;
            rev=rev*10+digit;
        }
        if(rev > pow(-2,31) && rev < pow(2,31)-1)
        {
          return rev;
        }
        else
        {
            return 0;
        }
    }
};
