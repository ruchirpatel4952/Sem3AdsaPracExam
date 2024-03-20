#include<iostream>
#include<math.h>

using namespace std;
int sum_of_powers(int n){
    int result;
        if (n == 0 || n == 1){
            return n;
        }

        else{ 
            int result = pow(sum_of_powers(n-1),n-1)+pow(sum_of_powers(n-2),n-2);
            return result;
        }
    };
int main(){
    int n = 5;
    cout<<sum_of_powers(n)<<endl;
}