#include<iostream>
int funcionFactorial(int num ){
    int factor=1;
 for (int i = 1; i <= num; i++) {
        factor *= i;
    }
    return factor;
}