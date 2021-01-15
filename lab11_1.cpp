#include<iostream>
using namespace std;

long long int fibonacci(int x);

int main(){

    cout << fibonacci(50);

    return 0; 

}

long long int fibonacci(int x){
    if(x>1){
        return fibonacci(x-1) + fibonacci(x-2);
    }else{
        return x;
    }
}
