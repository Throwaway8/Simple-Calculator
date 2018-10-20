//
//  assn1.cpp
//  assn1
//
//  Created by Thomas on 2018-09-20.
//  Copyright © 2018 Thomas. All rights reserved.
//

#include <iostream>


void selectionSort(double arr[], int sz) {
    for (int x = 0; x < sz - 1; x++) {
        int min = x;
        for (int y = x + 1; y < sz; y++) {
            if (arr[y] < arr[min]) min = y;
        }
        if (min != x) {
            double temp = arr[min];
            arr[min] = arr[x];
            arr[x] = temp;
            
        }
    }
}

double calcAverage(char * values[], int sz)
{
    
    double sum = 0, average = 0;
    double *arr = nullptr;
    arr = new double[sz];
    
    for (int x = 2; x < sz; x++)
    {
        arr[x] = atof(values[x]);
    }
    
    for (int x = 2; x < sz; x++)
    {
        sum += arr[x];
    }
    average = sum / (sz-2);
    std::cout << "Average" << std::endl;
    for (int x = 2; x < sz; x++)
    {
        std::cout << arr[x] << " ";
    }
    
    std::cout << std::endl << average << std::endl;
    return average;
}

double calcMedian(char * values[], int sz)
{
    double median = 0;
    double *arr = nullptr;
    arr = new double[sz];
    
    for (int x = 2; x < sz; x++)
    {
        arr[x] = atof(values[x]);
    }
    
    selectionSort(arr, sz);
  
    
    if (sz % 2 == 0)
    {
        median = *(arr + ((sz/2))) + *(arr + ((sz/2)+1));
        median = median / 2;
    }
    if (sz % 2 == 1)
    {
        median = *(arr + ((sz/2)+1));
    }
    
    std::cout << "median" << std::endl;
    for (int x = 2; x < sz; x++)
    {
        std::cout << arr[x] << " ";
    }
    std::cout << std::endl;
    std::cout << median << std::endl;
    return median;
}

double calcSum(char * values[])
{
    double sum = 0;
    double *arr = nullptr;
    arr = new double[3];
    
    for (int x = 2; x < 5; x++)
    {
        arr[x] = atof(values[x]);
    }
    for (int x = 2; x < 5; x++)
    {
        sum += arr[x];
    }
    std::cout << "Sum" << std::endl;
    for (int x = 2; x < 5; x++)
    {
        std::cout << arr[x] << " ";
    }
    std::cout << std::endl;
    std::cout << sum << std::endl;
    return sum;
}

int main(int argc, char * argv[]) {
    
    switch (*argv[1])
    {
        case 'A':
        case 'a':
            calcAverage(argv, argc);
            break;
        case 'M':
        case 'm':
            calcMedian(argv, argc);
            break;
        case 'F':
        case 'f':
            calcSum(argv);
            break;
        default:
            break;
            
    }
   
    
    
   

    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
