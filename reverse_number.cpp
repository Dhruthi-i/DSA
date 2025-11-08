#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin >> num;
    int result = 0;
    while(num!=0){
        int last_digit=num%10;
        num=num/10;
        result=result*10+last_digit;
    }
    cout << result <<endl;
}