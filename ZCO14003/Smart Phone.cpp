#include <algorithm>
#include <stdio.h>
#include <cmath>
#include <iostream>

using namespace std;

int main(){
     long long n, a[1000000], max;
     int i, j;
     cin>>n;

     for(i = 0; i < n; i++){
        cin>>a[i];
     }

     sort(a, a + n);
     max  = a[n - 1];
     for(i = n - 2; i >= 0; i--){
         //printf("%lld ", a[i]);
        if(max < (a[i] * (n - i)))
            max = a[i] * (n - i);
     }

     cout<<max<<endl;
     return 0;
} 
