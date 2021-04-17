void readLines(ifstream& inPutLineFile, Line linesArray[], const int MaxLnsSize, int& numLines){

  numLines;
  linesArray[numLines];
  int f,g,h;

  for(int i = 0; i < numLines; i++){
    inPutLineFile>>f>>g>>h;
    linesArray[i] = {f,g,h};
    cout<<"Line ID: "<<linesArray[i].Lid << "\nP1: "<< linesArray[i].p1<< "\nP2: "<< linesArray[i].p2<<"\n\n";
  }

  inPutLineFile.close();

}
