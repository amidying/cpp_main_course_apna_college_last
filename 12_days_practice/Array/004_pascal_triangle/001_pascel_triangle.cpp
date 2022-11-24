#include"bits/stdc++.h"
#include<vector>
using namespace std;

long long int calPascal(long long int i, long long int j) {
    if (j == 0 || j == i) {
        return 1;
    } else {
        return calPascal(i - 1, j - 1) + calPascal(i - 1, j);
    }
}

vector < vector < long long int >> printPascal(int n) {
    vector < vector < long long int >> triangle;
    for (int i = 0; i < n; i++) {
        vector < long long int > temp;
        for (int j = 0; j <= i; j++) {
            temp.push_back(calPascal((long long int) i, (long long int) j));
        }
        triangle.push_back(temp);
    }
    return triangle;
}
