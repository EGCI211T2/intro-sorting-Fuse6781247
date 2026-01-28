#include <iostream>
#include <iomanip>

void swap(int &a,int &b);
void bubblesort(int *a,int N);
void display(int *a,int N);
void selectionsort(int *a, int N);

void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void bubblesort(int *a, int N){
    int i, j; 
    int sorted;
    for(i = 0; i < N-1; i++){
        sorted=0;
        /*For ascending order*/
        for(j = 0; j < N-1-i; j++){
            if(a[j] > a[j+1]){
                swap(a[j], a[j+1]);
                sorted=1;
            }
        }
    }
    display(a,N);
    if(sorted == 0){
        return;
    }
}
void display (int *a, int N){
    for(int i =0; i<N; i++){
        cout << a[i] << " ";
    }
    cout <<endl;
}


void selectionsort(int *a, int N){
    int i;
    int min;
    int mi;
    int j;
    for(j=0; j<N-1; j++){
        min=a[j];
        mi=j;
    for(i=0 + j; i<N; i++)
        if(min >a[i]){
            min = a[i];
            mi = i;
        }

         swap(a[j], a[mi]);
    }
    
}
