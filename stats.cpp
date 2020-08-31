#include "stats.h"
using namespace Statistics;
Stats Statistics::ComputeStatistics(const std::vector<float>& n) {
	Stats s;
	s.computeAverage(n);
	if(n.size()==0)
	    s.min=s.max=(0.0/0.0);
	else
	{
	    s.computeMax(n);
	    s.computeMin(n);
	}
	return s;
    
}

