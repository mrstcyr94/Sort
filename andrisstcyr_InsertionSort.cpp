///Andris St. Cyr

#include <cstdlib>
#include <chrono>
#include <iostream>

using namespace std;

void Insertion(int z[], int n){
    for(int i = 0; i < n; i++){
        int space = z[i];
        int j = i - 1;
        
        while ((j > 0) && (z[j] > space)){
            z[j + 1] = z[j];
            j = j - 1;
        }
        z[j+1] = space;
    }
}
int main(int argc, char** argv) {

    int A[1000];
    Insertion(A, 1000);
    
    for(int j = 0; j <= 1000; j++){
        A[j] = rand() % 1000;
        A[j] = j;
    }
    
    for (int b = 0; b <= 1000; b++ ){
        cout<<A[b]<<" ";
    }
    
    return 0;
}

