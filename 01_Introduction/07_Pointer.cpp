#include <stdio.h>

void update(int *a,int *b) {
    int a_origin = *a;
    int b_origin = *b;
    *a = a_origin + b_origin;
    *b = a_origin - b_origin;
    *b = *b < 0 ? -*b : *b;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
