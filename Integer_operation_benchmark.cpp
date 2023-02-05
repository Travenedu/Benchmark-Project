#include <iostream>
#include <vector>
#include <string>

#include <chrono>

using namespace std;

int main(){
    
    int result; 

    for (int i; i < 1010; i++){
        result += i;
    }

    for (int i; i < 1010; i++){
        result *= i;
    }

    for (int i; i < 1010; i++){
        result /= i;
    }

    return 0;
    
}