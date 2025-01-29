class Solution {
public:
    int maxArea(vector<int>& height) {
        int ptr_low = 0;
        int ptr_high = height.size() - 1;
        int max_water = 0;
        while(ptr_low<ptr_high)		
        {
            int area = min(height[ptr_low],height[ptr_high])*(ptr_high - ptr_low);
            max_water = max(max_water, area);

    	    if(height[ptr_low]<=height[ptr_high]){
    		    ptr_low++;
    	    }else{
    		    ptr_high--;
    	    }
        }
        return max_water;
    }
};