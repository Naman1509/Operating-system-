// Calculating Total extra time taken by the process and printing all the information and format the output
     
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
