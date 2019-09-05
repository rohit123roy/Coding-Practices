
#include <stdio.h> 
#include <string.h> 
  
void fun(char *arr) 
{ 
   int i; 
   unsigned int n = strlen(arr); 
   printf("n = %d\n", n); 
   for (i=0; i<n; i++) 
     printf("%c  ", arr[i]); 
} 
  
// Driver program 
int main() 
{ 
   char arr[] = {'g', 'e', 'e', 'k', 's', 'q', 'u', 'i', 'z'}; 
   fun(arr); 
   return 0; 
}
