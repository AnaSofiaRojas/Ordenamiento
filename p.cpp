#include <iostream>
#include<stdlib.h>
#include <vector>
#include "p.h" 
using namespace std;

template<typename T>
void Imprimirvector(vector<T> arr, int n)
{
    for (size_t i = 0; i < arr.size() && i<n; i++)
    {
        cout<<arr[i]<<",";
    }
    cout<< endl;
    

}

int main()
{
    int count=100;
    vector<int> arr_1;
    for (size_t i = 0; i < count; i++)
    {
        arr_1.push_back((int)rand()%100+1);    
    }
 
    cout<<"Vector sin ordenar"<<endl;

    Imprimirvector(arr_1,100);
    cout<<"__________________"<<endl;

   
    SelectionSort<int> selsort;
    selsort.sort(arr_1);
    cout<<"Ordenamiento Selection"<<endl;
    Imprimirvector(arr_1,100);
    cout<<"__________________"<<endl;


    BubbleSort<int> bubble;
    bubble.sort(arr_1);
    cout<<"Ordenamiento Bubble: "<<endl;
    Imprimirvector(arr_1,100);
 
    cout<<"__________________"<<endl;

  
    InsertionSort<int> insetion;
    insetion.sort(arr_1);
    cout<<"Ordenamiento Insertion: "<<endl;
    Imprimirvector(arr_1,100);

    cout<<"__________________"<<endl;


    MergeSort<int> merge;
    int arr_size = sizeof(arr_1) / sizeof(arr_1[0]);
    merge.mergeSort(arr_1, 0, arr_size - 1);
    cout<<"Ordenamiento Merge: "<<endl;
    Imprimirvector(arr_1,100);

    cout<<"__________________"<<endl;


    



    return 0;
}

