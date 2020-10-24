class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        int i= 0, j= A.size()-1, k= A.size()-1;
        vector<int> sq(A.size());
        
        while(i<= j){
            
            if(abs(A[i])> abs(A[j])){
                sq[k]= A[i]*A[i];
                i++;
            }
            else{
                sq[k]= A[j]*A[j];
                j--;
            }
            k--;
        }
        return sq;
    }
};