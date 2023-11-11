//will the address output be same

#include <stdio.h>

void printAddress(int n);

int main() {
    int n = 5;
    printf("%u\n",&n); //%p se bhi hoga
    printAddress(n);

    return 0;
}

//call by value hai yeha, aur jab bhi call by value hoti hai toh 
//ek variable ki copy banegi aur is copy ka naam bhi n hoga lekin
//iska address alag hoga kyki purana address pe already toh ek variable hai

//agar yeha pe call by reference hota toh address same hota

void printAddress(int n) {
    printf("%u\n",&n); //%p se bhi hoga
}