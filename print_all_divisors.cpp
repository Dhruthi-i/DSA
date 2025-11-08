#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin >> num;

    //tc --> O(n)
    // for(int i =1;i<=num;i++){
    //     if(num%i == 0){
    //         cout << i <<endl;
    //     }
    // }

    vector<int> ls;
    for(int i=1;i*i<=num;i++){
        if(num%i==0){
            ls.emplace_back(i);
            // cout << i <<endl;
            if(num/i!=i){
                ls.emplace_back(num/i);
                // cout << num/i << endl;
            }
        }
    }
    sort(ls.begin(),ls.end());
    
    for(auto it :ls){
        cout << it << endl;
    }
}