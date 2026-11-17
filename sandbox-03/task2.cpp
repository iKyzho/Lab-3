#include <cstdint>
#include <iostream>

void swap_ptr(int* x, int* y) {
    int t = *x;
    *x = *y;
    *y = t;
}
void sort3(int* a, int* b, int* c) {
    if (*a > *b) {
        swap_ptr(a, b);
    }
    if (*b > *c) {
        swap_ptr(b, c);
    }
    if (*a > *b) {
        swap_ptr(a, b);
    }
}
int main() {
    int x = 3, y = 1, z = 2;
    sort3(&x, &y, &z);
    std::cout << x << ' ' << y << ' ' << z << '\n';

    int a = 9, b = 9, c = 1;
    sort3(&a, &b, &c);
    std::cout << a << ' ' << b << ' ' << c << '\n';
}
