#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int first;
    long second;
    long long third;
    char fourth;
    float fifth;
    double sixth;

    scanf("%d %ld %lld %c %f %lf", &first, &second, &third, &fourth, &fifth, &sixth);
    printf("%d\n%ld\n%lld\n%c\n%f\n%lf", first, second, third, fourth, fifth, sixth);

    return 0;
}
