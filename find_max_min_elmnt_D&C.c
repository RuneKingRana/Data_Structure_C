#include<stdio.h>
int max, min, a[100];
void maxmin(int i, int j) {
    int max1, min1, mid;
	if(i==j){
	    max = min = a[i];
	}
	else{
	    if(i == j-1){
	    	if(a[i] <a[j]){
	    		max = a[j];
	    		min = a[i];
	    	}
	   		else{
	   			max = a[i];
	    		min = a[j];
	   		}
	    }
		else{
			mid = (i+j)/2;
		    maxmin(i, mid);
		    max1 = max; min1 = min;
		    maxmin(mid+1, j);
		    if(max <max1){
		    	max = max1;
			}
		    if(min > min1){
		    	min = min1;
			}
		}
	}
}
void main (){
	int i, n;
	printf ("Enter the number of elements : ");
	scanf ("%d",&n);
	printf ("Enter the elements : ");
	for (i=0;i<n;i++){
		scanf ("%d",&a[i]);
	}
	max = a[0];
	min = a[0];
	maxmin(0, n-1);
	printf ("Minimum element in an array : %d\n", min);
	printf ("Maximum element in an array : %d\n", max);
}
