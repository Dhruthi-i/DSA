#include<bits/stdc++.h>
using namespace std;

void sortZeroOneTwo(vector<int>& nums,int n){
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if (nums[mid]==0){
            swap(nums[low],nums[mid]);
            mid++;
            low++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else {
            swap(nums[high],nums[mid]);
            high--;

        }
    }

}
int main(){
    vector<int> nums={1,2,0,1,2,1,0,0,1,2};
    int n = nums.size();
    sortZeroOneTwo(nums,n);

    for (int val : nums)
        cout << val << " ";
}