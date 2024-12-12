#include <stdio.h>
#include <ctype.h> 
void capFirstChar(char *str) {
    if (str == NULL) {
        return;
    }
    int wordNew = 1;  
    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            wordNew = 1;
        } else if (wordNew&& isalpha(str[i])) {
            str[i] = toupper(str[i]);
            wordNew = 0; 
        } else {
            wordNew = 0;
        }
    }
}
int main() {
    char str[] = "hello world";   
    printf("Chuoi ban dau: %s\n", str);
    capFirstChar(str);    
    printf("Chuoi sau khi chuyen hoa: %s \n", str);

    return 0;
}

