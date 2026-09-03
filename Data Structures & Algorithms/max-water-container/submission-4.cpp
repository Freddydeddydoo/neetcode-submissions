class Solution {
public:
    int maxArea(vector<int>& heights) {

        int max_area = 0;
        int l = 0;
        int r = heights.size() - 1;

        while(l < r){
            int length = r - l;
            int width = heights[l] < heights[r] ? 
            heights[l]: heights[r];

            max_area = length * width > max_area? length * width : max_area;

            if(heights[l] < heights[r]){l++;}
            else if(heights[r] < heights[l]){r--;}
            else{
                r--;
                l++;
            }

        }

        return max_area;        
    }
};
