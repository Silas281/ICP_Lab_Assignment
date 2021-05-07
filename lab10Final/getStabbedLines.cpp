#include "stabbingLines.h"

void getStabbedLines (const int xcoord, Line linesArray[], const int MaxLnsSize, const int NumLines, Point pointsArray[],
  const int MaxPntsSize, Line stabbedLines[], const int MaxStbSize, int& NumOfStbLines){

    int temp = 0;

   

    for(int i = 0; i < NumLines; i++){
      if(pointsArray[linesArray[i].p2].p_x >= xcoord){
        if(pointsArray[linesArray[i].p1].p_x <= xcoord){
          stabbedLines[temp] = linesArray[i];
          temp++;
          NumOfStbLines++;
          
        }
      }
    }
    
		//cout<<"Number of StabbedLines: " <<temp<<endl;
		for(int i = 0; i < NumOfStbLines; i++){
			printLineByCoords(stabbedLines[i].Lid, linesArray, 500, pointsArray, 500);
		}
	

  }
