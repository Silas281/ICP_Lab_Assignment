
#include "project.h"
	
int main(){
	


rectBlocks rect;


cout<<"================="<<endl;
cout<<"Rectangle Blocks by dimensions"<<endl;
cout<<"Width |height |length"<<endl;
cout<<"----------------------"<<endl;
rect.setRectVector();
for(rectBlocks fig:rect.getRects()){
	cout<<fig.getWidth()<<"\t "<<fig.getHeight()<<" \t"<<fig.getLength()<<endl;
}
cout<<""<<endl;
cout<<"==================="<<endl;
cout<<"Square Base Blocks by dimensions"<<endl;
cout<<"Width | height |length"<<endl;
cout<<"-----------------------"<<endl;
sqrBaseRectBlocks sqr;
sqr.setSqrRects();
for(sqrBaseRectBlocks fig:sqr.getSqrRects()){
	cout<<fig.getWidth()<<"\t "<<fig.getHeight()<<"\t "<<fig.getLength()<<endl;
}
cout<<""<<endl;
cout<<"===================="<<endl;
cout<<"Cuboid Blocks by dimensions"<<endl;
cout<<"Width |height |length"<<endl;
cout<<"--------------------------"<<endl;
cuboidBLocks cub;
cub.setCuboidVectors();
for(cuboidBLocks fig:cub.getCuboidVectors()){
	cout<<fig.getWidth()<<"\t "<<fig.getHeight()<<"\t "<<fig.getLength()<<endl;
}
cout<<""<<endl;

cylindricalBlocks cyn;
cyn.setCylinders();

cout<<"===================="<<endl;
cout<<"Cylindrical Blocks by "<<endl;
cout<<"Diameter| height"<<endl;
cout<<"------------------"<<endl;
for(cylindricalBlocks fig:cyn.getCylinders()){
	cout<<fig.getDiameter()<<"\t    "<<fig.getLength()<<endl;
}

cout<<"================================================"<<endl;
cout<<"Cylindrical Blocks By Diameter in Ascending order"<<endl;
cout<<"-------------------------------------------------"<<endl;
cyn.sortCylindricalBlocks(); //sort and print diameters 

cout<<""<<endl;
cout<<"================================================"<<endl;
cout<<"Cylindrical Blocks By Surface in Ascending order"<<endl;
cout<<"-------------------------------------------------"<<endl;
cyn.sortSurface(); //sort and display surface areas

cout<<""<<endl;
cout<<"================================================"<<endl;
cout<<"Cylindrical Blocks By Volume in Ascending order"<<endl;
cout<<"-------------------------------------------------"<<endl;
cyn.sortVolume(); //sort and display volume of cylinders
cout<<""<<endl;

cout<<""<<endl;
cout<<"================================================"<<endl;
cout<<"Cylindrical Blocks By length in Ascending order"<<endl;
cout<<"-------------------------------------------------"<<endl;
cyn.sortCylindricalBlocksLength(); //sort and print out lengths
cout<<""<<endl;
cout<<"==============================="<<endl;
cout<<"Spherical Blocks by diameters"<<endl;
cout<<"------------------------------"<<endl;

sphericalBlocks sphere;
sphere.setSpheres();
for(sphericalBlocks fig:sphere.getSphericalBlocks()){  
	cout<<fig.getDiameter()<<endl;//loop and print diameters
}
cout<<""<<endl;
cout<<"================================================"<<endl;
cout<<"Spherical Blocks By Diameter in Ascending order"<<endl;
cout<<"-------------------------------------------------"<<endl;
sphere.sortSphericalBlocks(); //sort and print diameters

cout<<""<<endl;
cout<<"================================================"<<endl;
cout<<"Spherical Blocks By Surface in Ascending order"<<endl;
cout<<"-------------------------------------------------"<<endl;
sphere.sortSurface(); //sort surface areas and display to users

cout<<""<<endl;
cout<<"================================================"<<endl;
cout<<"Spherical Blocks By Volume in Ascending order"<<endl;
cout<<"-------------------------------------------------"<<endl;
sphere.sortVolume(); //sort and display volumes of spheres in ascending order
cout<<""<<endl;
cout<<""<<endl;
return 0;
}

