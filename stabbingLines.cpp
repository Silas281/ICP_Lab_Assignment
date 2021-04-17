#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <fstream>

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
// Declaring the prototype functions
//void readPoints(ifstream& inPutPointFile, Point pointsArray[], const int MaxPntsSize, int& numPoints);


void readPoints(ifstream& inPutPointFile, Point pointsArray[], const int MaxPntsSize, int& numPoints){

  //numPoints;
  //pointsArray[numPoints];
  int c,d,e;

  for(int i = 0; i < numPoints; i++){
    inPutPointFile>>c>>d>>e;
    pointsArray[i] = {c,d,e};
  //  cout<<"Point ID: "<<pointsArray[i].Pid << "\nX: "<< pointsArray[i].p_x<< "\nY: "<< pointsArray[i].p_y<<"\n\n";

  }

  inPutPointFile.close();

}

void readLines(ifstream& inPutLineFile, Line linesArray[], const int MaxLnsSize, int& numLines){


  //numLines;
  //linesArray[numLines];
  int f,g,h;

  for(int i = 0; i < numLines; i++){
    inPutLineFile>>f>>g>>h;
    linesArray[i] = {f,g,h};
    //cout<<"Line ID: "<<linesArray[i].Lid << "\nP1: "<< linesArray[i].p1<< "\nP2: "<< linesArray[i].p2<<"\n\n";
  }

  inPutLineFile.close();
}

void printLineByCoords(LineId lid, Line linesArray[], const int MaxLnsSize, Point pointsArray[], const int MaxPntsSize){

  //lid;

  Line chosenLine = linesArray[lid];
  int x1, y1,x2,y2;

  Point cp1 = pointsArray[chosenLine.p1];
  Point cp2 = pointsArray[chosenLine.p2];

  x1 = cp1.p_x;
  y1 = cp1.p_y;

  x2 = cp2.p_x;
  y2 = cp2.p_y;


  cout<<"Chosen Line:"<< lid << "\nPoints: " << cp1.Pid <<" , "<< cp2.Pid
    <<"\nCoords: (" << x1 << ","<<y1 <<") , ("<< x2 << ","<<y2 <<")\n\n";

}

void getStabbedLines (const int xcoord, Line linesArray[], const int MaxLnsSize, const int NumLines, Point pointsArray[],
  const int MaxPtsSize, Line stabbedLines[], const int MaxStbSize, int& NumOfStbLines){


    //xcoord;
    //NumOfStbLines;
    //linesArray[NumLines];
    //int numPoints;
    //pointsArray[numPoints];
    int temp = 0;

    //stabbedLines[NumOfStbLines];

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


int main() {

  ifstream inPutPointFile("inPutPointFile.txt");
  ifstream inPutLineFile("inPutLineFile.txt");
  Point pointsArray[8];
  Line linesArray[5];
  Line stabbedLines[5];
  int numPoints = 8;
  int numLines = 5;
  int lid = 0;
  int NumOfStbLines = 0;

  readPoints(inPutPointFile, pointsArray,500,numPoints);
  readLines(inPutLineFile, linesArray,500,numLines);
  //printLineByCoords(0, linesArray, 500, pointsArray, 500);

  getStabbedLines(lid,linesArray, 500, 8, pointsArray, 500, stabbedLines, 500, NumOfStbLines);





 }
