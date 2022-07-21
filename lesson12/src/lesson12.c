//ders12
#include <stdio.h>
#include <string.h>
/*
int main() {
    int i,p=0;
    char a;
    scanf("%c \n",&a);
    char abc[100];
    fgets(abc, sizeof(abc), stdin);
    for(i=0;i<strlen(abc);i++){
        if(abc[i]==a){
            printf("%c\n",abc[i]);
            p++;
        }else
        puts("-");
    }printf("toplam %d tane %c karakteri vardır",p,a);
    return 0;

}----------------------------------------------------------
int main() {
//strncmp => değişkenlerin ascıı boyut kontrolünü yapar -0+ değerler alır

    char str1[15];
    char str2[15];
    int control;

    strcpy(str1, "abcdef");//ascii değerlerine göre
    strcpy(str2, "ABCDEF");//büyük harf < küçük harf
    //kontrolü yapılır
    control = strncmp(str1, str2, 4);

    if(control < 0) {
      printf("str1 is less than str2");
    } else if(control > 0) {
      printf("str2 is less than str1");
    } else if(control == 0){
      printf("str1 is equal to str2");
    }

//strcpy => değişkenlerin kopyalarını oluşturur
    char str_test1[] = "\ntest test\n";
    char str2_test2[strlen(str_test1)];
    strcpy(str2_test2,str_test1);
    puts(str2_test2);

//strcat => string değişken toplama
    char cat1[] = "test3 test3";
    char cat2[strlen(cat1)+strlen(str2_test2)];
    strcpy(cat2,str2_test2);
    strcat(cat2,cat1);//kod bloğu cat2 += cat1 şeklinde çalıştı
    puts(cat2);

    return 0;
}----------------------------------------------------------
void kontrol(char str[]){
	int i,j,a,b;
	for(j=0;j<128;j++){
	for(i=0;i<strlen(str);i++){
	    if(str[i]>j){
	        a = str[i];
	        b = i;
	    }
		}
	}printf("%c ifadesi = %d decimal değerindedir",str[b],a);
}

int main(void){
	int a;
	char str[a];
	scanf("%d\n",&a);// bu sebeple buraya aşağı geç komutu ekledim
	fgets(str,sizeof(str)-1,stdin);//bir alt satıra geçmiyor
	kontrol(str);
	return 0;
}----------------------------------------------------------
int main() {
	int R=4, C=4;
	int i, j, k, l;
	char arr[50][50] = {{0}}; // initialize the matrix with 0's

	for(i = 1 ; i <= R ; i++){
		scanf("%s", arr[i]+1); // read the input line by line and put it inside 0's
	}

	for(i = 0 ; i <= R+1 ; i++){
		for(j = 0 ; j <= C+1 ; j++){
			printf("%c", arr[i][j]); // or print with %d
		}
		printf("\n");
	}
	// resulting matrix -> now we don't have to check for borders.


	char starChar = '*';
	int starCharCounter = 0;

	for(i = 1 ; i <= R ; i++){
		for(j = 1 ; j <= C ; j++){
			if(arr[i][j] >= 'a' && arr[i][j] <= 'z'){
				int starCounter = 0;
				for(k = -1 ; k <= 1 ; k++){
					for(l = -1 ; l <= 1 ; l++){
						if(arr[i+k][j+l] == '*'){
							starCounter++;
						}
					}
				}
				if(starCounter == starCharCounter && arr[i][j] < starChar){
					starChar = arr[i][j];
					starCharCounter = starCounter;
				}
				if(starCounter > starCharCounter){
					starChar = arr[i][j];
					starCharCounter = starCounter;
				}
			}
		}
	}

	printf("%c %d", starChar, starCharCounter);

	return 0;
}----------------------------------------------------------*/
int main() {
    int i,j;
    char arr[9][15];
    for(i=0;i<8;i++){
        for(j=0;j<14;j++){
            if(i>0 && i<7 && j>1 && j<12){

                arr[i][j] = 'x';

            }
            else {
                arr[i][j] = '0';
                }
            printf("%c",arr[i][j]);
        }printf("\n");
    }
    return 0;
}

