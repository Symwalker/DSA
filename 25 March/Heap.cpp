// /******************************************************************************

// Welcome to GDB Online.
//   GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
//   C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
//   Code, Compile, Run and Debug online from anywhere in world.

// *******************************************************************************/
// #include <stdio.h>
// #include <iostream>
// #include <cmath>

// void swap(int *a, int *b){
//     int t = *a;
//      *a = *b;
//      *b = t;
 
    
     
// }

// int child_Finder(int i, int arr[])
// {
//     int lc= 2*i+1;
//     int rc= 2*i+2;
    
//     std::cout << lc << std::endl;
//     std::cout << rc << std::endl;
    
//     if( arr[lc]>arr[rc])
//     {
//         return lc;
        
//     }
//     else
//     {
//         return rc;
//     }
// }

// void parent_Finder(int i,int arr[])
// {
//     int pf=  trunc((i-1)/2);   
//     std::cout << pf << std::endl;
    
//     int child_greatest= child_Finder(pf, arr);
    
//     if(arr[pf]<arr[child_greatest])
//     {
//         swap( &arr[pf], &arr[child_greatest]);
        
//     }
// }


// void heapify (int arr[])
// {
 
//   parent_Finder(1, arr);
  
//   for(int i=0; i<3; i++)
//   {
//       std::cout << arr[i] << std::endl;
//   }
// }


// int main ()
// {
//   int arr[3] = { 78, 99, 23 };

//   heapify (arr);
// }


#include <stdio.h>
#include <iostream>

void swap(int *a, int *b){
    int t = *a;
     *a = *b;
     *b = t;
}

int heapify(int arr[], int i)
{
  int pf= (i-1)/2;   
  if(arr[pf]<arr[i]){
      swap(&arr[pf],&arr[i]);
      heapify(arr, pf);
  }
  return 0;
}


int main ()
{
  int arr[10] = { 78, 99, 23,63,97,55,230,117,11};

    for(int i=0; i<9;i++)
    {
        heapify(arr, i);
    }
    
     for(int i=0; i<9; i++)
  {
      std::cout << arr[i] << std::endl;
  }
}