// problem 
/*
    arr = [-2,1,-3,4,-1,2,1,-5,4]
    output = 6
    [4,-1,2,1] has the largest sum = 6
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
            int size = nums.size()-1;
            int maxSum = INT_MIN;
            int currentSum = 0;
            for(int i = 0; i<=size; i++){
                currentSum += nums[i];
                maxSum = max(currentSum, maxSum);
                if(currentSum < 0){
                    currentSum = 0;
                }
            }
            return maxSum;
        }
    };

int main(){

}


