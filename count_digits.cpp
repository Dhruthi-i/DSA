#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin >> num;
    int count = 0;
    while(num!=0){
        count++;
        num=num/10;
    }
    cout << count <<endl;

    // int num1=1234;
    // num1=(int)log10(num1)+1;
    // cout << num1;


}