//ders12
//struct yapısı
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/*
typedef struct{
	float x,y;
}point_t;

float calculate(float ax,float ay,float bx,float by){
	float distance;
	distance = sqrt(pow((ax-bx),2)+pow((ay-by),2));
	return distance;
}

int main(void) {
	point_t a,b;
	scanf("%f %f",&a.x,&a.y);//point A
	scanf("%f %f",&b.x,&b.y);//point B
	printf("%.2f",calculate(a.x,a.y,b.x,b.y));
	return EXIT_SUCCESS;
}-----------------------------------------------------//3d coordinate distance calculator
typedef struct{
	float x,y,z;
}point_t;

void calculate(int array[2][3]){
	int i,j;
	point_t a,b;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			if(i==0&&j==0){
				a.x = array[i][j];
			}else if(i==0&&j==1){
				a.y = array[i][j];
			}else if(i==0&&j==2){
				a.z = array[i][j];
			}else if(i==1&&j==0){
				b.x = array[i][j];
			}else if(i==1&&j==1){
				b.y = array[i][j];
			}else if(i==1&&j==2){
				b.z = array[i][j];
			}}
		printf("%f\n",sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2)+pow(a.z-b.z,2)));
	}
}

int main(){
	int i,j;
	int array[2][3];
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
		scanf("%d",&array[i][j]);
	}}
	calculate(array);
	return 0;
}-----------------------------------------------------//rectangular coordinate area calculator
typedef struct{
	int midterm;
	int final;
	int makeup;
}grade;

int main(void){
	grade midterm,final;
	scanf("%d %d",&midterm.midterm,&final.final);
	int mid = midterm.midterm,fin = final.final;
	if(mid*4/10+fin*6/10>80){
		printf("AA");
	}else if(mid*4/10+fin*6/10>70&&mid*4/10+fin*6/10<80){
		printf("BB");
	}else if(mid*4/10+fin*6/10>60&&mid*4/10+fin*6/10<70){
		printf("CC");
	}else if(mid*4/10+fin*6/10>50&&mid*4/10+fin*6/10<60){
		printf("DD");
	}else if(mid*4/10+fin*6/10<50){
		grade makeup;
		printf("FF, you have to give a make up exam\n");
		scanf("%d",&makeup.makeup);
		int mak = makeup.makeup;
		if(mid*4/10+mak*6/10>50){
			printf("you passed out");
		}else{
			printf("you didnt pass");
		}
	}
	return 0;
}-----------------------------------------------------
typedef struct{
    int student_id;
    float mt_grade;
    float final_grade;
    char letter_grade;
} Student;

void set_grade(Student *p){//structure p tanımı yapıldı ve her bir p;
	//array içerisinden gelen veriye indexlendi
	//yani p sırasıyla öğrencilerin midterm ve final puanları
    float score;
    score = p->mt_grade * 0.4 + p->final_grade * 0.6;//p içindeki midter ve finalile işlem yap ve score değişkenine tanımla
    //p.mt_grade = arrayden gelen p değeri ve 0.4 değeriyle çarpılarak tanımlandı
    //p.final_grade = arrayden gelen final puanı ve 0.6 değeri çarpılarak midterm değerine eklendi
    //sonuç score değişkenine atandı
    if(score > 75)
        p->letter_grade = 'A';
    else if(score > 50)
        p->letter_grade = 'B';
    else if(score > 25)
        p->letter_grade = 'C';
    else
        p->letter_grade = 'F';
}

int main(){
    int N;
    scanf("%d", &N);//öğrenci sayısı belirlendi
    Student cmpe[N];//N sayısı kadar uzunluğa sahip bir array structure tanımlandı
    int i;
    for(i=0; i < N; i++){//array structure içerisine veriler yazıldı
        scanf("%f %f", &cmpe[i].mt_grade, &cmpe[i].final_grade);//her bir öğrenciye index dahilinde veri atandı
        cmpe[i].student_id = 1000 + i;//her bir öğrenciye 1000 den itibaren id verildi
        set_grade(&cmpe[i]);//index dahilinde structure array verisi fonksiyona gönderildi
    }

    for(i = 0; i < N; i++)
        printf("%d %c\n", cmpe[i].student_id, cmpe[i].letter_grade);

    return 0;
}-----------------------------------------------------//test structure
typedef struct{
    int a;
    float b;
    char c;//string tanımlanamıyor!
}test;

void klm(test* test3){
    int k = test3->a+test3->a*2;//hangi koşullarda kullanılıyor?
    printf("\n%d",k);
}

int main(){
    test test1,test2[1];
    test1.a = 1;
    test1.b = 1.2;
    test1.c = 's';
    printf("%c",test1.c);
    test2[0].c = getchar();
    printf("%c",test2[0].c);
    //sadece strcat(test1.c,test2[0].c); string yapıda olan veri türlerinde çalışır
    int k = 12;
    test2[0].a = test1.a+k;
    printf("\n%d",test2[0].a);


    test test4;
    klm(&test4);

    test* test5;
    klm(test5);


    klm(&test1);//fonksiyon içerisine *'lı veri aktarırken & simgesini kullanıyoruz
    return 0;
}-----------------------------------------------------
struct book{
	int page;
	int price;
	char name[5];
};

void sort_books(struct book bArr[], int n){
	int i, j;

	for(i = 0 ; i < n ; i++){
		for(j = 0 ; j < n-1 ; j++){
			if(bArr[j].price > bArr[j+1].price){
				struct book temp = bArr[j];
				bArr[j] = bArr[j+1];
				bArr[j+1] = temp;
			}
		}
	}
}

int main() {
	int i, n;
	scanf("%d", &n);

	struct book bArr[n];
	for(i = 0 ; i < n ; i++)
		scanf("%d %s %d", &bArr[i].page, bArr[i].name, &bArr[i].price);

	sort_books(bArr, n);

	for(i = 0 ; i < n ; i++)
		printf("%s: %d pages (%d gold)\n", bArr[i].name, bArr[i].page, bArr[i].price);

	return 0;
}-----------------------------------------------------
typedef struct{
	int page;
	int price;
	char name[5];
}book;
int main(){
	int i,j;
	book books[2];
	for(i=0;i<3;i++){
		scanf("%d %d \n",&books[i].page,&books[i].price);
		fgets(books[i].name,5,stdin);
	}
	for(j=0;j<3;j++){
		printf("%d %d %s\n",books[j].page,books[j].price);
		puts(books[j].name);
	}
	return 0;
}-----------------------------------------------------*/
typedef struct rectangle{
    float edge1;
    float edge2;
}Rectangle;

// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE

Rectangle min_rectangle_area(Rectangle r[], int N){
    int i;
    float min_area;
    int ind;

    min_area = r[0].edge1*r[0].edge2;
    ind = 0;

    for(i = 1 ; i < N ; i++){
        if(r[i].edge1*r[i].edge2 < min_area){
            min_area = r[i].edge1*r[i].edge2;
            ind = i;
        }
    }

    return r[ind];
}

// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE

int main(){
    Rectangle r_min;
    int i;
    int N;
    Rectangle r[100];

    scanf("%d", &N);

    // Reads Rectangles
    for(i = 0 ; i < N ; i++)
        scanf("%f %f", &r[i].edge1, &r[i].edge2);//üçgenin uzun ve kısa kenarları tanımlanır

    r_min = min_rectangle_area(
    // DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE
    r, N
    // DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE
    );

    // Prints the area of the rectangle that has the smallest area
    printf("%.2f\n", r_min.edge1*r_min.edge2);//en küçük alana sahip dikdörtgenin kenarları ekrana yazılır

    return 0;
}

