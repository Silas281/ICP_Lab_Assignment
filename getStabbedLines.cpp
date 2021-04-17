void getStabbedLines (const int xcoord, Line linesArray[], const int MaxLnsSize,
  const int NumLines, Point pointsArray[],
  const int MaxPtsSize, Line stabbedLines[], const int MaxStbSize,
  int& NumOfStbLines){


    xcoord;
    NumOfStbLines;
    linesArray[NumLines];
    int numPoints;
    pointsArray[numPoints];
    int temp = 0;

    stabbedLines[NumOfStbLines];

    for(int i = 0; i < NumLines; i++){
      if(pointsArray[linesArray[i].p2].p_x >= xcoord){
        if(pointsArray[linesArray[i].p1].p_x <= xcoord){
          stabbedLines[temp] = linesArray[i];
          temp++;
          NumOfStbLines++;
        }
      }
    }

    for(int i = 0; i < NumOfStbLines-1; i++){
      printLineByCoords(stabbedLines[i].Lid, linesArray, 500, pointsArray, 500);
    }

  }
