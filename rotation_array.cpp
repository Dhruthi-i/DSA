/*
#include<bits/stdc++.h>
using namespace std;
void rotate(int arr[],int n){
    int temp=arr[0];
    for(int i=0;i<n;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    rotate(arr,5);
    for(int i=0;i<n;i++){
        cout << arr[i] << endl;
    }
}


//shifting ele by d places
// tc--> O(n+d)//// sc-->O(d)
#include<bits/stdc++.h>
using namespace std;
void shift_elements(int arr[],int n,int d){
    // d=d%5;
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i=0;i<n-d;i++){
        arr[i]=arr[i+d];
    }
    for(int i=n-d;i<n;i++){
        arr[i]=temp[i-d-1];
    }
}
int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};
    int d=2;
    shift_elements(arr,n,d);
    for(int i=0;i<n;i++){
        cout << arr[i] << endl;
    }
}

*/
#include<bits/stdc++.h>
using namespace std;
void shift_elements(int arr[],int n,int d){
    // d=d%5;
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}
int main(){
    int n=5;
    int arr[5]={1,2,3,4,6};
    int d=2;
    shift_elements(arr,n,d);
    for(int i=0;i<n;i++){
        cout << arr[i] << endl;
    }
}