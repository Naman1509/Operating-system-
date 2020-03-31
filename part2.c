// Calculation Of Completion Time, Turn Around Time, Waiting time  


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
       pointer = 0;  
       while(at[pointer]>tn || ct[pointer]>0)  
         pointer++;  
       for(k=pointer+1; k<n; k++)  
         if(at[k]<=tn && ct[k]<0 && bt[pointer]>bt[k])  
           pointer = k;  
       if(ct[pointer]<0)  
       {  
         tn=tn+bt[pointer];  
         bt[pointer] = 0;  
         ct[pointer] = tn;  
         wt[pointer] = ct[pointer] - ( at[pointer]+ ta[pointer] );  
         tat[pointer] = ct[pointer] - at[pointer]; 
        
          
         pc++;  
       }  
     }  
   }
