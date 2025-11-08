#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2;
    cin >> num1>>num2;
    int gcd=1;

    //tc --> O(min(num1,num2))
    // for(int i=1;i<=min(num1,num2);i++){
    //     if(num1%i==0 && num2%i==0){
    //         gcd=i;
    //     }
    // }
    // cout << gcd <<endl;


    // tc --> O(log(min(n1,n2)))
    while(num1>0 && num2>0){

        if(num1>num2){
            num1=num1%num2;
        }
        else if(num2>num1){
            
            num2=num2%num1;
        }
    }

    if(num1==0) cout << num2;
    else if(num2==0) cout << num1;
}