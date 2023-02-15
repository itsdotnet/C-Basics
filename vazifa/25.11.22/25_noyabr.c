#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main(){
 srand(time(NULL));
//  int n;
//  puts("sonni kiriting");
//  scanf("%d", &n);
//  int add[n];
//  for (int i = 0; i < n; i++)
//  {
//     add[i] = rand()%n;
// }
// for (int i = 0; i < n - 1; i++)
// {
//     for (int h = 0; h < n - 1 - i; h++)
//     {
//         if (add[h]>add[h+1])
//         {
//             int key = add[h];
//             add[h] = add[h+1];
//             add[h + 1] = key;
//         }
        
//     }
    
// }
// puts("");
// for (int i = 0; i < n; i++)
// {
//     printf("%d", add[i]);
// }
 
 
//bir
//  int add[10];
//  for (int i = 0; i < 10; i++){
//     scanf("%d", &add[i]);
//  }
 
// for (int i = 0; i < 10 - 1; i++)
// {
//     for (int h = 0; h < 10 - 1 - i; h++)
//     {
//         if (add[h]>add[h+1])
//         {
//             int key = add[h];
//             add[h] = add[h+1];
//             add[h + 1] = key;

//         }
        
//     }
    
// }
// int g = 0;
// for (int i = 9; i > 0; i--)
// {
//     if(add[i-1] != add[i]){
//         printf("%d", add[i -1]);
//         g++;
//         break;
//     }
// }if(g==0){
//     printf("Ikkinchi katta son yo'q");
// }


//ikki
// int sum = 0, sum2 = 0;
// int a[] = {88, 85, 96, 81, 39, 12, 4, 56, 2, 13, 31, 51, 54, 21, 5, 48, 28, 57, 40, 44, 55, 74, 80, 94, 17, 61, 47, 1, 10, 27, 83, 42, 36, 75, 3, 65, 45, 24, 15, 25, 14, 30, 41, 53, 34, 11, 93, 86, 32, 26, 97, 7, 98, 50, 38, 68, 59, 64, 63, 76, 91, 52, 71, 43, 35, 18, 79, 87, 29, 58, 78, 22, 95, 49, 90, 67, 89, 69, 62, 9, 33, 99, 6, 82, 8, 70, 84, 77, 37, 72, 46, 16, 23, 73, 92, 60, 66, 100, 20};
// for (int i = 0; i < 99; i++)
//     sum+=a[i];
// for (int i = 0; i <= 100; i++)
//     sum2+=i;
// printf("%d", sum2 - sum );

//uch

// int n;
// scanf("%d", &n);
// int y[n];
// for (int i = 1; i < n; i+=2)
// {
//     y[i]=rand()%n;
// }
// for (int i = 0; i < n; i+=2)
// {
//     y[i]=rand()%n;
// }
// for (int i = 0; i < n; i++)
// {
//     printf("%d ", y[i]);
// }

//tort

// int n;
// scanf("%d", &n);
// int y[n];
// for (int i = 0; i < n; i+=2)
// {
//     y[i]=rand()%n;
// }
// for (int i = 1; i < n; i+=2)
// {
//     y[i]=rand()%n;
// }
// for (int i = 0; i < n; i++)
// {
//     printf("%d ", y[i]);
// }

//besh

//  int n;
//  puts("sonni kiriting");
//  scanf("%d", &n);
//  int add[n];
//  for (int i = 0; i < n; i++)
//  {
//     add[i] = rand()%30-5;
// }
// for (int i = 0; i < n - 1; i++)
//     for (int h = 0; h < n - 1 - i; h++)
//         if (add[h]>add[h+1])
//         {
//             int key = add[h];
//             add[h] = add[h+1];
//             add[h + 1] = key;
//         }   
// puts("");
// for (int i = 0; i < n; i++)
// {
//     if (add[i]<0)
//         printf("%d ", add[i]);
// }
// for (int i = n; i > 0; i--)
// {
//     if (add[i]>0)
//         printf("%d ", add[i]);
// }
// for (int i = 0; i < n; i++)
// {
//     if (add[i]==0)
//         printf("%d ", add[i]);
// }

//olti

 int n;
 puts("sonni kiriting");
 scanf("%d", &n);
 int add[n];
 for (int i = 0; i < n; i++)
 {
    add[i] = rand()%30-5;
}
for (int i = 0; i < n - 1; i++)
    for (int h = 0; h < n - 1 - i; h++)
        if (add[h]<add[h+1])
        {
            int key = add[h];
            add[h] = add[h+1];
            add[h + 1] = key;
        }   
puts("");
for (int i = n; i > 0; i--)
{
    if (add[i]%2==0)
        printf("%d ", add[i]);
}
for (int i = 0; i < n; i++)
{
    if (add[i]%2==1)
        printf("%d ", add[i]);
}


//yetti

//  int n;
//  puts("sonni kiriting");
//  scanf("%d", &n);
//  int add[n];
//  for (int i = 0; i < n; i++)
//  {
//     add[i] = rand()%10;
// }
// for (int i = 0; i < n - 1; i++)
// {
//     for (int h = 0; h < n - 1 - i; h++)
//     {
//         if (add[h]>add[h+1])
//         {
//             int key = add[h];
//             add[h] = add[h+1];
//             add[h + 1] = key;
//         }
        
//     }
    
// }
// puts("");
// for (int i = 0; i < n; i++)
// {
//     printf("%d", add[i]);
// }
// for (int i = n; i >= 0; i--)
// {
//     int count=0;
//     if(add[i-1] != add[i]){
//         printf("%d -> ", add[i -1]);
        
//     }
//     for (int j = n; j <= 0; j--)
//     {
//         if (add[i]==add[j])
//         {
//             count++;
//         }
        
//     }
//     printf("%d\n", count);
// }


}