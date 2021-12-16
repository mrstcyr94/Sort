//Andris St. Cyr

#include <cstdlib>
#include <chrono>
#include <iostream>

using namespace std;

void Bubble(int z[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if (z[j] > z[j+1]){
              int temp = z[j];
              z[j] = z[j+1];
              z[j+1] = temp;
            }
        }
    }
}
int main(int argc, char** argv) {

    int A[1000000];
    Bubble(A,1000000);
    
    for(int j = 0; j <= 1000000; j++){
        A[j] = rand() % 1000000;
        A[j] = j;
    }
    
    for (int b = 0; b <= 1000000; b++ ){
        cout<<A[b]<<" ";
    }
    
    return 0;
}

