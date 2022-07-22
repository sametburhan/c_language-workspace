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
	float x,y;
}point_location;

void area_calculate(float ax,float ay,float bx,float by,float cx,float cy,float dx,float dy){
	float A = ax*by-ay*bx,B,C,D;
	B = bx*cy-by*cx;
	C = cx*dy-cy*dx;
	D = dx*ay-dy*ax;
	printf("%.2f",sqrt(pow(A+B+C+D,2))/2);
}

int main(){
	point_location a,b,c,d;
	scanf("%f %f",&a.x,&a.y);//a
	scanf("%f %f",&b.x,&b.y);//b
	scanf("%f %f",&c.x,&c.y);//c
	scanf("%f %f",&d.x,&d.y);//d
	area_calculate(a.x,a.y,b.x,b.y,c.x,c.y,d.x,d.y);
	return 0;
}-----------------------------------------------------//detaylar
//int *fn(void);
//int fn(long, short);
//int (*fp)(void);
//int **ptr;

//p_Sensor0->value = 99;
//void Sensor_Init(Sensor* const me) {}
//void Sensor_setUpdateFrequency(Sensor* const me, int p_updateFrequency);
//Sensor * Sensor_Create(void);
//typedef struct Sensor Sensor;
//struct Sensor {
//int filterFrequency;
//int updateFrequency;
//int value;}

//typedef struct Queue Queue;
//struct Queue {
//int buffer[QUEUE_SIZE];
//int head;
//int size;
//int tail;
//int (*isFull)(Queue* const me);
//int (*isEmpty)(Queue* const me);
//int (*getSize)(Queue* const me);
//void (*insert)(Queue* const me, int k);
//int (*remove)(Queue* const me);};

//------------------------------------------------------------
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
}-----------------------------------------------------*/
typedef struct{
    int student_id;
    float mt_grade;
    float final_grade;
    char letter_grade;
} Student;

void set_grade(Student *p){
    float score;
    score = p->mt_grade * 0.4 + p->final_grade * 0.6;

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
    scanf("%d", &N);
    Student cmpe[N];
    int i;
    for(i=0; i < N; i++){
        scanf("%f %f", &cmpe[i].mt_grade, &cmpe[i].final_grade);
        cmpe[i].student_id = 1000 + i;
        // Call set grade function
        set_grade(&cmpe[i]);
    }

    for(i = 0; i < N; i++)
        printf("%d %c\n", cmpe[i].student_id, cmpe[i].letter_grade);

    return 0;
}
