
#include <iostream>

void print_array(int parr[],int size)
{
   for (int i = 0; i < size; i++)
    {
        std::cout << parr[i]<<"," ;
    }
    std::cout<<std::endl; 
}

int find_max(int arr[],int size)
{
    int max=arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
        
    }
    
    return max;
}

int main() {
    int max;
    int counter;
    int arr[20]={0};
    std::cout << "pleaze enter number of items: " ;
    std::cin>> counter;
    std::cout<<std::endl;
    for (int i = 0; i < counter; i++)
    {
       std::cout << "pleaze enter item no: " <<(i+1)<<": ";
       std::cin>> arr[i];
       std::cout<<std::endl;
    }
    max=find_max(arr,counter);
    std::cout << "the maximum element is : "<<max<<std::endl;
    print_array(arr,counter);
    return 0;
}

