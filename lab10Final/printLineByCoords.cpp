#include "stabbingLines.h"

void printLineByCoords(LineId lid, Line linesArray[], const int MaxLnsSize, Point pointsArray[], const int MaxPntsSize){

  Line chosenLine = linesArray[lid];
  int x1, y1,x2,y2;

  Point cp1 = pointsArray[chosenLine.p1];
  Point cp2 = pointsArray[chosenLine.p2];

  x1 = cp1.p_x;
  y1 = cp1.p_y;

  x2 = cp2.p_x;
  y2 = cp2.p_y;


  cout<<"Chosen Line:"<< lid << "\nPoints' IDs: " << cp1.Pid <<" , "<< cp2.Pid<<"\nCoords: (" << x1 << ","<<y1 <<") , ("<< x2 << ","<<y2 <<endl;

}
