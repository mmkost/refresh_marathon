#include<stdio.h>
int mx_strlen(const char *s) {
    int i = 0;
    while(s[i] != '\0') {
        i++;
    }
    return i;
}
unsigned long mx_pow(double n, int pow) {
    if( pow > 0) {
        return n * mx_pow(n, pow - 1);
    }
    else {
        return 1;
    }
}
int char_to_int(char hex) {
    if(hex >= 'A' && hex <= 'F') {
        return hex - 55;
    }
    else if( hex >= 'a' && hex <= 'f') {
        return hex - 87;
    }
    else 
        return hex - '0';
}
unsigned long mx_hex_to_nbr(const char *hex) {
    long res = 0;
    for(int i = 0; i < mx_strlen(hex); i++) {
        res += char_to_int(hex[i]) * mx_pow(16, mx_strlen(hex) - i - 1);
    }
    return res;
}
  
