#include <stdio.h>

void swap(int *a,int *b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

/*
    Sellection Sort
    O(N^2)
    Unstable
*/
void Sellection_sort(int N,int *array){
    int i,j;
    int min,minkey;
    for(i=0;i<N-1;i++){
        minkey=i;
        min=array[i];
        for(j=i+1;j<N;j++){
            if(min>array[j])    swap(&array[j],&array[minkey]);
        }
    }
}

/*
    Bubble Sort
    O(n^2)
    Stable
*/
void Bubble_sort(int N,int *array){
    int i,j;
    for(i=0;i<N;i++){
        for(j=N-1;j>=i;j--){
            if(array[j]<array[j-1])   swap(&array[j],&array[j-1]);
        }
    } 
}

/*
    Insertion Sort
    O(n^2)
    Stable
*/
/* void Insertion_sort(int N,int *array){
    int i,j;
    for(i=1;i<N;i++){
        for(j=0;j<i;j++){
            if(array[i]<array[j])   swap(&array[i],&array[j]);
        }
    }
}
*/

void Insertion_sort(int  N,int *array){
    int i,j;
    for(i=1;i<N;i++){
        j=i;
        while(j>0&&array[j]<array[j-1]){
            swap(&array[j],&array[j-1]);
            j--;
        }
    }
}

/*
    Quick Sort
    O(NlogN)
*/
void Quick_sort(int N,int *array){

}

int main(void){
    int array[]={3,26,4,1,5};
    //Bubble_sort(5,array);
    //Sellection_sort(5,array);
    Insertion_sort(5,array);
    for(int i=0;i<5;i++){
        printf("%d ",array[i]);
    }
}