#include <iostream>
using namespace std;

typedef int DataType;
const int N_ITEMS = 10;

void displayArray( const DataType[], int, int );
void merge( DataType[], int, int, int );
void mergeSort( DataType[], int, int );

int main(){
   DataType a[ N_ITEMS ] = { 10, 5, 21, 5, 99, 8, 16, 4, 72, 25 };

   cout << "Initial array : ";
   displayArray( a, 0, N_ITEMS - 1 );
   cout << endl;

   mergeSort( a, 0, N_ITEMS - 1 );

   cout << "Sorted array : ";
   displayArray( a, 0, N_ITEMS - 1 );
   cout << endl;

   return 0;
}

void displayArray( const DataType theArray[], int first, int last ){
   for ( int i = first; i <= last; ++i )
      cout << theArray[ i ] << " ";
}

void merge(DataType theArray[], int first, int mid, int last ){
   //To do: Merge two halves into a sorted part using a
   //       temporary array
       int n1 = mid - first + 1;
    int n2 = last - mid;
    DataType* left = new DataType[n1];
    DataType* right = new DataType[n2];

    for (int i = 0; i < n1; i++)
        left[i] = theArray[first + i];
    for (int j = 0; j < n2; j++)
        right[j] = theArray[mid + 1 + j];

    int i = 0, j = 0, k = first;
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            theArray[k] = left[i];
            i++;
        } else {
            theArray[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        theArray[k] = left[i];
        i++;
        k++;
    }

    while (j < n2) {
        theArray[k] = right[j];
        j++;
        k++;
    }

    delete[] left;
    delete[] right;

}

void mergeSort(DataType theArray[], int first, int last){
   //To do: Recursively call the mergeSort to split then use
   //       the merge function to combine and sort the halves
       if (first < last) {
        int mid = first + (last - first) / 2;
        mergeSort(theArray, first, mid);
        mergeSort(theArray, mid + 1, last);
        merge(theArray, first, mid, last);
    }
}
