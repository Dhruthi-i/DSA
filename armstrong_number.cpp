#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin >> num;
    int result=0;
    int temp=num;
    int count=(int)log10(num)+1;
    while(num!=0){
        int last_digit=num%10;
        num=num/10;
        result+=pow(last_digit,count);
    }
    if(result==temp){
        cout << "palindrome";
    }
    else{
        cout << "not a palindrome";
    }
}