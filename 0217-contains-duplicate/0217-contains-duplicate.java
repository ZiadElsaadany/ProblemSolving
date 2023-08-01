class Solution {
    public boolean containsDuplicate(int[] nums) {
        

        Set<Integer> mySet = new HashSet<>();
        //mySet -->  before adding number 
    
        for(int i = 0 ; i<nums.length ;i++  ) {  
       
            mySet.add(nums[i]) ;
        }
        return mySet.size() != nums.length; 

    }
}