//Andris St. Cyr

#include <cstdlib>
#include <chrono>
#include <iostream>

using namespace std;

int partition(int z[], int small, int big){
    int pivot = z[big];
    int i = (small - 1);
    
    for(int k = small; k <= big - 1; k++){
        if (z[k] < pivot){
            i++;
            int temp = z[i];
            z[i] = z[k];
            z[k] = temp;
        }
    }
    int temp = z[i + 1];
    z[i + 1] = z[big];
    z[big] = temp;
    return (i + 1);
}

void Quick(int z[], int small, int big){
    if (small < big){
        int a = partition(z, small, big);
        Quick(z, small, a - 1);
        Quick(z, a + 1, big);
    }
}
int main(int argc, char** argv) {

    int A[1000];
    Quick(A,0,1000);
    
    for(int j = 0; j <= 1000; j++){
        A[j] = rand() % 1000;
        A[j] = j;
    }
    
    for (int b = 0; b <= 1000; b++ ){
        cout<<A[b]<<" ";
    }
    
    return 0;
}

