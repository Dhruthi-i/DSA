#include<bits/stdc++.h>
using namespace std;
void functionn(int i,int n){
    if(i>n) return;
    functionn(i+1,n);
    cout << i << endl;
}
int main(){
    functionn(1,3);
}