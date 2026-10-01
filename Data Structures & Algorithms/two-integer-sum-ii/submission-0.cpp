class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> op;
        int i =0, j=numbers.size()-1;
        while(i<j){
            int sum = numbers[i]+numbers[j];
            if(sum == target){
                op.push_back(i+1);
                op.push_back(j+1);
                break;
            }
            if(sum>target){
                j--;
            }
            if(sum<target){
                i++;
            }
        }
        return op;
    }
};
