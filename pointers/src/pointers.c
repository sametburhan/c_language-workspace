//pointer
#include <stdio.h>
#include <stdlib.h>
/*
int main(void) {
	int* a;//bir pointer değişken
	int b,c;//normal değişken
	b = 22;
	a = &b;//a pointer değişkeni b ye indexlendi
	//bu sayede a da yapılan değişiklikler b değişkeni
	//üzerinden işleyecek
	*a = 12;//pointer a değişkeni artık b nin
	//bellekteki referans noktasını etkilemekte
	//böylece *a == b olmuş oluyor her ikisinin de
	//referans noktası aynı konumda bulunuyor
	printf("%d",b);
	int *p = &c;//c nin konumunu referans alan yeni bir pointer değişken

	int x[4];
		int i,*sum[4];
		for(i = 0; i < 4; ++i) {
		      scanf("%d",&x[i]);
		      sum[i] = &x[i];//tanımlama yaparken * kullanmıyoruz
		      //zira değişkeni diğer bir değişkenin
		      //bellekteki konumuna eşlitliyoruz
		      //daha sonra ise * kullanarak değişkenin konumdaki
		      //değerine ulaşabiliriz
		      *sum[i] = i;
		      printf("%d",*sum[i]);//printf kullanırken * yazmayı unutmamak
		      //gerekir yoksa doğrudan değişkenin adı bellekteki konumuna eştir
		}

	return EXIT_SUCCESS;
}
int main() {
    int  x[6] = {3, 4, 8, 1, 5, 2};
    int* i;
    i = &x;
    printf("x[0] = %d", *(i+3));//tanımlanan pointer sadece
    //x dizisine eşitlenmiş durumda olduğu için
    //üzerine 3 sayısını eklemek x[3] yani 1 değerini
    //elde etmeyi sağlar
    printf("\npointer %d",&x[1]);
    printf("\npointer %d",i+1);
	//görüldüğü üzere i nin referans noktası x arrayine indexlenmiş durumda
    //bellekteki konumları aynıdır
    return 0;
}
int main()
{
    int num1 = 5, num2 = 10;
    //adresli değerler
    swap( &num1, &num2);
    //adressiz pointer olarak tanımlanan değişkenlere sahip fonksiyona adresli değerler gönderilir

    printf("num1 = %d\n", num1);//ana değişkenlerin değerleri değiştiği için ekrana yeni tanımlanan değerler yazdırılır
    printf("num2 = %d", num2);
    return 0;
}

void swap(int* n1, int* n2)//tanımlanan adressiz değerlere alınan adresli değerlere eşitlenir
{
    int temp;
    temp = *n1;//temp = num1 => temp = 5
    *n1 = *n2;//num1 = num2 => num1 = 10
    *n2 = temp;//num2 = temp => num2 = 5
}
void addOne(int* ptr) {
  (*ptr)++;//i değişkenini referans aldı ve değişkene 1 değeri ekledi
}

int main()
{
  int* p, i = 10;
  p = &i;
  addOne(p);//zaten bir pointer olduğu için * işaretini kullanmadık

  printf("%d", *p);
  return 0;
}*/
//dynamic memory allocation //açıklamalar yazılacak daha eklenmedi
int main() {
//malloc()
ptr = (float*) malloc(100 * sizeof(float));
//calloc()
ptr = (float*) calloc(25, sizeof(float));
//free()
  int n, i, *ptr, sum = 0;

  printf("Enter number of elements: ");
  scanf("%d", &n);

  ptr = (int*) malloc(n * sizeof(int));

  // if memory cannot be allocated
  if(ptr == NULL) {
    printf("Error! memory not allocated.");
    exit(0);
  }

  printf("Enter elements: ");
  for(i = 0; i < n; ++i) {
    scanf("%d", ptr + i);
    sum += *(ptr + i);
  }

  printf("Sum = %d", sum);

  // deallocating the memory
  free(ptr);
//realloc()
  int *ptr, i , n1, n2;
    printf("Enter size: ");
    scanf("%d", &n1);

    ptr = (int*) malloc(n1 * sizeof(int));

    printf("Addresses of previously allocated memory:\n");
    for(i = 0; i < n1; ++i)
      printf("%pc\n",ptr + i);

    printf("\nEnter the new size: ");
    scanf("%d", &n2);

    // rellocating the memory
    ptr = realloc(ptr, n2 * sizeof(int));

    printf("Addresses of newly allocated memory:\n");
    for(i = 0; i < n2; ++i)
      printf("%pc\n", ptr + i);

    free(ptr);

  return 0;
}


