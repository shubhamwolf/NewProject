#include<stdio.h>
#include<stdlib.h>
main()
{
  double u=3*10^45;
 double v;
 double *pv;
 double *pu;
 pu= &u;
 v=*pu;
 pv =&v;
 printf("\n u=%d  &u=%d pu=%d *pu=%d",u, &u,pu,*pu); 
 printf("\n v=%d &v=%d pv=%d *pv=%d",v,&v,pv,*pv);
}
