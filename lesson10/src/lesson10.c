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
}---------------------------------------------------------------//küçükten->büyüğe
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
}---------------------------------------------------------------//dönülecek
int main(){
	int r,c,i=0,j;//r = 2 c = 3
	scanf("%d %d",&r,&c);
	int array[c*r];
	for(i=0;i<c*r;i++){
		scanf("%d",&array[i]);//1 2 3 4 5 6
	}

	    for(j=0;j<r;j++){

	        if(j*c<c*r){
		        while(i<c+(c*j)){
		            printf("%d",array[i]);
		            i++;
		        }
	        }
		    printf("\n");
		}


	return 0;
}---------------------------------------------------------------
int main(){
	int r,c,i=0,j;//r = 2 c = 3
	scanf("%d %d",&r,&c);
	int array[r][c];
	for(i=0;i<r;i++){
	    for(j =0;j<c;j++){
		scanf("%d",&array[i][j]);}
	}

	    for(i=0;i<r;i++){


		        for(j = 0;j<c;j++){
		            printf("%d",array[i][j]);

		        }

		    printf("\n");
		}


	return 0;
}---------------------------------------------------------------
void define(int k,int l,int arr[k][l]){
	int i,j;
	for(i=0;i<k;i++){
		for(j=0;j<l;j++){
			scanf("%d",&arr[i][j]);
		}
	}
}
void prnt(int k,int l,int arr[k][l]){
	int i,j;
		for(i=0;i<k;i++){
			for(j=0;j<l;j++){
				printf("%d",arr[i][j]);
			}
			printf("\n");
			}
}

int main(){
	int k,l;
	scanf("%d %d", &k, &l);
	int arr[k][l];
	define(k,l,arr);
	prnt(k,l,arr);
	return 0;
}---------------------------------------------------------------
int main(void) {

	int N, M;

	scanf("%d %d", &N, &M);

	int firstArr[N][M], secondArr[N][M], sum[N][M];
    int i,j;
    printf("first array;\n");
	for(i=0;i<N;i++){
	    for(j=0;j<M;j++){
	        scanf("%d",&firstArr[i][j]);
	    }
	}
	printf("second array;\n");
	for(i=0;i<N;i++){
	    for(j=0;j<M;j++){

	        scanf("%d",&secondArr[i][j]);

	    }
	}
	printf("sum of them\n");
	for(i=0;i<N;i++){
	    for(j=0;j<M;j++){
	        printf("%d ",firstArr[i][j]+secondArr[i][j]);
	    }
	    printf("\n");
	}


	return 0;
}---------------------------------------------------------------*/
int main(void) {
	int i,j;
	int N;
	scanf("%d",&N);
	int array1[N][N];
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            scanf("%d",&array1[i][j]);
        }
    }int sum1=0;
    for(i=0;i<N;i++){
        sum1 +=array1[i][i];

    }printf("primary diagonal sum %d\n",sum1);
    int sum2=0;
    for(i=N-1;i>=0;i--){
        sum2 +=array1[i][i];

    }printf("secondary diagonal sum %d",sum2);

	return 0;
}

