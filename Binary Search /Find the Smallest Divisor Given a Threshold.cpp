class Solution {
int sumofdiv(vector<int>& nums, int div){
    int sum=0;
    int n=nums.size();
    for(int i=0;i<n;i++){
        sum=sum+ceil((double)(nums[i])/(double)(div));
    }
    return sum;
}
public:

    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1,high=*max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid=(low+high)/2;
            if(sumofdiv(nums,mid)<=threshold){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;

    }
    
};