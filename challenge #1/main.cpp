#include <iostream>
#include "array.cpp"

int main(){
    int N, max, min;
    int *arr = new int[N];

    std::cout << "How many numbers do you want to enter?" << std::endl;
    std::cin >> N;
    
    for (int i=0; i<N; i++){ //loop to allow users input N numbers into the array
        std::cout << "Enter the numbers: " << std::endl;
        std::cin >> arr[i];
    }

    findMinMax(arr, N, &min, &max);

    delete[] arr;
    return 0;
}
