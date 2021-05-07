
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;
/*
 * this is the header file called project.h which contains the classes
 * and their methods declarations withoud body definitions
 * the body definitions of the classes methods and constructors are 
 * done in each of their respective .cpp files
 */
class rectBlocks{
		
		private:
		double width, height, length;	
		vector<rectBlocks> rectVectors; //a vector array to store rectangle objects
		
		public: 
		//getters
		double getWidth();
		double getHeight();
		double getLength();
		vector<rectBlocks> getRects();
		
		//setters
		void setWidth(double w);
		void setHeight(double h);
		void setLength(double l);
		
		//this method reads from the text file and stores the rectBlocks 
		//in an array of vectors called rectVectrs
		void setRectVector();
		
		
};

//sqrBaseRectBlocks derived from rectBlocks class
class sqrBaseRectBlocks: public rectBlocks {
	private: 
	double width,height,length; //dimensions - width=height
	vector<sqrBaseRectBlocks> sqrRectVectors; //container for square base rects
	
	public:
	//getters
	double getWidth();
	double getHeight();
	double getLength();
	vector<sqrBaseRectBlocks> getSqrRects();
	//setters
	void setSqrRects();
};

//cuboidBlocks derived from sqrBaseRectBlocks
class cuboidBLocks: public sqrBaseRectBlocks{
	private:
	double width, height, length; //dimensions of cuboids - w=h=l
	vector<cuboidBLocks> cuboidVectors;
	
	public:
	//getters
	double getWidth();
	double getHeight();
	double getLength();
	vector<cuboidBLocks> getCuboidVectors();
	//setters
	void setCuboidVectors();
};

//cylindricalBlocks() derived form sqrBaseRectBlcks
class cylindricalBlocks: public sqrBaseRectBlocks{
	private:
	double diameter;
	double length;
	vector<cylindricalBlocks> cylinders;
	public:
	//getters
	double getDiameter();
	double getLength();
	vector<cylindricalBlocks> getCylinders();
	//setters
	void setCylinders();
	
	struct less_than_key //a struct function to compare diameters of objects
{
	//operator function
    inline bool operator() (const cylindricalBlocks& c1, const cylindricalBlocks& c2) 
    {
        return (c1.diameter < c2.diameter);
    }
};
	void sortCylindricalBlocks(); 	//sort  CylindricalBlocks  according to diameter
			
	
	
	struct area_less_than_key //will be used later to sort areas
{
    inline bool operator() (const cylindricalBlocks& c1, const cylindricalBlocks& c2)
    {
		
        return 2*(c1.diameter/2)*M_PI*((c1.diameter/2)+c1.length)< 2*(c2.diameter/2)*M_PI*((c2.diameter/2)+c2.length); //area of cylinder
    }
};
void sortSurface(); //sort CylindricalBlocks according to surface area


	struct volume_less_than_key //will be used later to sort volumes
{
    inline bool operator() (const cylindricalBlocks& c1, const cylindricalBlocks& c2)
    {
		
        return M_PI*pow((c1.diameter/2),2)*c1.length<M_PI*pow((c2.diameter/2),2)*c2.length;
    }
};
void sortVolume(); //sort  CylindricalBlocks according to volume


	struct l_less_than_key //will be used later to sort lengths of objects
{
    inline bool operator() (const cylindricalBlocks& c1, const cylindricalBlocks& c2)
    {
        return (c1.length < c2.length);
    }
};
	void sortCylindricalBlocksLength(); //sort  CylindricalBlocks  according to length/height
}; 

//sphericalBlocks derived from cuboidBloks
class sphericalBlocks: public cuboidBLocks{
	private:
	double diameter;
	vector<sphericalBlocks> spheres;
	public:
	//getters
	double getDiameter();
	vector< sphericalBlocks> getSphericalBlocks();
	
	//setters
	void setSpheres();
	
	struct less_than_key //will be used later to sort diameters
{
    inline bool operator() (const sphericalBlocks& s1, const sphericalBlocks& s2)
    {
		//compare diameters
        return (s1.diameter < s2.diameter);
    }
};
	void sortSphericalBlocks();//sort sphericalBlocks according to diameter
	
	
	struct area_less_than_key //will be used later to sort surface areas
{
    inline bool operator() (const sphericalBlocks& s1, const sphericalBlocks& s2)
    {
		//compares areas of two spheres
        return (pow((s1.diameter/2),2)*M_PI* 4< (pow((s2.diameter/2),2)*M_PI*4));
    }
};
void sortSurface(); //sort sphericalBlocks according to surface area


	struct volume_less_than_key  //will be used later to sort volumes
{
    inline bool operator() (const sphericalBlocks& s1, const sphericalBlocks& s2)
    {
		//compares volumes of two spheres
        return (pow((s1.diameter/2),3)*M_PI* (4/3)< (pow((s2.diameter/2),3)*M_PI*(4/3)));
    }
};
void sortVolume(); //sort sphericalBlocks according to volume
	
};



