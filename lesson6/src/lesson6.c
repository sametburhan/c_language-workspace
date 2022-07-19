//ders 6
#include <stdio.h>
#include <stdlib.h>

int main(){
	/*
	int x;
	scanf("%d",&x);

	int even_sum=0;
	int digit_count=0;
	int last_digit;

	while(x>0){
		last_digit = x%10;
		x/=10;
		if(last_digit %2 == 0){
			even_sum+=last_digit;

		}
		digit_count++;
	}
	printf("%d %d",digit_count,even_sum);//nasıl çalışıyor?
	-------------------------------------------------
	int sum = 0;
		int x;
		scanf("%d", &x);
		while(x >= 0){
			if(x % 2 == 1){
				sum += x;
			}

			scanf("%d", &x);

		}

		printf("%d", sum);
	-------------------------------------------------
	int N = 22;
				int i, j,k=0,t=0;

			while(k<10){
				for(i = 1 ; i <= N ; i++){

					    for(j = 0 ; j < N-i ; j++){
						printf("-");
					}
					for(j = 0 ; j < i ; j++){
						printf("*");
					}
					for(j =0; j<i-1 ;j++){
					    printf("*");
					}
					for(j = 0 ; j < N-i ; j++){
						printf("-");

					}

					printf("\n");
				}
				for(i = 1 ; i <= N-1 ; i++){
					for(j = 0 ; j < i ; j++){
						printf("-");
					}
					for(j = 0 ; j < N-i ; j++){
						printf("*");
					}
					for(j =0;j<N-i-1; j++){
					    	printf("*");
					}
					for(j = 0 ; j < i ; j++){
						printf("-");
					}
					printf("\n");
				}

				k++;
			}
	-------------------------------------------------*/
	int a,b;//bir aralığın içindeki asal sayıları bulma kodu
	scanf("%d %d",&a,&b);
	for(int x = a;x<=b;x++){
		int isprime = 1;
		for(int i =2;i<x;i++){
			if(x%i==0){
				isprime = 0;
				break;
			}
		}
		if(x<2){
			isprime=0;
		}if(isprime==1){
			printf("%d",x);
		}//
	}

	return 0;
}
