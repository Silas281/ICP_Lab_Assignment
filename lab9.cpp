#include <iostream>
#include <stdlib.h>
using namespace std;


/*
 
populateArray(..., int N);
 */
void populateArray(int A[101][101], int N){
	for(int k=0;k<N;k++){
		int i=rand()%100; //generate random i index. 0<=i<=100
		int j=rand()%100; //generate random j index. 0<=j<=100
		
		if(A[i][j]==-1){ //undefined
			A[i][j]=1;
		}
		else{//defined
			A[i][j]=A[i][j]++; 
		}		
	}
	
}

/*C)
searchValidEntries(int XL, int YL, int XH, int YH, ...);
*/

void searchValidEntries(int XL, int YL, int XH, int YH, int A[101][101]){
		for(int i=0;i<101;i++){
			for(int j=0;j<101;j++){
				if((i>=XL && i<=XH) && (j>=YL && j<=YH) && (A[i][j] !=-1)){
					cout<<i<<","<<j<<" "<<A[i][j]<<endl;
				}
		}
	}
}


/*
 * Bounding Boxes
80, 1, 100, 10
10, 20, 40, 79
1, 90, 100, 100
40, 30, 70, 60
50, 50, 70, 70
*/
int main()
{
	int A[101][101];
	for(int i=0;i<101;i++){
		for(int j=0;j<101;j++){
			A[i][j]=-1;
		}
	}
	
	populateArray(A, 2000);
	
	cout<<"Bounding Box 1"<<endl;
	/*80, 1, 100, 10*/
	cout<<"80, 1, 100, 10"<<endl;
	searchValidEntries(80, 1, 100, 10, A);
	
	cout<<endl;
	cout<<"Bounding Box 2"<<endl;
	cout<<"10, 20, 40, 79"<<endl;
	/*10, 20, 40, 79*/
	searchValidEntries(10, 20, 40, 79, A);
	
	cout<<endl;
	cout<<"Bounding Box 3"<<endl;
	cout<<"1, 90, 100, 100"<<endl;
	/*1, 90, 100, 100*/
	searchValidEntries(1, 90, 100, 100, A);
	
	cout<<endl;
	cout<<"Bounding Box 4"<<endl;
	/*40, 30, 70, 60*/
	cout<<"40, 30, 70, 60"<<endl;
	searchValidEntries(40, 30, 70, 60, A);
	
	cout<<endl;
	cout<<"Bounding Box 5"<<endl;
	/*50, 50, 70, 70*/
	cout<<"50, 50, 70, 70"<<endl;
	searchValidEntries(50, 50, 70, 70, A);
	
	
	
	
}
