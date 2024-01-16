#include <string.h>
#include <stdio.h>
#include <malloc.h>

int main(){
    char* string = "dan tekst v nem dannye";
    char* substring = "dannye";
    findSubstringMura(string, substring);
    return 0;
}

int findSubstringMura(char* string, char* substring) {
    int lenString = strlen(string);
    int lenSubstring = strlen(substring);
    int* tableMura = (int*)calloc(lenSubstring, sizeof(int));

    tableMura[lenSubstring - 1] = lenSubstring;

    
    for (int i = lenSubstring - 2; i >= 0; i--) {
        if (substring[i] == substring[i + 1]) {
            tableMura[i] = tableMura[i + 1];
            continue;
        }
        tableMura[i] = lenSubstring - i - 1;
    }
    // for (int i = 0; i < lenSubstring; i++) {
    //     printf("%d ", tableMura[i]);
    // }
    return -1;
}