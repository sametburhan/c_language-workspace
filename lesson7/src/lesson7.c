//ders 7 FONSİYONLAR
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
int main(void) {
	int satir_sayisi;
	scanf("%d", &satir_sayisi);
	piramit(satir_sayisi);
	return 0;
}

void piramit(int satir_sayisi){
    int N = 1;
	int baslangic_degeri=0;
	int bosluk_tekrar = satir_sayisi-1;
	for(int i=0;i<satir_sayisi;i++){

	    for(int j = bosluk_tekrar-1;j>=0;j-=1){
	        printf(" ");

	    }
	    for(int k = 0;k<i+1;k++){
	       printf("a");
	    }
	    for(int k = 0;k<i;k++){
	       printf("a");
	    }
	    for(int j = bosluk_tekrar-1;j>=0;j-=1){
	        printf(" ");
	    }
	    bosluk_tekrar--;
	    printf("\n");
	}
}------------------------------------------------------------------------------------
int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	printf("%d", en_kucuk_deger(a, b, c));

	return 0;
}
int en_kucuk_deger(int a,int b,int c){
	int minimum_deger;
	if(a>=b && c>=b){
		minimum_deger = b;
	}else if(b>=a && c>=a){
		minimum_deger = b;
	}else if(a>=c && b>=c){
		minimum_deger = c;
	}else{
		printf("hatalı değer");
		minimum_deger = 0;
	}

	return minimum_deger;
}------------------------------------------------------------------------------------
char to_upper(char c){
	if(c >= 'a' && c <= 'z')//fonksiyona gelen harf kontrol edildi
	return c + ('A'-'a');//burda ne oldu????
	return c;//tanımlı karakter main bloğuna geri gönderildi
}

int main() {
	char c;

	scanf("%c", &c);//harf kullanıcıdan alındı

	while(c != '\n'){
		printf("%c", to_upper(c));//tanımlanan harf fonksiyona gönderildi
		scanf("%c", &c);
	}

	return 0;
}------------------------------------------------------------------------------------
int ters_sayi(int sayi){
    int gecici_sayi = 0;
    while(sayi>0){
        gecici_sayi = 10*gecici_sayi + (sayi%10);
        sayi /=10;//kendisinden küçük sayılarala yapılan bölme işlemlerinde sonuç doğrudan 0 a yuvarlanır
    }
    return gecici_sayi;
}

int main() {
	int x;

	scanf("%d", &x);

	printf("%d", ters_sayi(x));

	return 0;
}------------------------------------------------------------------------------------
int carpanlar(int sayi){
	for(int i = 1 ; i < sayi ; i++){//i değerini 1 den başlattık çünkü sayımız 0 a bölünemez belirsizlik oluşturur
		//referan 38 sayımızı kodumuza yerleştirdik
			if(sayi % i == 0){//kontrol bloğunda sayımıza bölümünden 0 kalan i değerleri ekrana yazdırdık
				printf("%d ",i);//ekrana yazdıran print kodumuz
			}
		}
}

int main(){
	int sayi;
	scanf("%d",&sayi);//referans sayımız 38
	printf("%d",carpanlar(sayi));//print bloğu burda sadece fonksiyon çağırmaktadır

	return 0;
}------------------------------------------------------------------------------------
int main(){
	int deger;
	scanf("%d",&deger);
	if(asal(deger)==0){
		printf("asal değilr");
	}else if(asal(deger)){//doğrudan 1 değeri olduğu için true dönecektir
		printf("asaldır");
	}
	return 0;
}
int asal(int deger){
	int asal_mi = 1;
	if(deger<2){
		asal_mi=0;
	}for(int i = 2;i<deger;i++){
		if(deger%i==0){
			asal_mi= 0;//neden?
		}
	}
	return asal_mi;

}------------------------------------------------------------------------------------//basamak toplama
    int main() {
    int x;
	scanf("%d",&x);

	int digit_count=0;


	for(int i = x;i>0;){
	    i/=10;
		digit_count++;
	}
    int kalan = 0;
	for(int j = digit_count-1;j>=0;j--){
	    int bolum = pow(10,j);//10^3 = 1000 100 10 1

	    if(x!=0){
	       int sayi1 = x/bolum;
	       kalan += sayi1;
	       x = x-(sayi1*bolum);

	    }
	}printf("%d\n",kalan);

    return 0;

}------------------------------------------------------------------------------------//binary number
long int to_binary(int x){
    int binary = 0;
   int mult = 1;

	for(int i = x;i>0;){//ilk değerde i = 12 ikinci değerde i = 6 üçüncü değerde i=3 dördüncü değerde i = 1
	    binary += mult*(i%2);//1*12%2 = 0 / 10*6%2 = 0 / 100*1=100 / 1000*i%2=1000
	    mult*=10;//1*10 = 10 / 10*10 = 100 / 100*10=1000 / 1000*10=10000
		i/=2;//12/2 = 6 / 6/2 = 3 / 3/2 = 1 / 1/2=0 kod bloğu burada sonlanır
	}

    return binary;
}
int main() {
	int x;//referans sayı 12
	scanf("%d", &x);
	printf("%ld", to_binary(x));
	return 0;
}------------------------------------------------------------------------------------
int fibonacci(int x){
    int first = 1;
    int second = 1;
    int result = 0;
	for(int i = x-4;i>=0;i--){
	    if(first == 1 && second == 1){
	        printf("%d %d ",first, second);
	    }
	    result = first+second;
	    printf("%d ",result);
	    second = first;
	    first = result;
	}
}

int main() {
	int x;

	scanf("%d", &x);

	printf("%d", fibonacci(x));

	return 0;
}------------------------------------------------------------------------------------
int main()
{
    int value = 25;
    int *pointer = &value;
    printf("%ld\n", pointer);  // long int
}------------------------------------------------------------------------------------*///zor bir örnek tekrar edilebilir
int is_prime(int x){
	int i;
	int isPrime = 1;
	if(x < 2)
		isPrime = 0;
	for(i = 2 ; i < x ; i++){
		if(x % i == 0){
			isPrime = 0;
			break;
		}
	}
	return isPrime;
}

void prime_sum(int x){
	for(int i = 2 ; i <= x/2 ; i++){
		if(is_prime(i) && is_prime(x-i)){
			printf("%d %d\n", i, x-i);
		}
	}
}

int main() {
	int x;
	scanf("%d", &x);
	prime_sum(x);
	return 0;
}



