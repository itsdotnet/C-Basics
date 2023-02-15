#include <stdio.h>
int main()
{
    // int n;
    // int *ptr = &n;
    // scanf("%d", ptr);
    // int add[n], sum = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", add + i); 
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; i < n; j++)
    //     {
    //         if (*(add + i) >= *(add + j))
    //         {
    //             sum++;
    //         }
            
    //     }
    //     if (sum == n)
    //     {
    //         printf("%d", *( add + i));
    //         break;
    //     }
    //     sum = 0;
    // }
    
    int n;
    scanf("%d", &n);
    int add[n];
    for (int  i = 0; i < n; i++)
    {
        scanf("%d", add + i);
    }
    int toq[32],indet = 0, juft[32], indej = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(add + i) % 2 == 0)
        {
            *(juft + indej++) = *(add + i);
        }
        else
        {
            *(toq + indet++) = *(add + i);
        }
        
    }
    for (int i = 0, a = indet; i < a; i++)
    {
        printf("toq -> %d ", *(toq + i));
    }
    puts("");
    for (int i = 0, a = indej; i < a; i++)
    {
        printf("juft -> %d ", *(juft + i));
    }

    
    
    
}