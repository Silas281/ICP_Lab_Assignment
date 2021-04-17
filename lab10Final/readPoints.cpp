#include "stabbingLines.h"

void readPoints(ifstream& inPutPointFile, Point pointsArray[], const int MaxPntsSize, int& numPoints){

  int c,d,e;

  for(int i = 0; i < numPoints; i++){
    inPutPointFile>>c>>d>>e;
    pointsArray[i] = {c,d,e};
    //cout<<"Point ID: "<<pointsArray[i].Pid << "\nX: "<< pointsArray[i].p_x<< "\nY: "<< pointsArray[i].p_y<<"\n\n";

  }

  inPutPointFile.close();

}
