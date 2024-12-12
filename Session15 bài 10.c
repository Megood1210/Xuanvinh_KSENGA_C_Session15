#include <stdio.h>
int main(){
    char text[] = "bcdca";
    int count,i, j;
    for(i=0;text[i] !='\0';i++){
        count = 1;
        if(text[i] != '\0') {
            for(j = i+1; text[j] != '\0';j++){
                if(text[i] == text[j]) {
                    count++;
                    text[j] = '\0';
                }
            }
            printf("%c: %d\n", text[i], count);
        }
    }
    return 0;
}

