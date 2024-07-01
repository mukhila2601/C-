#include<iostream>
using namespace std;

int main() {
    int i = 1;
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    while (i <= n) {
        int j = 1;
        int count = (i - 1) * n + 1; // Calculate the starting value for each row
        while (j <= n) {
            cout << count << " ";
            count = count + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
