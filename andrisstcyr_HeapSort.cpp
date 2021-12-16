//Andris St. Cyr

#include <cstdlib>
#include <chrono>
#include <iostream>

using namespace std;

void heapify(int z[], int m, int n){
    int biggest = n;
    int l = 2*n + 1;
    int r = 2*n +2;
    
    if ((l < m) && (z[l] > z[biggest])){
        biggest = l;
    }
    
    if ((r < m) && z[r] > z[biggest]){
        biggest = r;
    }
    
    if (biggest != n){
        int temp = z[n];
        z[n] = z[biggest];
        z[biggest] = temp;
        
        heapify(z, m, biggest);
    }
}

void Heap(int z[], int m){
    for (int i = m / 2 - 1; i >= 0; i--){
        heapify(z, m, i);
    }
    
    for (int i = m - 1; i > 0; i--){
        int temp = z[0];
        z[0] = z[i];
        z[i] = temp;
        
        heapify(z, i, 0);
    }
}
int main(int argc, char** argv) {

    int A[1000];
    Heap(A, 1000);
    
    for(int j = 0; j <= 1000; j++){
        A[j] = rand() % 1000;
        A[j] = j;
    }
    
    for (int b = 0; b <= 1000; b++ ){
        cout<<A[b]<<" ";
    }
    
    return 0;
}

