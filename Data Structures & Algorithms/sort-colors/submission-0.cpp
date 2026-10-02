class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> red;
        vector<int> white;
        vector<int> blue;
        for ( int i =0; i<nums.size();i++){
            if(nums[i]==0){
                red.push_back(nums[i]);
            }
            else if(nums[i]==1){
                white.push_back(nums[i]);
            }
            else{
                blue.push_back(nums[i]);
            }
        }
        nums.clear();
        for(int i =0;i<red.size();i++){
            nums.push_back(red[i]);
        }
        for(int i =0;i<white.size();i++){
            nums.push_back(white[i]);
        }
        for(int i=0;i<blue.size();i++){
            nums.push_back(blue[i]);
        }
        red.clear();
        white.clear();
        blue.clear();
    }
};