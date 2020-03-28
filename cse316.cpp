#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;

/* the variables used : 
    n=number of procresses, time= instanteneous time unit, req= resource requriments(n)
	p[]=procresses, at[]=arrival time, bt[]=brust time, wait[]=waiting quaque, pri[]=priority queue,com[]= completed procresses
	****************by default the procresses are a,b,c,d,e,f,g,h,i,j*********which are pre loaded into r[] list        */
int main()
{  int n,i,k,j=1;
   int at[10], bt[10], pri[15],CT[10],TAT[10],WT[10],com[10];           // arrival time;brust time;,priorty queue;
   char r[10];                             //ready queue
   char p[11]={'a','b','c','d','e','f','g','h','i','j','\0'}; //procresses list
   char wait[15];                                  //waitlist

// user enters the procresses, its respective arrival and brust times here
printf("Number of procresses=");
scanf("%d",&n);
int z=n;   //internal computation purpose
if(n>10)   //manages exceptions
{ printf("out of capacity\n");
  printf("minimum 10 is allowed;\ntry again");
exit(0);
}


	 for(i=0; i<n;i++)                  // ------------complexity O(n) for loop---
	{
		printf("Enter Arrival Time For Process %c:",p[i]);
		scanf("%d",&at[i]);            
	                 		                
	}
for(i=0;i<n;i++)
{ 	  printf("Enter Brust Time For Process %c:",p[i]);
      scanf("%d",&bt[i]); 
	wait[i]=p[i];
//loading all avalble procresses into wait list intially;
}


/*since in the given problem it was metioned that user u'd be allowed to enter the arrival and brust times only
hence ***it is assumed that the assigning of priorities is totally the programmer call;
and ******also the problem statement demands for the computation of waiting and turn around time*/

//assigning the procresses with priority;
for(i=0;i<n;i++)  //complexity O(n);
{ pri[i]=i+3;
  printf("The priority of procress:   %c%d\n",wait[i],pri[i]); 
}
/*for(i=0;i<n;i++)
{ 
printf("wait list initially%d",wait[i]);
}
for(i=9;i<=0;i--)
{ 
printf("updated wait list after assignf priorities%d",wait[i]);
}*/
CT[0]=bt[0];
TAT[0]=0;
WT[0]=0;
//the calculation of waiting time and timearound time
for(i=0;i<n;i++)
{ CT[i+1]=CT[i]+bt[i+1];    //completion time;
  TAT[i]=CT[i]-at[i];
  j++;
  if(TAT[i]<0)        //expection handlings
  {printf("you have not entered proper values\n");
   printf("some of the values are turning into negtive wich is not accpetable;");
   printf("try again with proper set of values");
   exit(0);
  } 
   else 
   {

  WT[i]=TAT[i]-bt[i];   //wait time; 
}
}

printf("--------------------------------------------summary------------------------------------------------------------\n\n");
printf("                AT      BT      CT     TAT(ct-at)   WT(tat-bt) of\n");	
for(i=n-1;i>=0;i--)
{ 
//printf("The turnaround time of %c is %d units\n",wait[i],TAT[i]);
//printf("The wait time of %c is %d unitd\n",wait[i],WT[i]);
printf("procress:  %c   %d |   %d   |    %d  |      %d     |       %d\n",wait[i],at[i],bt[i],CT[i],TAT[i],WT[i]);}


printf("importat note:\nhere the quantum time is equal brut time.\n the procress is can take its required time to run to its completion\n");
printf("The priority is given to the process in a unusual way by the programer\n");
printf("****notice the sequence of exuction of the procresses under summmary;\nits according to the priority");

}






























 
 
 
   
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
























 
 
 
   
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

