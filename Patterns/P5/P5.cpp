#include <bits/stdc++.h>
using namespace std;

void pattern(int N) {
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= (N + 1) - i; j++){
            cout << "* ";
        }
        cout << "\n";
    }
}

int main() {
    int n;
    cin >> n;
    
    pattern(n);
    
    return 0;
}