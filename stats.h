#include <vector>
#include<cmath>
#include<climits>
#include<algorithm>
using namespace std;

namespace Statistics {
	class Stats
	{
	public:
		
		float average;
		float max=INT_MIN;
	    float min=INT_MAX;
	    static bool isNAN(float num1,float num2)
	    {
	        return !isnan(num1)||!isnan(num2);
	    }
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
		    
			max=*max_element(statsData.begin(),statsData.end(),isNAN);
			
		}
		void computeMin(const std::vector<float>& statsData)
		{
			
		    min=*min_element(statsData.begin(),statsData.end(),isNAN);
		}
		
    };
	    
Stats ComputeStatistics(const std::vector<float>& statsData);
}
