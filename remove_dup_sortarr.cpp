#include<bits/stdc++.h>
using namespace std;
int remove_dup(int arr[],int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}
int main(){
     int arr[]={1,2,4,7,7};  
    int n=sizeof(arr)/sizeof(arr[0]);
     cout << remove_dup(arr,n);

}