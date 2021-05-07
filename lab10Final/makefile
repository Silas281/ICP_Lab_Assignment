testStabLineProg: getStabbedLines.o printLineByCoords.o readLines.o readPoints.o  testStabLineProg.o 
	g++ getStabbedLines.o printLineByCoords.o readLines.o readPoints.o -o testStabLineProg
	
readPoints.o: readPoints.cpp
	g++ -c readPoints.cpp 	

readLines.o: readLines.cpp
	g++ -c readLines.cpp

printLineByCoords.o: printLineByCoords.cpp
	g++ -c printLineByCoords.cpp

getStabbedLines.o: getStabbedLines.cpp
	g++ -c getStabbedLines.cpp

testStabLineProg.o: testStabLineProg.cpp
	g++ -c testStabLineProg.cpp

clean:
	rm *.o testStabLineProg



