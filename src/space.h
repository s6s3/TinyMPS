#ifndef MPS_SPACE_H_INCLUDED
#define MPS_SPACE_H_INCLUDED

#include<Eigen/Dense>

using namespace Eigen;
using namespace std;

class Space
{
public:
	Particles particles;
	int dimension;

	
	Space();
	virtual ~Space();

};


#endif // MPS_SPACE_H_INCLUDED