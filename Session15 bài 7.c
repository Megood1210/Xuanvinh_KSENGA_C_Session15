#include<stdio.h>
int main(){
	char text[100]="test123@gmail.com";
	int countCharacterText =0;
	int countCharacterNumber=0;
	int countCharacterSpecial=0;
	int size= strlen(text); 
	for(int i=0;i<size;i++){
		if(text[i]>='a' && text[i]<='z' || text[i]>='A' && text[i]<='Z'){
			countCharacterText++;
		}else if(text[i]>= '0' && text[i]< '9'){
			countCharacterNumber++;
		}else{
			countCharacterSpecial++;
		}
	}
	printf("So ky tu la chu cai trong chuoi: %d\n",countCharacterText);
	printf("So ky tu la chu so trong chuoi: %d\n",countCharacterNumber);
	printf("So ky tu dac biet trong chuoi: %d\n",countCharacterSpecial);
	return 0;
}
