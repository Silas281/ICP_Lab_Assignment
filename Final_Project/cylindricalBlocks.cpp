
#include "project.h"

//cylindricalBlocks() derived form sqrBaseRectBlcks
	//getters
	double cylindricalBlocks::getDiameter(){
		return diameter;
	}
	double cylindricalBlocks::getLength(){
		return length;
	}
	vector<cylindricalBlocks> cylindricalBlocks::getCylinders(){
		return cylinders;		
	}
	//setters
	void cylindricalBlocks::setCylinders(){
		setSqrRects();//get the list of all sqrRectBlocks
		for(sqrBaseRectBlocks figure:getSqrRects()){
				cylindricalBlocks cyln;
				cyln.diameter=figure.getWidth();
				cyln.length=figure.getLength();
				cylinders.push_back(cyln);
		}
	}
	
		//sort  CylindricalBlocks  according to diameter
	
	void cylindricalBlocks::sortCylindricalBlocks(){
			sort(cylinders.begin(),cylinders.end(),less_than_key());
			for(cylindricalBlocks figure:cylinders){
				cout<<figure.diameter<<endl;
			}
			
	}
	
	//sort CylindricalBlocks according to surface area
	
void cylindricalBlocks::sortSurface(){
	sort(cylinders.begin(),cylinders.end(),area_less_than_key());
	for(cylindricalBlocks figure:cylinders){
		cout<<2*(figure.diameter/2)*M_PI*((figure.diameter/2)+figure.length)<<endl;
	}
}

//sort  CylindricalBlocks according to volume

void cylindricalBlocks::sortVolume(){
	sort(cylinders.begin(),cylinders.end(),volume_less_than_key());
	for(cylindricalBlocks figure:cylinders){
		cout<<M_PI*pow((figure.diameter/2),2)*figure.length<<endl;
	}
}

//sort  CylindricalBlocks  according to length
	void cylindricalBlocks::sortCylindricalBlocksLength(){
			sort(cylinders.begin(),cylinders.end(),l_less_than_key());
			for(cylindricalBlocks figure:cylinders){
				cout<<figure.length<<endl;
			}
			
	}
