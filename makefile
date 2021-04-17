testStabLineProg: getStabbedLines.o printLineByCoords.o readLines.o readPoints.o stabbingBoys.o stabbingLines.o 
	g++ getStabbedLines.o printLineByCoords.o readLines.o readPoints.o stabbingBoys.o stabbingLines.o -o testStabLineProg

getStabbedLines.o: getStabbedLines.cpp
	g++ -c getStabbedLines.cpp

printLineByCoords.o: printLineByCoords.cpp
	g++ -c printLineByCoords.cpp

readLines.o: readLines.cpp
	g++ -c readLines.cpp

readPoints.o: readPoints.cpp
	g++ -c readPoints.cpp 

stabbingBoys.o: stabbingBoys.cpp
	g++ -c stabbingBoys.cpp

stabbingLines.o: stabbingLines.cpp
	g++ -c stabbingLines.cpp

clean:
	rm *.o testStabLineProg



