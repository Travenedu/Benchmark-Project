#include <iostream>
#include <vector>
#include <string>

#include <cmath>
#include <chrono>

using namespace std:: chrono;

int main(){
    
    //Initializing variables
    int x;
    

    //starting timer
    auto start = std::chrono::steady_clock::now();

    //Memory Operation
    int array[5000000000] = { 0 };
    for (int i; i < pow(5*10, 9); i++){
        array[i] = i;
        x = array[i];
    }

    //End timer
    auto end = std::chrono::steady_clock::now();

    //Compute duration of benchmark
    std::chrono::duration<double> elapsed_seconds = end - start;

    //Print results of benchmark    
    std::cout << "Elapsed time: " << elapsed_seconds.count() << "s\n";

    return 0;
    
}