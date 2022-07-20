//ders9
#include <stdio.h>
#include <stdlib.h>
//diziler
/*
int main() {
    int k,i;
    scanf("%d",&k);
    int arr[k];
    for(i=0;i<k;i++)
    {
        scanf("%d",&arr[i]);
    }for(i=0;i<k;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}------------------------------------------------------------
int main(){
	int t,i,arr[18];//mümkün olduğunca i'leri dışarda tanımla daha düzenli çalışacaktır
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&arr[i]);
	}
	printf("%d\n",arr[2]);//array 01234...
	float sum = 0,avg,var =0;
	for(i=0;i<t;i++){
		sum+=arr[i];//total value
	}
	avg = sum/t;
	for(i=0;i<t;i++){
		var+=(arr[i]-avg)*(arr[i]-avg);
		var/=t;
	}
	printf("%.0f %.2f %.2f",sum,avg,var);

	return 0;
}------------------------------------------------------------
int main(){
	int i;
	char arr[51],c;
	int s_len = 0;
	scanf("%c",&c);
	while(c!='\n'){
		arr[s_len]=c;
		s_len++;
		scanf("%c",&c);
	}
	for(i=0;i<s_len;i++){
		arr[i]=arr[i]+1;
	}for(i=0;i<s_len;i++){
		printf("%c",arr[i]);
	}for(i=0;s_len>i;i++){
		arr[i]= arr[i]-1;

	}for(i=0;i<s_len;i++){
		printf("%c",arr[i]);
	}
	return 0;
}------------------------------------------------------------
int main(){
	int k,i;
	scanf("%d",&k);
	int arr[k];
	for(i=0;i<k;i++){
		scanf("%d",&arr[i]);
	}
	int p = 0;
	while(p<k){
	for(i=0;i<k;i++){
		printf("%d ",arr[i]);

	}
	printf("\n");
	    p++;
	}

	return 0;//
}------------------------------------------------------------
#include <stdio.h>

int main(){
	int k,i;
	scanf("%d",&k);
	int arr1[k];
	int arr2[k];
	for(i=0;i<=k-1;i++){
		scanf("%d",&arr1[i]);
		arr2[k-i-1]=arr1[i];
	}

	int p = 0;
	while(p<k){
	    if(p%2==0){
	for(i=0;i<k;i++){
		printf("%d ",arr2[i]);
    } }
    if(p%2==1){
	for(i=0;i<k;i++){
		printf("%d ",arr1[i]);
    }
	}
	printf("\n");
	    p++;
	}

	return 0;//
}------------------------------------------------------------
int main(){
	int abc[3],i;//array listler bu şekilde tanımlanabilir
	for(i=0;i<3;i++){
		abc[i]=i+1;
		printf("%d",abc[i]);
	}

	return 0;
}------------------------------------------------------------
int main(){
	int k =15,i;

	int arr1[k];
	int arr2[k];
	for(i=0;i<=k-1;i++){
		arr1[i]=i+1;
		arr2[k-i-1]=arr1[i];
	}

	int p = 0;
	while(p<k){
	    if(p%2==0){
	for(i=0;i<k;i++){
		printf("%d ",arr2[i]);
    } }
    if(p%2==1){
	for(i=0;i<k;i++){
		printf("%d ",arr1[i]);
    }
	}
	printf("\n");
	    p++;
	}

	return 0;//
}------------------------------------------------------------
int main()
{
	int i;
    int array1[101];
    for(i= 0;i<101;i++){
        array1[i] = i+1;
    }
	int array2[101] = {0};
	int k=0;
	for(i=0;i<101;i++){
	    if(array1[i]%2==0){
	    array2[i]=array1[i];
	    k++;

	}printf("%d ",array2[i]);
	}

    printf("\n%d tane çift sayı var",k);

    return 0;
    //int array[10]={2}; başlangıç değerine 2 sayısını ekler
    //10 karakterli bir dizi olduğuğu içi geri kalan 9 karakter 0 dır
}------------------------------------------------------------
int main() {
	int N, i;

	scanf("%d ", &N);

	int arr[N];

	for(i = 0 ; i < N ; i++){
		scanf("%d", &arr[i]);
    }
	for(i = 0 ; i < N ; i++){
		if(arr[i]+arr[i]==arr[i+1])
		printf("%d. değer %d. değerin 2 katıdır",i+1,i);
	}

	return 0;
}------------------------------------------------------------*///küçükten->büyüğe
int main() {
	int A,i,j;

	scanf("%d", &A);

	int arr[A];

	for(i = 0 ; i < A ; i++){
		scanf("%d", &arr[i]);
    }

	for(i = 0 ; i < A ; i++){
		for(j = 0 ; j < A-1 ; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];//önbelleğe alınıyor
				arr[j] = arr[j+1];//yer değiştiriliyor
				arr[j+1] = temp;//ön bellekteki sonraki değere aktarılıyor
			}
		}
	}

	for(i = 0; i < A; i++){
		printf("%d ", arr[i]);
}
	return 0;
}

