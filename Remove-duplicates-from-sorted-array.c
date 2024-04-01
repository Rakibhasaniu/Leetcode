class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
      return 0; // Handle empty vector case
    }
    
    // Use two pointers: i to track current position and j to iterate
    int i = 0;
    for (int j = 1; j < nums.size(); j++) {
      if (nums[i] != nums[j]) {
        // Move unique element to next position (i + 1)
        i++;
        nums[i] = nums[j];
      }
    }
    
    // Return the number of unique elements (i + 1)
    return i + 1;
  }
    
};