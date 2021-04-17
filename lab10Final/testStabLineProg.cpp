#include "stabbingLines.h"


//define MAXARRAYSIZE 500


using namespace std ;

typedef int PointId ;

typedef int LineId ;

struct Point { //define a Point struct
  PointId Pid; // Point Id
  int p_x; // x-coordinate of a point
  int p_y; // y-coordinate of a point
};

struct Line { // define a Line by its 2 End points
  LineId Lid ; // Line Id
  PointId p1 ; // first Point
  PointId p2 ; // second Point
};


int main(){ 

  ifstream inPutPointFile("inPutPointFile.txt");
  ifstream inPutLineFile("inPutLineFile.txt");
  Point pointsArray[8];
  Line linesArray[5];
  Line stabbedLines[5];
  int numPoints = 8;
  int numLines = 5;
  int lid = 0;
  int NumOfStbLines = 0;
  int xcoord=1;
  const int MaxLnsSize=5;
  const int MaxPntsSize=8;
  

  readPoints(inPutPointFile, pointsArray,500,numPoints);
  readLines(inPutLineFile, linesArray,500,numLines);
  cout<<"printLineByCoords: "<<endl;
  printLineByCoords(lid, linesArray, MaxLnsSize, pointsArray, MaxPntsSize);
  cout<<"Stabbed lines  By X= "<<xcoord<<endl;
  getStabbedLines(xcoord,linesArray, 500, 8, pointsArray, 500, stabbedLines, 500, NumOfStbLines);
  

 }
