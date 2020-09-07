#include "stats.h"
using namespace Statistics;
Stats Statistics::ComputeStatistics(const std::vector<float>& StatsData) {
	Stats stats;
	
	if(StatsData.size()==0||stats.isAllNaN(StatsData))
	    stats.min=stats.max=stats.average=(0.0/0.0);
	else
	{
	    stats.computeAverage(StatsData);
	    stats.computeMax(StatsData);
	    stats.computeMin(StatsData);
	}
	return stats;
    
}


