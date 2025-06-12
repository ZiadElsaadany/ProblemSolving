class Solution {
  List<int> topKFrequent(List<int> nums, int k) {
    Map<int, List<int>> map = {};
  for (int number in nums) {
    if (!map.containsKey(number)) {
      map[number] = [];
    }
    map[number]!.add(number);
  }

  print(map.toString());

  List<MapEntry<int, int>> listOfPairs = [];
  for (var m in map.entries) {
    listOfPairs.add(MapEntry(m.key, m.value.length));
  }
  listOfPairs.sort((a, b) => b.value.compareTo(a.value));

  List<int> answer = [];
  for (int i = 0; i < k; i++) {
    answer.add(listOfPairs[i].key);
  }
  return answer;
  }
}