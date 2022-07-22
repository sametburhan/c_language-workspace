//extra ufak notlar bulunmakta compile edilebilir durumda değil
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
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
/*
int main() {
   FILE *f = fopen("new.txt", "r");
   int c = getc(f);
   while (c != EOF) {//EOF end of file
      putchar(c);
      c = getc(f);
   }
   if (feof(f))
	   printf("\n Reached to the end of file.");
   else
	   printf("\n Failure.");

   fclose(f);
   getchar();

   return 0;
}------------------------------------------------------------
//structures
struct Person {
  // code
};

int main() {
  struct Person person1, person2, p[20];//struct bu şekilde tanımlanabilir
  return 0;
}

// and

struct Person {
   // code
} person1, person2, p[20];//ancak yaygın tanımlama şekli bu şekildedir

//-----------------------------------------

#include <stdio.h>
#include <string.h>

// create struct with person1 variable
struct Person {
  char name[50];
  int citNo;
  float salary;
} person1;

int main() {

  // assign value to name of person1
  strcpy(person1.name, "George Orwell");

  // assign values to other person1 variables
  person1.citNo = 1984;
  person1. salary = 2500;

  // print struct variables
  printf("Name: %s\n", person1.name);
  printf("Citizenship No.: %d\n", person1.citNo);
  printf("Salary: %.2f", person1.salary);

  return 0;
}
//-----------------------------------------
//struct tanımlarken daha temiz bir kod yapısına sahip olmak için
//typedef kodu kullanılır

struct Distance{
  int feet;
  float inch;
};

int main() {
  struct Distance d1, d2;
}

//and

typedef struct Distance {
  int feet;
  float inch;
} distances;

int main() {
  distances d1, d2;
}

//and

struct Distance {
	int feet;
	float inch;
} d1, d2;
//-----------------------------------------
//iç içe structure
struct complex {
  int imag;
  float real;
};

struct number {
  struct complex comp;
  int integers;
} num1, num2;
------------------------------------------------------------
//getchar ve kontrol bloğu
//while ((getchar()) != '\n');
int main () {
   char c;

   printf("Enter character: ");
   c = getchar();//karakter almayı sağlıyor

   while ((getchar()) != '\n');{//kod bloğunun tek seferlik çalışmasını sağlıyor
   printf("Character entered: ");
   putchar(c);//karakter yazdırmayı sağlıyor
   }
   while(getchar()){//bir girdi aldığı anda çalışıyor
	   printf("efdsf");
   }

   return(0);
}
------------------------------------------------------------*/
//fgets(str,sizeof(str)-1,stdin);
//string değişkenleri almak için kullanılır
//çok önemlidir!!!!!!
int main(){
	char abc[20];
	fgets(abc,sizeof(abc)-1,stdin);
	printf(abc);
}
