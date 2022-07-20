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


	int a,b,c;//finding roots
	    scanf("%d %d %d",&a,&b,&c);
	    int delta = b*b-4*a*c;
	    int root1,root2;
	    root1 = ((-b)+(sqrt(delta)))/(2*a);
	    root1 = ((-b)-(sqrt(delta)))/(2*a);
	    if(delta<0){
	        printf("u have imaginary roots");
	    }else if(delta==0){
	        printf("u have a root, which one is %d",root1);
	    }else{
	        printf("u have double roots and these are %d and %d",root1,root2);
	    }

	    int k, l, m, n;
	     k = 15;
	     l = 10;
	     m = ++k - l; //k sadece işlem süresince değişti kalıcı bir durum olmadı
	     printf("k = %d l = %d m = %d\n",k, l, m);
	     n = l++ +k; //l kalıcı olarak arttı
	    printf("k = %d l = %d m = %d n = %d\n",k, l,m, n);

	return 0;//main bloğunun bitiş kodu
}
