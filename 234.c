#include <stdio.h>
#include <string.h>

int main(){
    char str[100], sub[50];
    printf("Enter main string: ");
    gets(str);
    printf("Enter substring: ");
    gets(sub);
    if(strstr(str, sub))
        printf("Substring found!\n");
    else
        printf("Not found!\n");
    return 0;
}
