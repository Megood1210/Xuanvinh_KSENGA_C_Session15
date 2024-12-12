#include <stdio.h>
int main() {
    char text[] = "hello world,o";  
    char deleteChar;              
    printf("nhap ki tu muon xoa: ");
    scanf("%c", &deleteChar);  
    int size = strlen(text);  
    int i, j = 0;
    for(i = 0; i < size; i++) {
        if(text[i] != deleteChar) {  
            text[j++] = text[i];  
        }
    }
    text[j] = '\0';  
    printf("chuoi sau khi xoa: %s", text);
    return 0;
}

