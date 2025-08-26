#include <iostream>
int main()
{
    int arr[][4] = {
        {1, 2, 3, 4},
        {11, 2, 3, 4},
        {1, 2, 3, 4},
        {1, 2, 3, 4},

    } ;
    int (*p)[4] = arr;
    std::cout<<arr<<std::endl;  // address of 2d array (&arr[0])
    std::cout<<*arr<<std::endl; // address of first oneD array (arr[0])
    std::cout<<arr[0]<<std::endl; // address of first element of arr[0] (&arr[0][0])(arr[0])

    std::cout<<*(*arr)<<std::endl; // retrieving the first element of arr[0]
    std::cout<<arr[0][0]<<std::endl;
    std::cout<<arr[0][1]<<std::endl;
    std::cout<<arr[0]+1<<std::endl; // arr[0] returned address of first elemet of arr[0] and +1 gives second el addr
    std::cout<<*(arr[0]+1)<<std::endl; // arr[0][[1]
    std::cout<<*(*(arr+0)+1)<<std::endl; 
    std::cout<<arr[1][0]<<std::endl;
    std::cout<<*(*(arr+1))<<std::endl; // arr[1][0]
    return 0;
}