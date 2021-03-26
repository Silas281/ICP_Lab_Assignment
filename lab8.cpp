#include <iostream>

#include <stdio.h>
#include <stdlib.h>
using namespace std;

//Declare global array to store i and i of A[i][j] in InverseIdx()
int arrij[2];
//Global arrays A and B to be used as parameters for the two functions
int A[128][128];
int B[16600];

//LinearIndx()
int LinearIndx(int i, int j){
    if(j>i) return -1;
    else {
		int I=(((i*i)+i)/2)+j;
		return I;
	}
}

//ReverseIdx() : return type is array of two integers, i and j
int* ReverseIdx(int arr2d[128][128],int I,int arr1d[16600]){
   
    for(int i=0;i<128;i++){
        for(int j=0;j<128;j++){
			if(j<=i){
				int tempI=(((i*i)+i)/2)+j;
				if(tempI==I){
					arrij[0]=i;
					arrij[1]=j;
					return arrij;
				}
			}
			
        }
    }
    return arrij;
}




//Main method
int main(int agrc, char *argv[])
{
	//predefine Array sizes
	int n=128; //2D /A,B, and C
	int m=16000; //1D array /B
	//A program to generate a lower triangular array between 0 and 1000
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<=i){
                A[i][j]=rand()%1000;
            }
            else{
                A[i][j]=0;
            }
        }
    }    
    //Assign A[i][j] to B[I]
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
			int I=LinearIndx(i,j);
				if(I !=-1){
				B[I]=A[i][j];
				}	
        }
    }
    //Assign B[I] to C[i][j]
    int C[n][n];
    for(int i=0;i<m;i++){
		int *D=ReverseIdx(C,i,B);
		int k=D[0];
		int x=D[1];
		
			C[k][x]=B[i];
	}
	
	
    // print first 20 element of A and indexes
    for(int i=0;i<6;++i){
        for(int j=0;j<6;++j){
			if(A[i][j] !=0){
				cout<<"A["<<i<<"]["<<j<<"] "<<A[i][j]<<endl;
			}
		}		
	}
	
	cout<<"A ended"<<endl;
	cout<<""<<endl;
    
     // print first 20 element of B and indexes
      for(int i=0;i<20;++i){
        cout<<"B["<<i<<"]"<<B[i]<<endl;		
	}
     cout<<"B ended"<<endl;
     cout<<""<<endl;
     
      // print first 20 element of C and indexes
        for(int i=0;i<6;++i){
			for(int j=0;j<6;++j){
				if(C[i][j]!=0){
					cout<<"C["<<i<<"]["<<j<<"] "<<C[i][j]<<endl;
				}
		}		
	}
	cout<<"C ended"<<endl;
	cout<<""<<endl;
    return 0;
}
