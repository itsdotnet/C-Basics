 int n=5,a=n,c=n;
 qayta:
 if (a==0)
 {
    printf("%i!=%i",n,c);
 }else if(a==1){
  a=a-1;
  c=c*1;
  goto qayta;
 }else
{  a-=1;
    c=c*a;
    goto qayta;
 }