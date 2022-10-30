#include <iostream>
using namespace std;
int main()
{
   void b_srt(int*, int); 
   const int A = 10;
   int arr[A] = { 77, 23, 12, 21, 11, 95, 72, 84, 9, 0 };
   b_srt(arr, A);
   for(int j=0; j<A; j++)
      cout << arr[j] << " ";
   cout << endl;
   return 0;
}
void b_srt(int* ptr, int n)
{
   void order(int*, int*);
   int j, k;
   for(j=0; j<n-1; j++)
      for(k=j+1; k<n; k++)
   order(ptr+j, ptr+k);
}
void order(int* n1, int* n2)
{
   if(*n1 > *n2)
   {
      int temp = *n1;
      *n1 = *n2;
      *n2 = temp;
   }
}
