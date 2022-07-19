//ders 5
#include <stdio.h>
#include <stdlib.h>

int main() {
	/*
	char c;
		scanf("%c", &c);

		if(c >= 'a' && c <= 'z'){
			printf("%c", c+('A'-'a'));
		}
		else if(c >= 'A' && c <= 'Z'){//&& ve, || veya
			printf("%c", c+('a'-'A'));
		}
		else if(c >= '0' && c <= '9'){
			printf("%d", 2*(c-'0'));
		}
		else{
			printf("asdfasdf");
		}
	-----------------------------------------------------
	int column,row;
	scanf("%d %d",&column,&row);
	int t=0,k=0;

	while(t<row-1){
		while(k<column){
			printf("*");
		    k++;
		}
		printf("\n");
		t++;
	}//neden çalışmıyor??
	-----------------------------------------------------
	int p,s;
	int a,b;
	scanf("%d %d",&a,&b);
	for(p = 0; p < a; p++){
		for(s = 0;s<b;s++){
					printf("*");
				}
				printf("\n");
	}
	-----------------------------------------------------*/
	int a, b;
		scanf("%d %d", &a, &b);
		int result = 1;

		int i;
		for(i = 0 ; i < b ; i++){
			result *= a;
			printf("%d",result);//doğrudan printf(result) şeklinde yazılamaz
			//değişken türü de %d ile belirtilmelidir
		}



	return 0;
}
