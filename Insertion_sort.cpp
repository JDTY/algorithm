#include<iostream>
template<typename T>

//time complexity best:O(N) average:O(N^2) worst:O(N^2)
//Space complexity O(N)
//stable

void insertionSort(T obj[], long n)
{
    T key;
    int temp;

    for(int i=1;i < n; ++i)
    {
        key = obj[i];

        temp = i - 1;

        while(temp >= 0 && obj[temp] > key)
        {
            obj[temp+1] = obj[temp];
            --temp;
        }
        obj[temp+1] = key;

    }
}

int main()
{
    int a[10] = {9,3,8,6,7,1,4,5,0,2};
    insertionSort(a,10);
    for(auto i=std::begin(a);i!=std::end(a);++i)
    {
        std::cout<<*i<<std::endl;
    }
    return 0;
}
