 #include<stdio.h>
 void fun(int arr[], size_t arr_size)
 { int i; 
 for (i = 0; i < arr_size; i++) 
 printf("%d ", arr[i]);
 } 
 int main()
 { int i,n; 
 int arr[] = {10, 20 ,30, 40}; 
 // Use of sizeof is fine here size_t
 printf("%d\n",sizeof(arr));
 n = sizeof(arr)/sizeof(arr[0]);
 fun(arr, n); 
 return 0; 
     
 }
