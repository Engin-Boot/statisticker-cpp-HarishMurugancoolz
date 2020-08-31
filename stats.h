#include <vector>
#include<cmath>
#include<climits>

namespace Statistics {
	class Stats
	{
	public:
		float sum = 0.0;
		float average;
		float max=INT_MIN;
	    	float min=INT_MAX;

	
		void computeAverage(const std::vector<float>& n)
		{
		    for (int i = 0; i < n.size(); i++)
			{
				sum += n[i];
			}
			average=(sum/n.size());
		}
		void computeMax(const std::vector<float>& n)
		{
		    for (int i = 0; i < n.size(); i++)
			{
				if (max < n[i])
				{
					max = n[i];
				}
			}
		}
		void computeMin(const std::vector<float>& n)
		{
		    for (int i = 0; i < n.size(); i++)
			{
				if (min > n[i])
				{
					min = n[i];
				}
			}
		}
		
    };
	    
Stats ComputeStatistics(const std::vector<float>& n);
}
