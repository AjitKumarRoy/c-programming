//Strings 
//agar character array ke end mei null character(\0) laga de toh usiko hum String kehte hai....


#include <stdio.h>

int main() {
    char name[] = {'A','J','I','T','\0'}; 
    // ye bhi string hai kyuki iske end mei null character hai

    char namem[] = "Ajit"; 
    //agar hum aise initialise karenge toh isme C compiler null 
    //character automatically daal deta hai

    char college[] = "Apna College"; // null character compiler add karega

    return 0;
}