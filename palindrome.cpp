#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin >> num;
    int temp = num;
    int reverse_num=0;
    while(num!=0){
        int last_digit=num%10;
        num=num/10;
        reverse_num = reverse_num*10 + last_digit;
    }
    if(reverse_num == temp){
        cout << temp << " is palindrome" ;
    }
    else{
        cout << temp <<" not a palindrome";
    }
}