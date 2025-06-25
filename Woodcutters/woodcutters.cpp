#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    int c = 2;

    if (n == 1) {
        c = 1;
    }
    else{
        for(int i = 1; i < n - 1; i++){
            if (a[i] - a[i - 1] > b[i]) {
                c++;
            }
            else if(a[i + 1] - a[i] > b[i]){
                a[i] += b[i];
                c++;
            }
        }
    }

    cout << c << endl;

    return 0;
}

