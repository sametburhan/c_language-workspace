//ders 1
#include <stdio.h>//temel c kodları için çağırılması gereken kütüphaneler
#include <stdlib.h>

int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	//the printf() function is used to print both strings and variables to the screen
	//while the puts() function only permits you to print a string only to your screen.
	int i = 0;
	printf("Hello World!\n");
	i+=2;
	printf("1) i = %d \n",i);//%d virgülden sonraki değeri string içinde gösterir
	i*=3;//değişken matematiksel işlem = sayı şeklimnde olan yapılar sayıyı değişken ile o işleme sokar ve
	//artık değişkenin değeri yeni atanmış sayı olur
	printf("2) i = %d \n",i);
	int k = 3;
	k -= 2;
	printf("değişkene işlem uyguladık %d",k);//printf içerisine yazılabilen %d kodu puts komutunda çalışmamaktadır.
	//printf puts koduna göre daha kullanışlıdır.


	return 0;//main bloğunun bitiş kodu
}
