#include <stdio.h>
int max(int arr[],int uz){
    for (int i = 0; i < uz; i++)
    {int count=0;
        for (int j = 0; j < uz; j++)
        {
            if(i!=j)
                if (arr[i]>arr[j])
                {
                    count++;
                }
                
        }if (count==uz-1){
            min = arr[i];
        }
    }
}//int min
//     int count=0;
//     for (int i = 0; i < uz; i++)
//     {int count=0;
//         for (int j = 0; j < uz; j++)
//         {
//             if(i!=j)
//                 if (arr[i]<arr[j])
//                 {
//                     count++;
//                 }
                
//         }if (count==uz-1){
//             maxx = arr[i];
//         }
//     }
// }
int main(){
    // int a, k;
    // puts("Array necha qiymatga ega:");
    // scanf("%d", &a);
    // int arr[a];
    // for (int i = 0; i < a; i++)
    // {
    //     printf("Arrayyni %d-qiymatini kiritng.\n", i);
    //     scanf("%d", arr+i);
    // }
    // puts("Necha xona surish kerakligini kiriting:");
    // scanf("%d", &k);
    // for(k; 0 < k; k--){
    //     int kal=arr[0];
    // for (int i = 1; i < a; i++)
    // {
    //     arr[i-1]=arr[i];
    // }arr[a-1]=kal;
    // }for (int i = 0; i < a; i++)
    // {
    //     printf("%d", arr[i]);
    // }
    int arr[5]={71, 5, 3, 8, 2};
    max(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
    
    

}