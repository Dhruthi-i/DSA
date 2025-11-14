#include<bits/stdc++.h>
using namespace std;
string read(int n,int target,vector<int> book){
// vector<int> read(int n,int target,vector<int> book){

int left=0;
int right=n-1;
sort(book.begin(),book.end());
while(left<right){
    int sum=book[left]+book[right];
    if(sum==target){

        return "YES";
    } 
    else if(sum<target) left++;
    else right--;
}
return "NO";




    // map<int,int> mpp;
    // for(int i=0;i<n;i++){
    //     int a=book[i];
    //     int more = target - a;
    //     if(mpp.find(more) != mpp.end()){
    //         return {mpp[more],i};
    //     }
    //     mpp[a]=i;
    // }
    // return {-1,-1};
}

int main(){
    int target =15;
    int n=5;
    vector<int> book={1,4,5,7,8};
    cout << read(n,target,book);
    // vector<int> ans = read(n, target, book);

    // cout << ans[0] << " " << ans[1];

}