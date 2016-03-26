#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <bitset>

using namespace std;

vector<bool> elements;

bool testAndSet(int i){
    if (elements[i]){
        return true;
    } else {
        elements[i] = true;
    }
    return false;
}

int main() {

    int n,s,p,q;
    unsigned const limit = static_cast<const unsigned int>(pow(2, 31));

    elements = vector<bool>(limit);
    int counter = 0;

    scanf("%d %d %d %d", &n, &s, &p, &q);

    unsigned long long int current;
    unsigned long long int previous;
    previous = s % limit;
    testAndSet((int) previous);
    counter++;
    for (int i = 1; i<n; i++){
        current = (previous * p + q) % limit;
        if (testAndSet((int) current)) {break;}
        counter++;
        previous = current;
    }

    cout<<counter;

    return 0;
}