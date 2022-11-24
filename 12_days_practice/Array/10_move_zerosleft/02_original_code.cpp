#include "bits/stdc++.h"
using namespace std;
void moveZerosToLeft(int *arr, int n) 
{
    // Defining the vector to store non-zero elements
    vector <int> storeNonZero;
    
    // Iterating the array and adding all non-zero values to vector
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] != 0) 
        {
            storeNonZero.push_back(arr[i]);
        }
    }

    // Iterating the vector from backwards and updating array values
    int i = n - 1;
    
    for (int j = storeNonZero.size() - 1; j >= 0; j--) 
    {
        arr[i] = storeNonZero[j];
        i--;
    }
    
    // Setting all the remaining array values to 0
    while (i >= 0) 
    {
        arr[i] = 0;
        i--;
    }
}
int main(){
    
    return 0;
}