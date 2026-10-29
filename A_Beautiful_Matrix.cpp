#include <bits/stdc++.h>

using namespace std;

void solve() {
    int x=0; int y=0; 
    int temp;
    
    int i=1;

    while (i<=5) {
        int j=1;
        while (j<=5) {
            if (cin>>temp; temp==1) {x=i; y=j;}
            j++;
        }
        i++;
    }
    
    int moves = 0;
    while (x<3) {x++; moves++;}
    while (x>3) {x--; moves++;}
    while (y<3) {y++; moves++;}
    while (y>3) {y--; moves++;}
    
    cout<<"\n"<<moves<<"\n";
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}