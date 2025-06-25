class Solution {
  int removeElement(List<int> nums, int val) {
  // [3,2,2,3]
  // val = 3 
  int left= 0 ; 
  for ( int i  =  0 ; i<nums.length ; i++ )
  {  
  if(  nums[i] !=val) {
    nums[left] = nums[i]; 
    left++; 

  }  
  }
return left ;  
  }
}