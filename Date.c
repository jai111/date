#include<stdio.h>
void  main()
{ int d,y,x,z;
char a[8]={"Mon","tue","wed","thu","fri","sat","sun","mon"}
printf("enter year");
scanf("%d",&y);
if(y%4!=0)
{ 
d=y-1900;
x=d+int(d/4);
z=x-(7*int(x/7));
return a[z];
} 
else
{ 
d =y-1900;
x =(d+int(d/4))-1;
z=x-(7*int(x/7));
return a[z];
} 
} 
