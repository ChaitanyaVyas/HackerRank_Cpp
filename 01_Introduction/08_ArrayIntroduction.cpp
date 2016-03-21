#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int array_size = 0;
    scanf("%d",&array_size);

    int arr[array_size];

    for (int i = 0; i < array_size; i++){
        scanf("%d", &arr[i]);
    }

    for (int i = array_size-1; i >= 0; i--){
        printf("%d ", arr[i]);
    }

    return 0;
}
