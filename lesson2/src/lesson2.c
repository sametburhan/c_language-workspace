//ders 2
#include <stdio.h>
#include <stdlib.h>

int main() {
	/*
	puts("3 sayı giriniz;");//scanf kod bloğunun daha önce çalıştırılmasından dolayı
	//string ifade daha sonra ekrana yazılmaktadır.

	int n1,n2,n3;//önceden tanımlanan int değişkenler
	scanf("%d %d %d",&n1,&n2,&n3);//kullanıcıdan int veri alabilmek için scanf komutu kullanılır
	//bu komut ek olarak %d ve & kodlarını kullanmaktadır.
	printf("girdiğiniz sayıların çarpımı = %d",n1*n2*n3);
	 * ------------------------------------------------------------------------------------------
	int r1,r2;
	int perimeter,area;
	scanf("%d %d",&r1,&r2);

	perimeter = 2*(r1+r2);
	area = r1*r2;
	printf("perimeter = %d \narea = %d", perimeter, area);
	* ------------------------------------------------------------------------------------------
	float r;
	scanf("%f",&r);//int değerler için %d kodu float değerler için ise %f kodu kullanılır
	printf("%f %f",2*3.14*r,3.14*r*r);
	* ------------------------------------------------------------------------------------------
	int n1,n2,n3;
	scanf("%d %d %d",&n1,&n2,&n3);
	float average;
	average = (n1+n2+n3)/3.0;
	printf("%f",average);
	printf("%.2f",average);//%.2f virgülden sonra 2 basamak gösterilmesini sağlar
	* ------------------------------------------------------------------------------------------*/
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c); //int değerler olduğu için %d
	printf("%d",a*(a%2)+b*(b%2)+c*(c%2));//a%2, a sayısının 2 ye bölümünden kaç kalır


	return 0;
}
