#include <iostream>

void findMinMax(int *arr, int N, int *min, int *max){//function to find the minimum and maximum values in the array3
    *min=arr[0];
    *max=arr[0];

    for (int i=0; i<N; i++){
        if (arr[i]>*max){
            *max=arr[i];
        }
        if (arr[i]<*min){
            *min=arr[i];
        }
    }
    std::cout << "The minimum value is:" << *min << std::endl;
    std::cout << "Address : " << min << std::endl;
    std::cout << "The maximum value is:" << *max << std::endl;
    std::cout << "Address : " << max << std::endl;
}