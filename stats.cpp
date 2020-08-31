#include "stats.h"
using namespace Statistics;
Stats Statistics::ComputeStatistics(const std::vector<float>& n) {
	Stats s;
	s.getAverage(n);
	s.getMax(n);
	s.getMin(n);
	return s;
    
}
