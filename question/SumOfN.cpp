// #include<iostream>
// using namespace std;

// int main() {

//     int n;
//     cin >> n;

//     int i = 1;
//     int sum = 0;

//     while(i<=n) {
//         sum = sum + i;
//         i = i + 1;
//     }

//     cout<< "value of sum is "<<sum<<endl;
//     return 0;

// }


#include<iostream>
using namespace std;

int main() {

    int i = 1;
    int sum = 0;
    int n;
    cout<<"enter a number"<<endl;
    cin >> n;
    

    while(i<=n) {
        sum = sum + i;
        i = i + 1;
    }

    cout<< "value of sum is "<<sum<<endl;
    return 0;

}