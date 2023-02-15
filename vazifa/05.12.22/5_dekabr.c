#include <stdio.h>
int main()
{
    //bir
    /*
    int n , m;
    printf("Qator? ");
    scanf("%d", &n);
    printf("Ustun? ");
    scanf("%d", &m);
    int arr[n][m];
    printf("Array? \n");
    for (int i = 0; i < n * m; i++)
    {
        scanf("%d", &arr[0][i]);
    }
    puts("");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(i == 0 || i == n - 1 || j == 0 || j == m - 1)
            {
                printf("%d ", arr[i][j]);
            }
            else
            {
                printf("* ");
            }
            
        }

        puts("");
        
    }
    */
    
//---------------------------------------------------------------------------------------------------------------

    //ikki
    /*
    int n , m, k = 0, l = 1;
    printf("Qator? ");
    scanf("%d", &n);
    printf("Ustun? ");
    scanf("%d", &m);
    int arr[n][m];
    printf("Array? \n");
    for (int i = 0; i < n * m; i++)
    {
        scanf("%d", &arr[0][i]);
    }
    puts("");
    for (int i = 0; i < n * m; i++)
    {
        if(k % 2 == 0)
        {
            printf("* ");
        }
        else
        {
            printf("%d ", arr[0][i]);
        }
        if(l%m==0)
        {
            puts("");
            
        }
        l++;
        k++;

    }
    */
//--------------------------------------------------------------------------------------------------------------

    //uch
    /*
    int n , m, count = 0;
    printf("Qator? ");
    scanf("%d", &n);
    printf("Ustun? ");
    scanf("%d", &m);
    int arr[n][m];
    printf("Array? \n");
    for (int i = 0; i < n * m; i++)
    {
        scanf("%d", &arr[0][i]);
        if(arr[0][i] == 0)
        {
            count++;
        }
    }

    if(count > n * m / 2) printf("Sparse Matrix");

    else printf("x");

    puts("");
    */
//---------------------------------------------------------------------------------------------------------------

    //tort
    /*
    int n , m;
    printf("Qator? ");
    scanf("%d", &n);
    printf("Ustun? ");
    scanf("%d", &m);
    int arr[n][m];
    printf("Array? \n");
    for (int i = 0; i < n * m; i++)
    {
        scanf("%d", &arr[0][i]);
    }
    puts("");
    for (int i = 0, j = m - 1; i < n; i++, j--)
    {
        int temp = arr[i][i];
        arr[i][i] = arr[i][j];
        arr[i][j] = temp;        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);            
        }

        puts("");    
    }
    */
    
//---------------------------------------------------------------------------------------------------------------

    //besh
    /*
    int n , m, sum = 0;
    printf("Qator? ");
    scanf("%d", &n);
    int add[n];
    printf("Ustun? ");
    scanf("%d", &m);
    int arr[n][m];
    printf("Array? \n");
    for (int i = 0; i < n * m; i++)
    {
        scanf("%d", &arr[0][i]);
    }
    puts("");
    for (int i = 0; i < n; i++)
    {
        add[i] = 0;
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];            
        }
        add[i] = sum; 
        sum = 0;       
    }
    int max = add[0], xona = 0; 

    for (int i = 1; i < n; i++) 
    {
        if(max < add[i])
        {
            max = add[i];
            xona = i;
        }
    }
    int mamax = arr[xona][0];
    for (int i = 1; i < m; i++)
    {
        if(mamax < arr[xona][i])
        {
            mamax = arr[xona][i];
        }
    }
    printf("%d", mamax);
    */
//---------------------------------------------------------------------------------------------------------------
    //olti
    /*
    int n , m, sum = 0;
    printf("Qator? ");
    scanf("%d", &n);
    int add[n];
    printf("Ustun? ");
    scanf("%d", &m);
    int arr[n][m];
    printf("Array? \n");
    for (int i = 0; i < n * m; i++)
    {
        scanf("%d", &arr[0][i]);
    }
    puts("");
    for (int i = 0; i < m; i++)
    {
        add[i] = 0;
        for (int j = 0; j < n; j++)
        {
            sum += arr[j][i];            
        }
        add[i] = sum; 
        sum = 0;       
    }
    int max = add[0], xona = 0;
    for (int i = 1; i < m; i++)
    {
        if(max < add[i])
        {
            max = add[i];
            xona = i;
        }
    }
    printf("%d-ustun eng katta", xona + 1);
    */
//--------------------------------------------------------------------------------------------------------------------

    //yetti

    // int n , m;
    // printf("Qator? ");
    // scanf("%d", &n);
    // printf("Ustun? ");
    // scanf("%d", &m);
    // int arr[n][m];
    // printf("Array? \n");
    // for (int i = 0; i < n * m; i++)
    // {
    //     scanf("%d", &arr[0][i]);
    // }
    // puts("");
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
            
            
    //     }

    //     puts("");
        
    // }

//-----------------------------------------------------------------------------------------------------------------
    
    // int n , m, sum = 0;
    // printf("Qator? ");
    // scanf("%d", &n);
    // int add[n];
    // printf("Ustun? ");
    // scanf("%d", &m);
    // int arr[n][m];
    // printf("Array? \n");
    // for (int i = 0; i < n * m; i++)
    // {
    //     scanf("%d", &arr[0][i]);
    // }
    // puts("");
    // int max = arr[0][0], min = arr[0][0], indexmin = 0, indexmax = 0; 
    // for (int i = 0; i < n ; i++)
    // {   
    //     for (int j = 0; j < m; j++)
    //     {
    //         if(max < arr[i][j])
    //         {
    //             max = arr[i][j];
    //             indexmax = i;
    //         }
    //         else if (min > arr[i][j])
    //         {
    //             min = arr[i][j];
    //             indexmin = i;
    //         }
            
    //     }
    
    // }
    // //-------------------------
    // if(indexmax==indexmin) printf("Maximum va minimum bir qatorda");
    // else
    // {
    // for (int i = 0; i < m; i++)
    // {
    //     int temp = arr[indexmax][i];
    //     arr[indexmax][i] = arr[indexmin][i];
    //     arr[indexmin][i] = temp;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         printf("%d ", arr[i][j]);
    //     }
    //     puts("");
    // }
    
    // }
    int n , m, sum = 0;
    printf("Qator? ");
    scanf("%d", &n);
    int add[n];
    printf("Ustun? ");
    scanf("%d", &m);
    int arr[n][m];
    printf("Array? \n");
    for (int i = 0; i < n * m; i++)
    {
        scanf("%d", &arr[0][i]);
    }
    puts("");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i <= j && i + j >= n - 1)
            {
     
                printf("* ");
            }
            else
            {
                printf("%d ", arr[i][j]);
            }
            
        }
        puts("");
    }
    

    }