class Solution {
  List<int> twoSum(List<int> nums, int target) {
    
    List<MapEntry<int, int>> indexedNums = nums.asMap().entries.toList();

  
    indexedNums.sort((a, b) => a.value.compareTo(b.value));

    int pointer1 = 0;
    int pointer2 = indexedNums.length - 1;


    while (pointer1 < pointer2) {
      int sum = indexedNums[pointer1].value + indexedNums[pointer2].value;
      if (sum == target) {
 
        return [indexedNums[pointer1].key, indexedNums[pointer2].key];
      } else if (sum > target) {
        pointer2--;
      } else {
        pointer1++;
      }
    }

    return [];
  }
}
