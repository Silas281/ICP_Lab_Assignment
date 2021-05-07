#include "project.h"

//sphericalBlocks derived from cuboidBloks

	//getters
	double sphericalBlocks::getDiameter(){
		return diameter;
	}
	
	vector<sphericalBlocks> sphericalBlocks::getSphericalBlocks(){
		return spheres;
	}
	
	//setters
	void sphericalBlocks::setSpheres(){
		setCuboidVectors();//get the list of all cuboidBlocks
		for(cuboidBLocks figure:getCuboidVectors()){
				sphericalBlocks sphere;
				sphere.diameter=figure.getWidth();
				spheres.push_back(sphere);
		}
	}
	//sort sphericalBlocks according to diameter
	
	void sphericalBlocks::sortSphericalBlocks(){
			sort(spheres.begin(),spheres.end(),less_than_key());
			for(sphericalBlocks figure:spheres){
				cout<<figure.diameter<<endl;
			}
			
	}
	
	//sort sphericalBlocks according to surface area
	
void sphericalBlocks::sortSurface(){
	sort(spheres.begin(),spheres.end(),area_less_than_key());
	for(sphericalBlocks figure:spheres){
		cout<<pow((figure.diameter/2),2)*M_PI* 4<<endl;
	}
}

//sort sphericalBlocks according to volume

void sphericalBlocks::sortVolume(){
	sort(spheres.begin(),spheres.end(),volume_less_than_key());
	for(sphericalBlocks figure:spheres){
		cout<<pow((figure.diameter/2),3)*M_PI* (4/3)<<endl;
	}
}
