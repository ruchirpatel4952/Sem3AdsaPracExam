#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int sum_of_powers(int n){
        if (n == 0 || n == 1){
            return n;
        }

        else 
            int result = pow(sum_of_powers(n-1),n-1)+pow(sum_of_powers(n-2),n-2);
            return result;
    };
}