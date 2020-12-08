class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
      vector<int>answer;
        for(int j=0; j<arr2.size(); j++)
        {
            for(int i=0; i<arr1.size(); i++)
            {
                if(arr2[j]==arr1[i])
                {
                    answer.push_back(arr2[j]);
                    arr1[i]= -1;
                }
                
            }
        }
        sort(arr1.begin(), arr1.end());
        for(int i=0; i<arr1.size(); i++)
        {
            if(arr1[i]!= -1)
            {
                answer.push_back(arr1[i]);
            }
        }
        return answer;
    }
};
