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
*/
void Sellection_sort(int N,int *array){
    
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

void Insertion_sort(int N,int *array){

}

/*
    Quick Sort
    O(NlogN)
*/
void Quick_sort(int N,int *array){

}

int main(void){
    int array[]={4,8,11,3,2};
    Bubble_sort(5,array);
    for(int i=0;i<5;i++){
        printf("%d ",array[i]);
    }
}