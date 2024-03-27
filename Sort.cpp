#include "Sort.h"
#include<iostream>

using namespace std;


void Sort::insertion_sort(int arr[], int size) 
{
    	int numofcomp=1;
      	for(int i=1; i<size; i++)
        {
                int key = arr[i];
                int j = i-1;
                while(j>=0 && arr[j] >key)
                {
                        arr[j+1] = arr[j];
                        j = j-1;
			numofcomp++;
                }
                arr[j+1] = key;

       	}
	cout << "Number Of Comparision: " << numofcomp<< endl;	
}

void Sort::merge(int arr[], int left, int mid, int right)
{
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int *leftArray = new int[n1];
    int *rightArray = new int[n2];

    
    for (i = 0; i < n1; i++)
        leftArray[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        rightArray[j] = arr[mid + 1 + j];

    i = 0;
    j = 0;
    k = left;

    while (i < n1 && j < n2)
    {   
        numofcomMerge+=1;
        if (leftArray[i] <= rightArray[j])
        {
            arr[k] = leftArray[i];
            i++;
        }
        else
        {
            arr[k] = rightArray[j];
            j++;
        }
        k++;
    }

    
    while (i < n1)
    {
        arr[k] = leftArray[i];
        i++;
        k++;
    }

    
    while (j < n2)
    {
        arr[k] = rightArray[j];
        j++;
        k++;
    }

}



void Sort::merge_sort(int arr[], int left, int right)
{ 
        if (left < right)
    {
        int mid = (left +right) / 2;
        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int Sort::partition(int arr[], int p, int r)
{
    int key;
    key = arr[r];
    int i = p-1;

    for(int j=p ; j<r-1; j++)
    {
        if(arr[j]<=key)
        {
            i=i+1;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[r]);
    return i+1;
}

void Sort::quick_sort(int arr[], int p, int r)
{
    if(p<r)
    {
        int q = partition(arr,p,r);
        numofcomQuick+= (r - p);
        quick_sort(arr,p,q-1);
        quick_sort(arr,q+1,r);
    }
}

