class Solution {
  List<int> twoSum(List<int> numbers, int target) {
     int left = 0;
  int right = numbers.length - 1;

  //     left                           right
  //  [  2      ,     7      ,11     , 15 ]

  List<int> result = [];
  while (right > left) {
    int sum = numbers[left] + numbers[right];
    if (sum == target) {
      result = [left + 1, right + 1];
      break;
    } else if (sum > target) {
      right--;
    } else {
      left++;
    }
  }
  return result;
  }
}