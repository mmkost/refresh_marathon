#include<stdio.h>
int mx_strcmp(const char *s1, const char *s2);
int mx_binary_search(char **arr, int size, const char *s, int *count) {
    int min = 0;
    int max = size - 1;
    int mid = (max + min) / 2;
    while (min <= max) {
        mid = (max + min) / 2;
        (*count)++;
    	if (mx_strcmp(arr[mid], s) == 0) {
    		return mid;
        }
        else if (mx_strcmp(arr[mid], s) > 0) {
        	max = mid - 1;
        }
        else {
        	min = mid + 1;
        }
    }
    (*count) = 0;
    return -1;
}    
