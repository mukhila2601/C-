#include<iostream>
using namespace std;

int main() {
    int i = 2;

    int n;
    cout<<"enter a number :"<<endl;
    cin >> n;

    while(i<n) {
        
        if(n%i==0) {
            cout<< " Not prime for "<< i << endl;
        }
        else{
            cout<<" Prime for "<< i <<endl;
        }
        i = i + 1;
    }

}