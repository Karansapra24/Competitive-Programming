/* Read input from STDIN. Print your output to STDOUT*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char *a[])
{
    int n;
    cin >> n;
    if((n & (n - 1))) {
    int po = ceil(log(n)/log(2));
    cout << pow(2, po);
    } else {
        cout << n;
    }
}