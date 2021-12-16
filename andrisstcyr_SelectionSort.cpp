//Andris St. Cyr

#include <cstdlib>
#include <chrono>
#include <iostream>

using namespace std;

void Selection(int x[], int n){
    for (int i = 0; i < n-1; i++){
        int min = i;
        for (int j = i+1; j < n; j++){
            if (x[j] < x[min]){
                min = j;
            }
            int temp = x[i];
            x[i] = x[min];
            x[min] = temp;
        }
    }
}
int main(int argc, char** argv) {

    int A[1000]; 
    Selection(A,1000);
    
    for(int j = 0; j <= 1000; j++){
        A[j] = rand() % 1000;
        A[j] = j;
    }
    
    for (int b = 0; b <= 1000; b++ ){
        cout<<A[b]<<" ";
    }
    
    return 0;
}