#include <vector>
#include<cmath>

namespace Statistics {
	class Stats
	{
	public:
		float sum = 0;
		float average;
		float max=0;
	    float min=1000000000.0;

	
		float getAverage(const std::vector<float>& n)
		{
		    for (int i = 0; i < n.size(); i++)
			{
				sum += n[i];
			}
			return(sum/n.size());
		}
		float getMax(const std::vector<float>& n)
		{
		    for (int i = 0; i < n.size(); i++)
			{
				if (max < n[i])
				{
					max = n[i];
				}
			}
			return(max);
		}
		float getMin(const std::vector<float>& n)
		{
		    for (int i = 0; i < n.size(); i++)
			{
				if (min < n[i])
				{
					min = n[i];
				}
			}
			return(min);
		}
		
    };
	    
Stats ComputeStatistics(const std::vector<float>& n);
}

