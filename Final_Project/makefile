testProg: project.h rectBlocks.o sqrBaseRectBlocks.o cylindricalBlocks.o cuboidBLocks.o sphericalBlocks.o testProg.o
	g++ -std=c++11 -o testProg rectBlocks.o sqrBaseRectBlocks.o cylindricalBlocks.o cuboidBLocks.o sphericalBlocks.o testProg.o -I.
	
rectBlocks.o : project.h rectBlocks.cpp
	g++ -std=c++11 -c rectBlocks.cpp -I.
	
sqrBaseRectBlocks.o : project.h sqrBaseRectBlocks.cpp
	g++ -std=c++11 -c sqrBaseRectBlocks.cpp -I.
	
cylindricalBlocks.o : project.h cylindricalBlocks.cpp
	g++ -std=c++11 -c cylindricalBlocks.cpp -I.
	
cuboidBLocks.o : project.h cuboidBLocks.cpp
	g++ -std=c++11 -c cuboidBLocks.cpp -I.
	
sphericalBlocks.o : project.h sphericalBlocks.cpp
	g++ -std=c++11 -c sphericalBlocks.cpp -I.
	
testProg.o : project.h testProg.cpp
	g++ -std=c++11 -c testProg.cpp -I.

clean:
	rm *.o testProg


