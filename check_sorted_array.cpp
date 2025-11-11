#include<bits/stdc++.h>
using namespace std;
bool check_sorted(int arr[],int n){
    int first=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){

        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    int arr[]={1,2,4,7,7};  
    int n=sizeof(arr)/sizeof(arr[0]);
    cout << boolalpha << check_sorted(arr,n);
}