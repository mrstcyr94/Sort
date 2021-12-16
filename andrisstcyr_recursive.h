//Andris St.Cyr

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

int Recursive(int z[], int low, int high, int x){
    int mid = (low + high) / 2;
    
    if(low > high){
        return -1;
    }
    
    else if(high > low){
    if(z[mid] < x){
        return Recursive(z, mid + 1, high, x);
    }
        
    else if(z[mid] > x){
        return Recursive(z, low, mid - 1, x);
    }
        
    else if(z[mid] == x){
        return mid;
    }
 }
}


