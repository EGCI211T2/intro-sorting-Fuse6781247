#include <iostream>
#include <iomanip>

void swap(int &a,int &b);
void sort(int *a,int N);
void display(int *a,int N);

void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void sort(int *a, int N){
    int i, j; 

    for(i = 0; i < N-1; i++){
        /*For ascending order*/
        for(j = 0; j < N-1-i; j++){
            if(a[j] > a[j+1]){
                swap(a[j], a[j+1]);
            }
        }
    }
}
void display (int *a, int N){
    for(int i =0; i<N; i++){
        cout << a[i] << " ";
    }
    cout <<endl;
}
