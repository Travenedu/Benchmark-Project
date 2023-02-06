#include <iostream>
#include <vector>
#include <string>

#include <cmath>
#include <chrono>

using namespace std:: chrono;

int main(){
    
    int result = 0; 
    auto start = std::chrono::steady_clock::now();

    for (int i; i < 1010; i++){
        result += i;
    }

    for (int i; i < pow(5*10,9); i++){
        result *= i;
    }

    for (int i; i < pow(2*10,9); i++){
        result /= i;
    }

    auto end = std::chrono::steady_clock::now();

    std::chrono::duration<double> elapsed_seconds = end - start;

    
    std::cout << "Elapsed time: " << elapsed_seconds.count() << "s\n";

    return 0;
    
}