/*
//sum of till number
#include<bits/stdc++.h>
using namespace std;

// void functionn(int num,int sum){
    // if(num<0) {
        //      cout << sum << endl;
        //     return;
        // }
        // functionn(num-1,sum+num);
int sum(int num){
    if(num==0) return 0;
    return num+sum(num-1);
   
}
int main(){
    int num=5;

    int result=sum(6);
    cout << result;
    // functionn(num,0);
}
*/

//factorial
#include<bits/stdc++.h>
using namespace std;
int fact(int num){
    if(num==0||num==1) return 1;
    return fact(num-1)*num;
}
int main(){
    int res=fact(3);
    cout << res;
}