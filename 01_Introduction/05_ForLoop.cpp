#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int from, to;
    cin >> from;
    cin >> to;

    for (int current = from; current <= to; current++){
        if(current == 1){
            cout << "one\n";
        }
        else if (current == 2){
            cout << "two\n";
        }
        else if (current == 3){
            cout << "three\n";
        }
        else if (current == 4){
            cout << "four\n";
        }
        else if (current == 5){
            cout << "five\n";
        }
        else if (current == 6){
            cout << "six\n";
        }
        else if (current == 7){
            cout << "seven\n";
        }
        else if (current == 8){
            cout << "eight\n";
        }
        else if (current == 9){
            cout << "nine\n";
        }
        else if (current%2 == 0){
            cout << "even\n";
        }
        else if (current%2 == 1){
            cout << "odd\n";
        }
    }

    return 0;
}
