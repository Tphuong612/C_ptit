	for(int i = 1; i <n; i++)//lap lai n-1 lan
					{
				        for(int j=i+1;j<=n;j++)// sap xep tren hang
				        	if(a[j]>=a[j+1]) 
								{
									int k=a[j+1];
									a[j+1]=a[j];
									a[j]=k;
								}
			    	}	
