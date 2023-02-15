#include <stdio.h>
int main(){
    
    //do_while
    // char a='A';
    // do
    // {
    //     printf("%c\n",a);
    //     a++;
    // } while (a!='[');
    
// int a,b=0,c=10;
// do
// {
//     puts("Sonni kiriting");
//     scanf("%i",&a);
//     b+=a;
//     c--;
// } while (c>0);
// printf("%i",b);



// int a,b=1;
// scanf("%i",&a);
// do
// {
//     if (a%b==0)
//         printf("%i\n",b);
//     b++;
// } while (b<a);



// int a,c;
// scanf("%i",&a);
//     if (a<0)
//     {
//         a*=-1;
//         printf("-");
//     }
// do
// {

    
//     c=a/10;
//     c*=10;
//     c=a-c;
//     printf("%i",c);
//     a/=10;
// } while (a);







// int a,b=1,c=1;
// scanf("%i",&a);
// do
// {   
//     c=c*b;
//     printf("%i!=%i\n",b,c);
//     b++;
// } while (b<=a);




// int a,b;
// scanf("%i",&a);
// b=a%10;
// do
// {
//     a=a/10;
// } while (a>10);
// if (a>b)
//     printf("%i",a);
// else
//     printf("%i",b);





// int s,d=0;
// scanf("%i",&s);
// do
// {
//     s/=10;
//     d++;
// } while (s>0);
// printf("%d",d);



// //uchinchi masala
// char a,b=0;
// int c=0;

// do
// {
//     scanf("%c",&a);
//     if ((a>='a' && a<='z')||(a>='A' && a<='Z'))
//         b++;    
// } while (a!='0');
// printf("%i",b);











int a,s=0;

do
{
    metka:
    printf("Mevalardan birini tannlang\n1-> Olma\t13 000\n2->Banan\t15 000\n3->Nok\t18 000\n0->Dasturni tugatish.\n");
        scanf("%i",&a);
        if (a==1)
        {   
            s+=13000;
            printf("Yana biror meva olasizmi\nHa->1");
                if (a=1)
                    goto metka;
                
        else if (a==0)
            goto yuqmet;
        }
yuqmet:
} while (a!=0);












































































}