#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size;
    vector<int> array;

    cin>>size;
    for (int i = 0; i < size; i++){
        int element;
        cin>>element;
        array.push_back(element);
    }

    sort(array.begin(), array.end());

    for (int i = 0; i < size; i++){
        cout<<array[i]<<" ";
    };

    return 0;
}
