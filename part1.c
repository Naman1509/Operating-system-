for(i = 0 ; i < n ; i++)
{
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
 }