#include "project.h"

		
		
		//getters
		double rectBlocks::getWidth(){
			return width;
		}
		double rectBlocks::getHeight(){
			return height;
		}
		double rectBlocks::getLength(){
			return length;
		}
		vector<rectBlocks> rectBlocks::getRects(){
			return rectVectors;
		}
		//setters
		void rectBlocks::setWidth(double w){
			width=w;
		}
		void rectBlocks::setHeight(double h){
			height=h;
		}
		void rectBlocks::setLength(double l){
			length=l;			
		}
		//this method reads from the text file and stores the rectBlocks 
		//in an array of vectors called rectVectrs
		void rectBlocks::setRectVector(){
			ifstream inFile("dataBlocks.txt", ios::in); 
			double w,h,l;
			while (inFile.good()) {
				inFile >> w >> h>>l;
				if (!inFile.eof()) {
				rectBlocks temp;
				temp.setWidth(w);
				temp.setHeight(h);
				temp.setLength(l);
				rectVectors.push_back(temp);
				
				}
		}
		}
		
