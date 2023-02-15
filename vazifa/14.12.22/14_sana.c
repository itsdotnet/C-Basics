#include <stdio.h>
#include <string.h>
#include <ctype.h>
//bir
int fac(int son)
{
    if(son==0)
    {
        return 1;
    }
    return son*fac(son-1);
}



int power(int son, int powere)
{
    if (powere==0)
    {
        return 1;
    }
    powere--;
    return son*power(son, powere);  
}



int add(int n)
{
    if (n==0)
    {
        return 0;
    }
    if (n%2==0)
    {
        printf("%d ", n);
    }
    
    add(n-1);
    
}



int eve(int n)
{
    if (n==0)
    {
        return 0;
    }
    eve(n-1);
    if(n%2!=0)
    {
        printf("%d ", n);
    }
    
}



float powerf(float son, int powere)
{
    if (powere>0)
    {
    if (powere==0)
    {
        return 1;
    }
    powere--;
    return son*powerf(son, powere);  
    }
    else
    {
    if (powere==0)
    {
        return 1;
    }
    powere++;
    return 1/son*powerf(son, powere);  
    }
}



int sum(int a)
{
    if(a==0)
    {
        return 0;
    }
    return a%10 + sum(a/10);

}


int revers(int a)
{
    if(a==0)
    {
        return 0;
    }
    printf("%d ", a%10);
    return revers(a/10);

}

int ekub(int a, int n)
{
    if(a==n)
    {
        return 0;
    }
    if (a>n)
    {
        /* code */
    }
    
}

int main()
{
    //bir
    // printf("%d", fac(5));

    //ikki
    // printf("%d", power(4, 3));

    //uch
    // add(6);

    //tort
    // eve(5);

    //besh
    // printf("%f", powerf(2, -2));

    // olti
    // printf("%d", sum(1234));

    //yetti
    // revers(1234);

    //sakkiz
    // printf("%d", ekub(4, 5));
    
}