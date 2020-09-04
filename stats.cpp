#include "stats.h"
using namespace Statistics;
Stats Statistics::ComputeStatistics(const std::vector<float>& StatsData) {
	Stats stats;
	stats.computeAverage(StatsData);
	if(StatsData.size()==0)
	    stats.min=stats.max=(0.0/0.0);
	else
	{
	    stats.computeMax(StatsData);
	    stats.computeMin(StatsData);
	}
	return stats;
    
}


