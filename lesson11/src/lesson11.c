//ders11
#include <stdio.h>
#include <stdlib.h>
#include <string.h>//string fonksiyon kütüphanesi
/*
//string yapısı
int main(void) {
	char c[] = "c string";//string yapılar birer karaktere sahip olduğundan dolayı char
	//kodu ile tanımlanırlar
	printf("%s",c);//%s string kodu tanımlamasıdır
	char name[20];//boşluksuz 19 karakterli bir string tanımlaması
	//string tanımlamalarında son karakter her zaman \0 kodu ile bitmektedir
	//bu sebeple string değişken n-1 tane karaktere sahip olacaktır
	//scanf ile alınan girdilerdeki boşluklar ve sonrası string değişkenlere tanımlanamamaktadır
	printf("Enter name: ");
	scanf("%s", name);
    printf("Your name is %s.", name);
    char c[5] = "abcde";//bu string değişkeninde abcd ve \0 ile birlikte toplam 6 karakter vardır
    //hatalı bir tanımlamadır


    printf("Enter name: ");

    fgets(name, sizeof(name), stdin);  // read string--------------------------------

    printf("Name: ");
    puts(name);    // display only string


	return EXIT_SUCCESS;
}-----------------------------------------------------------------------------
int main(void){//strcmp; string ifadelerin farklı olup olmadığını kontrol eder
	char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd";
	  int result;

	  // comparing strings str1 and str2
	  result = strcmp(str1, str2);// farklı 1
	  printf("strcmp(str1, str2) = %d\n", result);

	  // comparing strings str1 and str3
	  result = strcmp(str1, str3);// aynı 0
	  printf("strcmp(str1, str3) = %d\n", result);
	return 0;
}-----------------------------------------------------------------------------
//The strlen() function calculates the length of a given string.
int main(void){//strcmp; string ifadelerin farklı olup olmadığını kontrol eder
	char str1[] = "abcd", str2[] = "1234567", str3[] = "9874342";
	  //printf("%d",strlen(str1));//bitiş kodu olan \0 dahil etmez
	  printf("%d",sizeof(str3));//bitiş kodunu dahil ederek uzunluk ölçer
	  //ayrıca %zu kodu ile veri tiplerinin bellekteki kapladığı alan ölçülebilir
	return 0;
}-----------------------------------------------------------------------------//ne işe yaradığını anlamadım
void normalizeString(char s[]){
	if(s[strlen(s)-2] == '\r' || s[strlen(s)-2] == '\n')
		s[strlen(s)-2] = '\0';
	else if(s[strlen(s)-1] == '\r' || s[strlen(s)-1] == '\n')
		s[strlen(s)-1] = '\0';
}

int main()
{
	int i;
	char sent[100], word[100];
	fgets(sent,100,stdin);
	fgets(word,100,stdin);

	// This part ensures that strings do not have \n or \r at the end before \0.
	normalizeString(sent);
	normalizeString(word);

	for(i = 0 ; i < strlen(sent) ; i++){
		if(strncmp(sent+i, word, strlen(word)) == 0){
			char temp[100];
			strcpy(temp, sent+i+strlen(word)+1);
			strcpy(sent+i, temp);
			break;
		}
	}

	puts(sent);

	return 0;
}-----------------------------------------------------------------------------
void main()// \r
{

	printf("This Is \r Amarendra Deo");

	//This Is
    //  Amarendra Deo
    //şeklinde çıktı verir

    return 0;
}-----------------------------------------------------------------------------
void print_screen(char sent[]){
    int i;
    char array[strlen(sent)];
    for(i = 0;i<strlen(sent);i++){
        array[i] = sent[i];
    }
    for(i = 0;i<strlen(sent);i++){
        printf("%c\n",array[i]);
    }

}

int main(){

	char sent[100];


	fgets(sent, 100, stdin);
	print_screen(sent);

    return 0;
}-----------------------------------------------------------------------------*/
void normalizeString(char s[]){
    if(s[strlen(s)-2] == '\r' || s[strlen(s)-2] == '\n')
        s[strlen(s)-2] = '\0';
    else if(s[strlen(s)-1] == '\r' || s[strlen(s)-1] == '\n')
        s[strlen(s)-1] = '\0';
}

int main()
{
    int n;
    char sentence[1001], word[21];

    fgets(sentence, 1000, stdin);
    scanf("%d %s", &n, word);

    normalizeString(sentence);
    normalizeString(word);

    int i;
    int spaceCtr = 1;
    for(i = 0 ; spaceCtr < n && i < strlen(sentence) ; i++){
        if(sentence[i] == ' ')
            spaceCtr++;
    }

    // last word
    if(spaceCtr < n){
        sentence[strlen(sentence)+1] = '\0';
        sentence[strlen(sentence)] = ' ';
        strcat(sentence, word);
    }
    else{
        char temp[1000] = "";
        strcpy(temp, sentence+i);
        strcpy(sentence+i, word);
        sentence[strlen(sentence)+1] = '\0';
        sentence[strlen(sentence)] = ' ';
        strcat(sentence, temp);
    }

    printf("%s Cool", sentence);

    return 0;
}





