int subsetSum(int arr[], int N, int sum){
	    int t[N+1][sum+1];
	    for(int i=0; i<N+1; i++){
	        for(int j=0; j<sum+1; j++){
	            if(i==0)
	                t[i][j]=false;
	            if(j==0)
	                t[i][j]=true;
	        }
	    }
	    for(int i=1; i<N+1; i++){
	        for(int j=1; j<sum+1; j++){
	            if(arr[i-1]<=j){
	                t[i][j]= t[i-1][j] || t[i-1][j-arr[i-1]];
	            }
	            else{
	                t[i][j]=t[i-1][j];
	            }
	        }
	    }
	    
	    int min_subsetSum= sum;
	    for(int i=1; i<=(sum/2);i++){
	        if(t[N][i])
    	        {min_subsetSum=min(min_subsetSum,(sum-(2*i)));}
	    }
	    return min_subsetSum;
	}
	int minDiffernce(int arr[], int n) 
	{ 
	    int sum = accumulate(arr, arr+n, sum);
	    return subsetSum(arr, n,sum); 
	} 