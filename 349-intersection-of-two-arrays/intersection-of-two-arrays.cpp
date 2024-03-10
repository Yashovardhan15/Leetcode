class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int i=0,j=0;
        vector<int> ans;

        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        while(i<m && j<n){
            if(nums1[i] == nums2[j]){
                int size = ans.size();
                if(size == 0){
                    ans.push_back(nums1[i]);
                }
                else if(ans[size-1] != nums1[i]){
                    ans.push_back(nums1[i]);
                } 
                i++;
                j++;
                
            }
            else if( nums1[i] > nums2[j]){
                j++;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};