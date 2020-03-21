#include<stdio.h>
#include<conio.h>
using namespace std;

/* the variables used : 
    n=number of procresses, time= instanteneous time unit, req= resource requriments(n)
	p[]=procresses, at[]=arrival time, bt[]=brust time, wait[]=waiting quaque, ubt[]=updated brust time           */
int main()
{  int n,req,i=0,q=0,max=0;
   int p[10], wait[10], at[10], bt[10], ubt[10],que[10];


printf("Number of procresses=");
scanf("%d",&n);
req=n;

	 for(i=0; i<n;i++)                  // complexity O(n) for loop
	{
		printf("Enter Arrival Time and Burst Time For Process p: %d:",i+1);
		scanf("%d",&at[i]);         // array at[0,5,13,16] arraival time
		scanf("%d",&bt[i]);         // array bt[20,36,19,42]brust times of respective procresses
		                
	}
	
	
// first case scheduler alocating the cpu resources with quantum time 6 units	
q=6;
printf("quantum time siez= 6 units\n\n");
for(i=0; i< n;i++)            // complexity O(n)+O(n)=O(n)
{ if(bt[i]>=q)
   {ubt[i]=bt[i]-q;}                /* updating the brust time list of the procresses after the 6 units of resource alloaction
                                        and storing the results into ubt[] array*/    									                                    
}
//updating waitlist(uncomplete procresses) stored in wait[] array
for(i=0;i<n;i++)
{ if(ubt[i]!=0)
{ wait[i]=1;}
  else
  { wait[i]=0;
  }
}

for(i=0;i<n;i++)
                          // complexity O(n)
{  printf("updated brust time procress p%d :",i+1);       // updated brust time
   printf("%d\n",ubt[i]); 
}
  printf("note if waitlist 1 means recpective procress is incomplete\n");
   printf("note if waitlist 0 means recpective procress is completed\n");
 for(i=0;i<n;i++)
{
  printf("updated wait list procress p%d :",i+1) ;
 
   printf("%d\n",wait[i]);
   }
   
   

// second case sheduler allocating the cpu resources with quantum time 10;
q=10;
printf("quantum time siez= 10 units\n\n");
for(i=0; i< n;i++)            // complexity O(n)+O(n)=O(n)
{ if(bt[i]>=q)
   {ubt[i]=bt[i]-q;}                /* updating the brust time list of the procresses after the 6 units of resource alloaction
                                        and storing the results into ubt[] array*/    									                                    
}
//updating waitlist(uncomplete procresses) stored in wait[] array
for(i=0;i<n;i++)
{ if(ubt[i]!=0)
{ wait[i]=1;}
  else
  { wait[i]=0;
  
  }
}

for(i=0;i<n;i++)
                          // complexity O(n)
{  printf("updated brust time procress p%d :",i+1);       // updated brust time
   printf("%d\n",ubt[i]); 
}
  printf("note if waitlist 1 means recpective procress is incomplete\n");
   printf("note if waitlist 0 means recpective procress is completed\n");
 for(i=0;i<n;i++)
{
  printf("updated wait list procress p%d :",i+1) ;
  
   printf("%d\n",wait[i]);
   }
   
// third case shedhuler with variable qunatum siez depending on the max brust time;
printf("variable qunatum time siez depends on maximum brust time");
printf("by slecting the procress that req max time to run\n");




for(i=0;i<n;i++)
{ 

for(int j=0;j<n;j++)
{  
     if(ubt[j]>ubt[j+1])    //findin the process which requries max time; 
      { max=j+1;          //**** if equal brust times by default the first one i.e according to arrival time is chhosen; 
      }
}   


    if(max!=0) 
	{
		
      	printf("allocating cpu resources for p%d for %d units of brust time\n",max,ubt[max-1]);
      	ubt[max-1]=0;
      	
	}
	else
	{printf("completed");
	}
}
}






























 
 
 
   
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

