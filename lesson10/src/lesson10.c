//ders10
#include <stdio.h>
#include <stdlib.h>

/*
	int main(void) {

		int N, X;
		int i, j;

		scanf("%d %d",&N, &X);

		int arr[N];

		for(i = 0; i < N; i++)
		{
			scanf("%d",&arr[i]);
		}

		for(i = 0; i < N-1; i++)
		{
			for(j = i+1; j < N; j++)
			{
				if(arr[i] + arr[j] == X)//farklı indexlerdeki dizi değerleri toplamı
					//sonradan girmiş olduğumuz sayı değerine esitse o indexlerdeki
					//sayı değerleri ekrana yazıdırılır
					printf("%d %d\n", arr[i], arr[j]);
			}
		}
		return 0;
}---------------------------------------------------------------//daha sonra dönülcek
int main(){//çift sayıları gösterme ve dizi içerisinden silme
    int k,i,j;
    scanf("%d",&k);
    int array[k];
    for(i=0;i<k;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<k;i++){
        for(j=0;j<k;j++){
            if(array[j]==array[i]){
                for()
            }
        }
    }
    return 0;
}---------------------------------------------------------------*///küçükten->büyüğe
int main(void) {
	int N, i, j;
	scanf("%d",&N);
	int arr[N];
	for(i = 0; i < N; i++){
		scanf("%d", &arr[i]);}
	for(i = 0; i < N-1; i++)//6 sayı 2 3 4 1 5 3
		//i = 0 dan 4 e kadar
	{
		for(j = i+1; j < N; j++)//i = 0 değerinde
			//j = 1 2 3 4 5 değerlerini alır
		{
			if(arr[i] > arr[j])
				int temp;
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
		}
	}
	for(i = 0; i < N; i++)
		printf("%d ", arr[i]);



	return 0;
}







