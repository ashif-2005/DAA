#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[4][5] = {{0,0,3,0,4},{0,0,5,0,7},{0,0,0,0,0},{0,2,6,0,0}};
    vector<int> row;
    vector<int> column;
    vector<int> value;
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            if(arr[i][j]!=0){
                row.push_back(i);
                column.push_back(j);
                value.push_back(arr[i][j]);
            }
        }
    }
    for(auto x: row){
        cout << x << "  ";
    }
    cout << endl;
    for(auto y: column){
        cout << y << "  ";
    }
    cout << endl;
    for(auto z: value){
        cout << z << "  ";
    }
    cout << endl;
    return 0;
}
