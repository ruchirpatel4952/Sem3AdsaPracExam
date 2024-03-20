#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int sum_of_powers(int n){
        if (n == 0 || n == 1){
            return n;
        }

        else 
            result = result+ pow (n, n);
            return result = result +sum_of_powers(n-1);
    };
}