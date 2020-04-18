#include<stdio.h>  
#include<conio.h>  
 int main()  
 {  
   int at[10], bt[10], ct[10], wt[10], ta[10], tat[10];  
   //at-ArritvalTime::br-BurstTime::ct-CompletionTime::ta-TemporaryArray  
   //wt-WaitingTime::tat-TurnAroundTime::tn-CurrentTime(TimeNow)  
   int n,special,i, k, pc=0, point = 0, tn =0, c;
    int totwt=0,totta=0,burstadd = 0,xtra,xtratime = 0;
    float awt=0.0,ata = 0.0;
   char pn[10][10]; //pn-ProcessName  
   printf("Enter the number of processes:\n ");  
   scanf("%d",&n);
   	for(i=0;i<n;i++)
 	{
 		printf("Enter Name of process %d\n",i+1);
 		scanf("%s",&pn[i]);
 		fflush(stdin);
 		printf("Enter the arival time of process %d: \t",i+1);
		scanf("%d",&special);
		if(special==0)
		{
		printf("zero is not allowed as arrival time\n");
		printf(" Please Re-enter the arrival time:\t");
		scanf("%d",&at[i]);
		}
		else
			at[i]=special;
		printf("Enter the burst time of the proecss:\t");
		scanf("%d",&bt[i]);
		
		burstadd += bt[i]; 
		
	} 
   for(i=0; i<n; i++)  
   {  
     ct[i] = -1;  
     ta[i] = bt[i];  
   }  
   while(pc!=n)  
   {  
     c = 0;  
     for(i=0; i<n; i++)  
       if(ct[i]<0 && at[i]<=tn)  
         c++;  
     if(c==0)  
       tn++;  
     else  
     {  
       point = 0;  
       while(at[point]>tn || ct[point]>0)  
         point++;  
       for(k=point+1; k<n; k++)  
         if(at[k]<=tn && ct[k]<0 && bt[point]>bt[k])  
           point = k;  
       if(ct[point]<0)  
       {  
         tn=tn+bt[point];  
         bt[point] = 0;  
         ct[point] = tn;  
         wt[point] = ct[point] - ( at[point]+ ta[point] );  
         tat[point] = ct[point] - at[point]; 
        
          
         pc++;  
       }  
     }  
   }
   for(i=0;i<n;i++)
   {
   	totwt += wt[i];
   	totta += tat[i];
   }
   printf("total time : %d",totwt);
   
   
    awt=(float)totwt/(float)n;
    ata=(float)totta/(float)n; 
    
// Calculating Total extra time taken by the process  
     
    xtra = 2*(n-1);
    xtratime = burstadd + xtra;
    
   printf("\nPN\tAT\tBT\tCT\tWT\tTAT\n");  
   for(i=0;i<n;i++) 
      {
       printf("%s\t%d\t%d\t%d\t%d\t%d\n",pn[i],at[i],ta[i],ct[i],wt[i],tat[i]);
      
      }
     
	printf("\n average turnaround time is : %f \n",ata);
	printf("\n average waiting time is : %f", awt); 
	printf("\n The total time taken by the processor to compute all the jobs is : %d ", xtratime); 
   return 0;  
 }  
