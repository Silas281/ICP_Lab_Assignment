#include "project.h"


//sqrBaseRectBlocks derived from rectBlocks class
	//getters
	double sqrBaseRectBlocks::getWidth(){return width;}
	double sqrBaseRectBlocks::getHeight(){return height;}
	double sqrBaseRectBlocks::getLength(){return length;}
	vector<sqrBaseRectBlocks> sqrBaseRectBlocks::getSqrRects(){
		return sqrRectVectors;		
	}
	//setters
	void sqrBaseRectBlocks::setSqrRects(){
		setRectVector();//get the list of all rectBlocks
		for(rectBlocks figure:getRects()){
			if(figure.getWidth()==figure.getHeight()){
				sqrBaseRectBlocks sqr;
				sqr.width=figure.getWidth();
				sqr.height=figure.getHeight();
				sqr.length=figure.getLength();
				sqrRectVectors.push_back(sqr);
			}
		}
	}
