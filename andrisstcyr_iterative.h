//Andris St. Cyr

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

int Iteration(int z[], int low, int high, int x){
    
    
    while(low < high){
    int mid = (low + high) / 2;
    
    if(z[mid] < x){
        low = mid +1 ;
    }
        
    else if(z[mid] > x){
        high = mid - 1;
    }
        
    else if(z[mid] == x){
        return mid;
    }
 }
    return -1;
}

