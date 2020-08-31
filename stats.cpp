#include "stats.h"
using namespace Statistics;
Stats Statistics::ComputeStatistics(const std::vector<float>& n) {
	Stats s;
	s.computeAverage(n);
	s.computeMax(n);
	s.computeMin(n);
	return s;
    
}

