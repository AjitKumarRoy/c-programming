//Standard Library function
//strcmp(firstStr, secStr) --> compare two strings and return a value;
//0 --> String equal;
//positive --> first > sec (ASCII);
//negative --> first < sec (ASCII);


#include <stdio.h>
#include <string.h>

int main() {
    char firstString[] = "Apple";
    char secString[] = "Danana";

    printf("%d\n",strcmp(firstString,secString));
    //print hoga -1,
    //kyuki 'A' ka ASCII value hai 65 and 'B' ka ASCII value hai 66 
    //aur A-B hone se -1 print hua.

    printf("%d\n",strcmp(secString,firstString));
    //yeha B-A hoga, isiliye print hoga 1 ; (66-65 = 1);

    return 0;
}