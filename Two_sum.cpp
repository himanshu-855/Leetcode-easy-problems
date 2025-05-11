/*
Efficient: 
We make use of Map. 
1. Pick every element in an array and calculate the difference target pickedElem 
2. Check if the map has the diff value and its index is not equal to the index of picked elem, 
3. If yes, we have our solution, the indices of [pickedElem, diff in map], return. 
4. If no, store the element and its index in the map, and continue by picking. next element, keep repeating until you reach the end of array.
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret;
        int size = nums.size();
        int diff;
        unordered_map<int, int>m;
        for(int i = 0; i < size; i++)
        {
            diff = target - nums[i];
            if(m.find(diff) != m.end() && m.find(diff)->second != i)
            {
                ret.push_back(i);
                ret.push_back(m.find(diff)->second);
                return ret;
            }
            m[nums[i]] = i;
        } 
        return ret;
    }

 // Time Complexity = O(n)

//**********************************************************************************************************End*****************************************************************************************************//

};
