#include <vector>
#include<cmath>
#include<climits>
using namespace std;

namespace Statistics {
	class Stats
	{
	public:
		float average;
		float max=INT_MIN;
	    	float min=INT_MAX;
	    
	    	float getValidMaxNum(float max,float num)
	   	 {
	        	if(!isnan(num)&&max<num)
	            		return num;
	        	return max;
	    	 }
	    
	    	float getValidMinNum(float min,float num)
	    	{
	        	if(!isnan(num)&&min>num)
	            		return num;
	       
	       		return min;
		}
	    	void computeAverage(const std::vector<float>& statsData)
		{
		    float sum = 0.0;
		    int count_valid_data=0;
		    for (unsigned int i = 0; i < statsData.size(); i++)
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
		    for(unsigned int i=0;i<statsData.size();i++)
		        {
		            max=(getValidMaxNum(max,statsData[i]));
		            
		        }
		}
		void computeMin(const std::vector<float>& statsData)
		{
			for(unsigned int i=0;i<statsData.size();i++)
		        {
		            min=(getValidMinNum(min,statsData[i]));
		            
		        }
		}
		
    };
	    
Stats ComputeStatistics(const std::vector<float>& statsData);
}
