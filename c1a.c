#include<stdio.h>
#include<stdlib.h>
main()
{
  float u=0.3;
 float v;
 float *pv;
 float *pu;
 pu= &u;
 v=*pu;
 pv =&v;
 printf("\n u=%f  &u=%f pu=%f *pu=%f",u, &u,pu,*pu); 
 printf("\n v=%f &v=%f pv=%f *pv=%f",v,&v,pv,*pv);
}
