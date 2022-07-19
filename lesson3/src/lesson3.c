//ders3
#include <stdio.h>
#include <stdlib.h>

int main() {
	/*
	int second,minute,hour;
	scanf("%d %d %d", &second, &minute, &hour);//virgüller önemli

	int hours_to_second = hour*3600;
	int minutes_to_second = minute*60;
	int total_seconds = hours_to_second+minutes_to_second+second;
	printf("toplam %d saniye", total_seconds);
	------------------------------------------------------------------------------------------
	char ch,ch2; //char veri tipi 1 bitlik karakterden oluşur; a, b, c, birer karakterdir
	scanf("%c %c",&ch,&ch2);//kullanıcıdan char verisi çekebilmek içimn %c kodu kullanılır
	printf("%d\n",ch-'A'+1);//ch değişkenine kullanıcı A değeri atar ise kod bloğu A dan A yı çıkaracak ve
	//daha sonra 1 int değeri ekleyecektir böylece ekrana 1 çıktısı verilir
	------------------------------------------------------------------------------------------
	char ch1,ch2,ch3;
	scanf("%c %c %c", &ch1, &ch2,&ch3);
	printf("%c", ch1+(ch2-ch3));//eğer kod bloğumuzu %c kodu ile çalıştırırsak karakterler ile
	//hesaplamalar yapacaktır
	------------------------------------------------------------------------------------------*/
	char a,b;
	scanf("%c %c",&a,&b);
	int result;
	result = (a-'1')*(b-'0');//karekterler ile bu şekilde int hesaplamalar yapabilmek mümkündür
	//'' noktalama işareti ile char tanımlaması yapılmaktadır
	//"" noktalama işaretiyle ise string tanımlaması yapılmaktadır ikisi karıştırılmamalıdır
	printf("%d \n",result);
	int result2 = (a-'0')+(b-'0');//bu kodlar çok sağlıklı çalışmamaktadır
	printf("a ile b nin toplamı = %d",result2);
	printf("%c",a+3);


	return EXIT_SUCCESS;
}
