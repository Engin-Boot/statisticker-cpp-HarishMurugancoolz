#include <vector>
#include<cmath>
#include<climits>

namespace Statistics {
	class Stats
	{
	public:
		
		float average;
		float max=INT_MIN;
	    float min=INT_MAX;
        void computeAverage(const std::vector<float>& statsData)
		{
		    float sum = 0.0;
		    int count_valid_data=0;
		    for (int i = 0; i < statsData.size(); i++)
			{
			   if(!isnan(statsData[i]))
			   {
				    sum += statsData[i];
				    count_valid_data++;
			   }
			}
			average=(sum/count_valid_data);
		}
		void computeMax(const std::vector<float>& statsData)
		{
		    for (int i = 0; i < statsData.size(); i++)
			{
				if (max < statsData[i]&&!isnan(statsData[i]))
				{
					max = statsData[i];
				}
			}
		}
		void computeMin(const std::vector<float>& statsData)
		{
			
		    for (int i = 0; i < statsData.size(); i++)
			{
				if (min > statsData[i]&&!isnan(statsData[i]))
				{
					min = statsData[i];
				}
			}
		}
		
    };
	    
Stats ComputeStatistics(const std::vector<float>& statsData);
}
