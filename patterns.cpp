#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << "* "  ;
        }
        cout << endl;
    }
}

void pattern2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "* "  ;
        }
        cout << endl;
    }
}


void pattern3(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout <<  j+1  ;
        }
        cout << endl;
    }
}


void pattern4(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout <<  i+1  ;
        }
        cout << endl;
    }
}


void pattern5(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout << "* "  ;
        }
        cout << endl;
    }
}

void pattern6(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout << j+1  ;
        }
        cout << endl;
    }
}

void pattern7(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout << " "  ;
        }
        for(int j=0;j<i*2+1;j++){
            cout << "*"  ;
        }
        for(int j=0;j<n-i-1;j++){
            cout << " "  ;
        }
        cout << endl;
    }
}

void pattern8(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout << " "  ;
        }
        for(int j=0;j<(2*(n-i-1))+1;j++){
            cout << "*"  ;
        }
        for(int j=0;j<i;j++){
            cout << " "  ;
        }
        cout << endl;
    }
}

void pattern9(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout << " "  ;
        }
        for(int j=0;j<i*2+1;j++){
            cout << "*"  ;
        }
        for(int j=0;j<n-i-1;j++){
            cout << " "  ;
        }
        cout << endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout << " "  ;
        }
        for(int j=0;j<(2*(n-i-1))+1;j++){
            cout << "*"  ;
        }
        for(int j=0;j<i;j++){
            cout << " "  ;
        }
        cout << endl;
    }
}

void pattern10(int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout << "* "  ;
        }
        cout << endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout << "* "  ;
        }
        cout << endl;
    }
}

void pattern11(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(i%2==0 && j%2==0 || i%2!=0 && j%2!=0 ){
                cout << "1";
            }
            else{
                cout << "0";
            }
        }
        cout << endl;
    }
}

void pattern12(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout << j+1  ;
        }
        for(int j=0;j<n-(i*2)+2;j++){
            cout << " "  ;
        }
        for(int j=i+1;j>=1;j--){
            
            cout << j ;
        }
        cout << endl;
    }
}




int main(){
   int t;
   cin >> t;
   for(int i=0;i<t;i++){
    int n;
    cin >> n;
    pattern12(n);
   }
}
