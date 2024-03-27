// Sort.h
#ifndef SORT_H
#define SORT_H

class Sort {
private:
    int size;
    void merge(int arr[], int left, int mid, int right);
    int partition(int arr[], int p, int r);

public:
    // void merge(int arr[], int left, int mid, int right); // Removed this line
    void insertion_sort(int arr[], int size);
    void merge_sort(int arr[], int left, int right);
    void quick_sort(int arr[], int p, int r);
    int numofcomQuick=0;
    int numofcomMerge=1;

};

#endif // SORT_H


