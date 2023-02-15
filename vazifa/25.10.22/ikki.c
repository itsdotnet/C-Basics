#include <stdio.h>
int main(){
//Kvadratning tomoni a berilgan. Uning perimetri P = 4*a va yuzasi S= a*a aniqlansin.

int p, s, a=23;
p=4*a;
s=a*a;
printf("%d Kvadrat perimatri", p);
printf("%d Kvadrat yuzasi", s);

//Paralelepipedning tomonlari a, b, c berilgan. Uning hajmini V=a*b*c va to’la sirti S=2*(a*b+b*c+a*c) aniqlansin.

float a=5, b=3, c=7, v, s;
v=a*b*c;
s=2*(a*b+b*c+a*c);
printf("f%\n Hajmi", v);
printf("f%\n Yuzasi", s);
 
//Ikkita manfiy bo‘Imagan a va b sonlar berilgan. Ularning o‘rta arifmetigi d=(a+b)/2 aniqlansin.

int a=28, b=23, d;
d=(a+b)/2;
printf("d% O'rta arfimetik", d);

//A, B  sonlari berilgan. A ning qiymatini B ga, B ni ning qiymatini A ga almashtirilsin. A va B  ning yangi qiymat- ilari ekranga chiqarilsin.

float a=53, b=48;
a=a+b-a;
b=b+a-b;
pr/intf("f%", a, b);

//To‘g‘rito‘rtburchakni yuzasini topish algoritmini tuzing.

float a=49, b=34 ,s;
s=a*b
printf("f% Yuza", s, "f% ga teng")

//To‘g‘rito‘rtburchakni perimetrini topish algoritmini tuzing.

int a=213, b=32, p;
p=(a+b)*2;
printf("%d Perimatri ", p);

//Ixtiyoriy berilgan x va y sonlaridan kattasini topish algoritmini tuzing.

int a, b;
scanf("%d a va b ni kiriting", &a, &b);
if (a > b){
    printf("%d kattasi", a);
}
else{
    printf("%d kattasi", b);
}

}
