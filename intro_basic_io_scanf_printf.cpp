#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// g++ intro_basic_io_scanf_printf.cpp -o intro_basic_io_scanf_printf.out
// echo 3 12345678912345 a 334.23 14049.30493 | ./intro_basic_io_scanf_printf.out
// input:
// 3 12345678912345 a 334.23 14049.30493

int main() {
    int d;
    long ld;
    char c;
    float f;
    double lf;
    scanf("%d %ld %c %f %lf", &d, &ld, &c, &f, &lf);
    printf("%d\n%ld\n%c\n%f\n%lf\n", d, ld, c, f, lf);
    return 0;
}
