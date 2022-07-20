//ders8
#include <stdio.h>
#include <stdlib.h>
/*
void alter(int *x,char c){//bu zamana kadar hep int fonksiyon tanımladık
	//void ise değişken türünden bağımsız çalışır bütün değişkenler ile işlem yapmak
	//mümkündür int fonksiyonda ise sadece sayı türünde değişkenler atanabilir
	//yıldızlı değişkenlere değer atamsı yapabilir eğer yapmasak da fonksiyonumuz
	//kod bloğuna bağlı olarak sorunsuz çalışacaktır
	if(c=='i'){
		(*x)++;
	}
	else if(c == 'd'){
		(*x)--;
	}
	else if(c=='s'){
		*x = *x * *x;
	}
}


int main() {
	int x;
	char c;
	scanf("%d %c",&x,&c);

	alter(
	&x, c//neden x in bir işareti var
	);
	printf("%d and %c",x,c);

	return 0;
}---------------------------------------------------------------
void divideWith(int num,int div,int *result,int *remainder){
	//yıldız değişkenlere değer atamadan da fonksiyonu kullanmamızı sağlıyor
	*result = num/div;
	*remainder = num%div;
}

int main(){
	int n,d,result,remainder;
	scanf("%d %d",&n,&d);
	divideWith(
	n,d,&result,&remainder
	);
	printf("%d %d",result,remainder);
	return 0;
}---------------------------------------------------------------
void sums(int a,int b,int *sum)
{
	*sum = a+b;
}

void powered(int sum,int a,int b,int *p1,int *p2){
	*p1 = 1;
	*p2 = 2;
	int i;
	for(i = 0;i<a;i++){
		*p1 *=sum;
	}
	for(i=0;i<b;i++){
		*p2 *= sum;
	}
}
int main(){
int a,b;
scanf("%d %d",&a,&b);
int sum;
sums(a,b,&sum);//fonksiyonlardaki yıldızlı değişkenlere
//değer ataması yapılırken and işareti kullanılır
printf("%d\n",sum);
int sum_p1,sum_p2;
powered(sum,a,b,&sum_p1,&sum_p2);
printf("%d %d",sum_p1,sum_p2);
return 0;
}---------------------------------------------------------------
void poww(int a,int p,int *res){
	*res = a;
	int i;
	for(i=1;i<p;i++){
		*res = *res * a;
	}
}

void complex(float a,float b,int p,float *re,float *im){
	*re = a;
	*im = b;

	int i;
	for(i=1;i<p;i++){
		float temp_re,temp_im;
		temp_re = a* *re - b * *im;
		temp_im = a* *im+b * *re;

		*re = temp_re;
		*im = temp_im;

	}
}
int main(){
	float a,b;
	int p;
	int res;
	scanf("%f %f %d",&a,&b,&p);

	float re,im;
	complex(a,b,p,&re,&im);
	printf("%.2f %.2f\n",re,im);
	poww(a,p,&res);
	printf("%d",res);

	return 0;
}---------------------------------------------------------------*///clearly poww
void pow(int a,int b){
	int k = a;
	for(int i=b-2;i>=0;i--){
		a*=k;
	}
	//void fonksiyon olduğu için return kodu çalışmaz
	printf("%d",a);
}
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	pow(a,b);//void fonksiyonlar doğrudan çağırılabilirler
	//int fonksiyonlar doğrudan çağırılamazlar çünkü değişken
	//döndürürler ve değişkenler doğrudan ekrana yazdırılamaz
	//bunun için şöyle bir örnek verebiliriz
	//int abc fonksiyonumuz 18 sayısını return ediyor
	//eğer main fonksiyonunda bu değeri çağırmak istesek bunu abc(x,y,z);
	//şeklinde yapamayız çünkü bir void fonksiyonu değil
	//ancak bir int degişkeni tanımlar ve bu fonksiyonu ona eşitlersek
	//değerimizi main fonksiyonunda kolaylıkla kullanabiliriz
	//int degisken = abc(x,y,z);
}

