#include<stdio.h>
double mx_pow(double n, unsigned int pow) {
    if( pow > 0) {
        return n * mx_pow(n, pow - 1);
    }
    else {
        return 1;
    }
}
