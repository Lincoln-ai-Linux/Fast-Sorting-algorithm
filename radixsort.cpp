#include <iostream>
#include <sstream> //stringstream
using namespace std;

typedef int DataType;
const int N_ITEMS = 10;
const int length = 2;

void radixSort(string[], int, int );
void displayArray( const DataType[], int, int );

int main(){
   DataType a[ N_ITEMS ] = { 10, 5, 21, 5, 99, 8, 16, 4, 72, 25 };
   string s[ N_ITEMS ];

   cout << "Initial array : ";
   displayArray( a, 0, N_ITEMS - 1 );
   cout << endl;

   // Convert each element to string
   for ( int i = 0; i < N_ITEMS; i++ ){
      stringstream ss;
      ss << a[i];
      s[i] = ss.str();
      for(int j=s[i].length(); j<length; j++)
        s[i]= "0" + s[i];
   }

   radixSort( s, N_ITEMS, length );

   // Convert each element to integer
   for ( int i = 0; i < N_ITEMS; i++ ){
      stringstream ss;
      ss << s[i];
      ss >> a[i];
   }

   cout << "Sorted array : ";
   displayArray( a, 0, N_ITEMS - 1 );
   cout << endl;

   return 0;
}

void displayArray( const DataType theArray[], int first, int last ){
   for ( int i = first; i <= last; ++i )
      cout << theArray[ i ] << " ";
}

void radixSort(string theArray[], int size, int length){
   //To do: radix sort by sorting from lowest power to highest
       for (int pos = length - 1; pos >= 0; pos--) {
        int count[10] = {0};
        string* output = new string[size];

        for (int i = 0; i < size; i++)
            count[theArray[i][pos] - '0']++;

        for (int i = 1; i < 10; i++)
            count[i] += count[i - 1];

        for (int i = size - 1; i >= 0; i--) {
            output[count[theArray[i][pos] - '0'] - 1] = theArray[i];
            count[theArray[i][pos] - '0']--;
        }

        for (int i = 0; i < size; i++)
            theArray[i] = output[i];

        delete[] output;
    }
}






