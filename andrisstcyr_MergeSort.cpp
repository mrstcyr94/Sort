//Andris St. Cyr

#include <cstdlib>
#include <chrono>
#include <iostream>

using namespace std;

void Merge(int z[], int l, int b, int r){
    int n1 = b - l + 1;
    int n2 = r - b;
    
    int L[n1];
    int R[n2];
    
    for(int i = 0; i < n1; i++){
        L[i] = z[l + i];
    }
    
    for(int j = 0; j < n2; j++){
        R[j] = z[b + 1 + j];
    }
    
    int i = 0;
    int j = 0;
    int k = l;
    
    while((i < n1) && (j < n2)){
        if (L[i] <= R[j]){
            z[k] = L[i];
            i++;
        }
        else {
            z[k] = R[j];
            j++;
        }
        k++;
    }
    
    while(i < n1){
        z[k] = L[i];
        i++;
        k++;
    }
    
    while(j < n2){
        z[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int z[], int l, int r){
    if (l < r){
        int b = l + (r - l) / 2;
        mergeSort(z, l, b);
        mergeSort(z, b + 1, r);
        Merge(z, l, b, r);
    }
}
int main(int argc, char** argv) {

    int A[1000];
    mergeSort(A, 0, 1000 - 1);
    
    for(int j = 0; j <= 1000; j++){
        A[j] = rand() % 1000;
        A[j] = j;
    }
    
    for (int b = 0; b <= 1000; b++ ){
        cout<<A[b]<<" ";
    }
    
    return 0;
}

