//Andris St. Cyr

#include <cstdlib>
#include <chrono>
#include <iostream>
#include "andrisstcyr_recursive.h"

using namespace std;

int main(int argc, char** argv) {

    int seed = (6308);
    srand(seed);
    int arr[1000]; 
    int key = rand() % 1000;
    int i;
    
    Insertion(arr,1000);
    Recursive(arr, 0, 1000, key);
    
    for(int j = 0; j <= 1000; j++){
        arr[j] = rand() % 1000;
        arr[j] = j;
    }
    
    i = arr[key];
    
    cout<<i<<'\n';
    
    return 0;
}

