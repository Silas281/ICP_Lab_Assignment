#include "project.h"

//cuboidBlocks derived from sqrBaseRectBlocks
	//getters
	double cuboidBLocks::getWidth(){return width;}
	double cuboidBLocks::getHeight(){return height;}
	double cuboidBLocks::getLength(){return length;}
	vector<cuboidBLocks> cuboidBLocks::getCuboidVectors(){
		return cuboidVectors;		
	}
	//setters
	void cuboidBLocks::setCuboidVectors(){
		setSqrRects();//get the list of all sqrRectBlocks
		for(sqrBaseRectBlocks figure:getSqrRects()){
			if(figure.getWidth()==figure.getHeight() && figure.getHeight()==figure.getLength()){
				cuboidBLocks cub;
				cub.width=figure.getWidth();
				cub.height=figure.getHeight();
				cub.length=figure.getLength();
				cuboidVectors.push_back(cub);
				
			}
		}
	}
