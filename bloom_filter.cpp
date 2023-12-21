#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {9,11};
    int bloom[5]={0,0,0,0,0};
    int n = 16;
    int a,b,c,d;
    for(auto x: arr){
        a = x%5;
        b = (2*x+3)%5;
        bloom[a] = 1;
        bloom[b] = 1;
    }
    for(auto i: bloom){
        cout << i << " ";
    }
    cout << endl;
    c = n%5;
    d = (2*n+3)%5;
    if(bloom[c]==1 && bloom[d]==1){
        cout << "False Positive" << endl;
    }
    else{
        cout << "Negative" << endl;
    }
    return 0;
}
