#include<bits/stdc++.h>
using namespace std;
void functionn(int count){
    if(count==3) return;
    count++;
    functionn(count);
    cout << count << endl;
}
int main(){
    int count=0;
    functionn(count);
}