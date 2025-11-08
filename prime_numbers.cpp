#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin >> num;
    int count =0;

    //O(n)
    // for(int i =1;i<=num;i++){
    //     if(num%i == 0){
    //         count++;
    //     }
    // }
    // if(count>2){
    //     cout << "not a prime";
        
    // }
    // else{
    //     cout << "prime";
        
    // }

     for(int i =1;i*i<=num;i++){
        if(num%i == 0){
            count++;
            if(num/i!=i){
                count++;
            }
        }
    }
    if(count>2){
        cout << "not a prime";  
    }
    else{
        cout << "prime"; 
    }


//O(sqrt(n))

}