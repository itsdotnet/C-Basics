#include <stdio.h>
int main()
{
//bir
    /*
    char men[20];
    int count = 0;
    printf("Biror nima kiriting: ");
    scanf("%[^\n]", men);
    for (int i = 0; i < 20; i++)
    {
        if(men[i] > 64 && men[i] < 91 || men[i] > 96 && men[i] < 123)
        {
            count++;
        }
    }
    printf("Harflar soni -> %d", count);
    */

//ikki
    /*
    char men[20];
    int count = 0;
    printf("Biror nima kiriting: ");
    scanf("%[^\n]s", men);
    for (int i = 0; i < 20; i++)
    {
        if(men[i] == '1' || men[i] == '2' || men[i] == '3' || men[i] == '4' || men[i] == '5' || men[i] == '6' || men[i] == '7' || men[i] == '8' || men[i] == '9')
        {
            count++;
        }       
    }
    printf("Raqamlar soni -> %d", count);
    */
//uch
    /*
    char men[20];
    int count = 0;
    printf("Biror nima kiriting: ");
    scanf("%[^\n]s", men);
    for (int i = 0; i < 20; i++)
    {
        if(men[i] == ' ')
        {
            count++;
        }       
    }
    printf("Spacelar soni -> %d", count); 
    */
//tort
    /*
    char solo[20];
    int countl = 0, countn = 0;
    printf("Biror narsa kiriting: ");
    scanf("%[^\n]", solo);
    for (int i = 0; i < 20; i++)
    {
        if(solo[i] == '1' || solo[i] == '2' || solo[i] == '3' || solo[i] == '4' || solo[i] == '5' || solo[i] == '6' || solo[i] == '7' || solo[i] == '8' || solo[i] == '9')
        {
            countn++;
        }
        else if(solo[i] > 64 && solo[i] < 91 || solo[i] > 96 && solo[i] < 123)
        {
            countl++;
        }

    }
    printf("Harflar soni -> %d\n", countl);
    printf("Raqamlar soni -> %d", countn);   
    */
//besh
    /*
    char solo[20];
    int countl = 0;
    printf("Biror narsa kiriting: ");
    scanf("%[^\n]", solo);
    for (int i = 0; i < 20; i++)
    {
        if(solo[i] > 96 && solo[i] < 123)
        {
            countl++;
        }
    }
    printf("Kichik harflar soni -> %d\n", countl);
    */
//olti


//------------------------------------------------------------------------------------------------------
    
    // char solo[20];
    // int katta = 0, indexka;
    // int kichik = 0, indexki;
    // printf("Biror narsa kiriting: ");
    // scanf("%[^\n]s", solo);
    // for (int i = 0; solo[i] != '\0'; i++)
    // {
    //     if(solo[i] > 96 && solo[i] < 123 && kichik == 0)
    //     {
    //         indexki = i;
    //         kichik++;
    //     }
    //     if(solo[i] > 64 && solo[i] < 91 && katta == 0)
    //     {
    //         indexka = i;
    //         katta++;      
    //     }
    // }
    // if (indexka > indexki)
    // {
    //     for (int i = indexki; i < indexka; i++)
    //     {
    //         printf("%c", solo[i]);
    //     }
    // }
    // else
    // {
    //     for (int i = indexka; i < indexki; i++)
    //     {
    //         printf("%c", solo[i]);
    //     }
        
    // }
    
        char solo[20];
    int katta = 0, indexka;
    int kichik = 19, indexki;
    printf("Biror narsa kiriting: ");
    scanf("%[^\n]s", solo);
    for (int i = 0; solo[i] != '\0'; i++)
    {
        if(solo[i]==)
        {
            indexki = i;
            kichik++;
        }
        if(solo[i] > 64 && solo[i] < 91 && katta == 0)
        {
            indexka = i;
            katta++;      
        }
    }
    if (indexka > indexki)
    {
        for (int i = indexki; i < indexka; i++)
        {
            printf("%c", solo[i]);
        }
    }
    else
    {
        for (int i = indexka; i < indexki; i++)
        {
            printf("%c", solo[i]);
        }
        
    }
    
}