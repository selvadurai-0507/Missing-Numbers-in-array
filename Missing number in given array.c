#include<stdio.h>
int main(){
	int number,i=0,diff;  //It's repersent number range...exsample..you give 5 it's assume(1 to 5)..basically (1 to N)
	scanf("%d",&number);
	int  element=number-1;   // We know that one missing was persent in given range...so remove one number 
	int array[element];     // Here enter the numbers in given range ...exsample number=5,array[1,2 3,5]...besically(1 to N-1)
	for(i=0;i<element;i++){
		scanf("%d",&array[i]);
	}
	for(i=0;i<element;i++){
		if(array[i+1]<=number){
			diff=array[i+1]-array[i]; //here find different between the numbers... 1 to N numbers have different =1
		    if(diff==2){             // if different=2...the array have one missing number...then print the number
		      printf("%d",array[i]+1);	
			}
		   
		}
	}
	return 0;
}
