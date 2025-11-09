/*
//number hashing
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int hashh[5]={0};
    for(int i =0; i<n;i++){
        hashh[arr[i]]++;
    }
    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        cout << hashh[number] << endl;
    }
}



//character hashing 

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    
    int hashh[26]={0};
    for(int i =0; i<str.size();i++){
        hashh[str[i]-'a']++;
    }
    int q;
    cin >> q;
    while(q--){
        char c;
        cin >> c;
        cout << hashh[c-'a'] << endl;
    }
}

*/

//map
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        mpp[arr[i]]++;
    }
    

    for(auto it :mpp){
        cout << it.first <<"->" <<it.second << endl;
    }
    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        cout << mpp[number] << endl;
    }
}
