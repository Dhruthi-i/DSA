/*
//reverse an arrray using two pointers
#include<bits/stdc++.h>
using namespace std;
void arrr(int l,int r,int arr[]){
    if(l>=r) return ;
    swap(arr[l],arr[r]);
    arrr(l+1,r-1,arr);

}
int main(){
int n;
cin >> n;
int arr[n];
for(int i=0;i<n;i++){
    cin >> arr[i];
}
arrr(0,n-1,arr);
for(int i=0;i<n;i++){
    cout << arr[i] << " ";
}
}


//reverse an array using single pointer
#include<bits/stdc++.h>
using namespace std;
void arrr(int i,int n,int arr[]){
    if(i>=n/2) return ;
    swap(arr[i],arr[n-i-1]);
    arrr(i+1,n,arr);

}
int main(){
int n;
cin >> n;
int arr[n];
for(int i=0;i<n;i++){
    cin >> arr[i];
}
arrr(0,n,arr);
for(int i=0;i<n;i++){
    cout << arr[i] << " ";
}
}


//check if a string is palindrome or not

#include<bits/stdc++.h>
using namespace std;
bool palindrome(int i,string str,int n){
    if(i>=n/2) return true;
    if(str[i]!=str[n-i-1]) return false;
    return palindrome(i+1,str,n);
}
int main(){
    string str;
    cin >> str;
    cout << boolalpha << palindrome(0,str,str.size());
}

*/
//fibonacci series
