#include <stdio.h>
int main(void) {
int length,breadth,height,tos,v;
scanf("%d %d %d",&length,&breadth,&height);
tos=2*((length*breadth)+(length*height)+(height*breadth));
v=length*breadth*height;
printf("%d %d",tos,v);
return 0;
}
