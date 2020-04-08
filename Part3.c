// Calculating Total Waiting Time And Total Turn Around Time And Average Waiting Time  and Average Total Turn Around Time


for(i=0;i<n;i++)
   {
   	totwt += wt[i];
   	totta += tat[i];
   }
   printf("total time : %d",totwt);
   
   
    awt=(float)totwt/(float)n;
    ata=(float)totta/(float)n; 
