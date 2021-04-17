std::ifstream is("inPutPointFile.txt");

int numPoints = 5;
Point pointsArray[numPoints];
int c,d,e;

for(int i = 0; i < numPoints; i++){
  is>>c>>d>>e;
  pointsArray[i] = {c,d,e};
  cout<<pointsArray[i].p_x;
}

is.close();



std::ifstream is("inPutLineFile.txt");

int numLines = 5;
Line linesArray[numLines];
int f,g,h;

for(int i = 0; i < numLines; i++){
  is>>f>>g>>h;
  linesArray[i] = {f,g,h};
  cout<<"Line ID: "<<linesArray[i].Lid << "\nP1: "<< linesArray[i].p1<< "\nP2: "<< linesArray[i].p2<<"\n\n";
}

is.close();



int lineID = 0;

Line chosenLine = linesArray[lineID];
int x1, y1,x2,y2;

Point cp1 = pointsArray[chosenLine.p1];
Point cp2 = pointsArray[chosenLine.p2];

x1 = cp1.p_x;
y1 = cp1.p_y;

x2 = cp2.p_x;
y2 = cp2.p_y;

cout<<"Chosen Line:"<< lineID << "\nPoints: " << cp1.Pid <<" , "<< cp2.Pid
  <<"\nCoords: (" << x1 << ","<<y1 <<") , ("<< x2 << ","<<y2 <<")";


  int xcoord = 6;
  int NumOfStbLines = 0;
  int temp = 0;

  Line s[5];

  for(int i = 0; i < numLines; i++){
    if(pointsArray[linesArray[i].p2].p_x >= xcoord){
      if(pointsArray[linesArray[i].p1].p_x <= xcoord){
        s[temp] = linesArray[i];
        temp++;
        NumOfStbLines++;
      }
    }
  }

  cout<<"Number of Stabbed Lines: "<< NumOfStbLines<< "\n\n";


  for(Line l : s){
    printLineByCoords(l.Lid, linesArray, 500, pointsArray, 500);
  }
