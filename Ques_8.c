#include<stdio.h>
#include<conio.h>
int main()
 {
   int x,n,p[10],pp[10],bt[10],w[10],t[10],awt,atat,i,at[10],tq;         //pp_> process  ;  bt-> burst time  ;  at-> arrival time
  
   printf("Enter total no. of processes   :   ");
   scanf("%d",&n);
   printf("Enter time quantum variable as mentioned in question    :  ");
   scanf("%d",&tq);
   printf("\n\t Enter Priority : Burst : Arrival  \n");
 
   for(i=0;i<n;i++)
    {
      
      printf("\n Process %d   :  ",i+1);
      scanf("%d %d %d",&pp[i],&bt[i],&at[i]);
	  p[i]=i+1;
    }
 
int j;
  for(i=0;i<n-1;i++)
   {
     for(j=i+1;j<n;j++)
     {
       if(pp[i]<pp[j])
       {
     x=pp[i];
     pp[i]=pp[j];
     pp[j]=x;
     x=bt[i];
     bt[i]=bt[j];
     bt[j]=x;
     x=p[i];
     p[i]=p[j];
     p[j]=x;
      }
      
   }
}
w[0]=0;
awt=0;
t[0]=bt[0];
atat=t[0];
for(i=1;i<n;i++)
 {
 	if(tq<n || tq>n) {
	 
   w[i]=t[i-1];
   awt+=w[i];
   t[i]=w[i]+bt[i];
   atat+=t[i];
	 }
 }
 
 printf("\n\n\n\n\n\n");
 printf("******************************************      Answers    *************************************************************");
 printf("\n\nA )  Gantt chart for the processes\n");
 for(i=0;i<n;i++)
 {
 	printf("P %d ",p[i]);
 }

 
printf("\n\nProcess \t Burst Time \t Wait Time \t Turn Around Time   Priority \tArrival time \n");
for(i=0;i<n;i++){
printf("\n  %d",p[i]); printf("\t\t %d",bt[i]); printf("\t\t %d",w[i]); printf("\t\t %d",t[i]); printf("\t\t %d",pp[i]); printf("\t\t %d",at[i]);

}
awt/=n;
atat/=n;
printf("\nB  )   Average Wait Time : %d ",awt);
printf("\nC  )   Average Turn Around Time : %d",atat);
getch();
}
