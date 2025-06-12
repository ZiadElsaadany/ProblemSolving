class Solution {
  List<List<String>> groupAnagrams(List<String> strs) {
Map<String, List<String>> anagramMap = { };
  for(String singleWord in strs ) 
  {  
    //  word = "eat"
    //  word =  "tea"
     
   List<String> sortedWordList =singleWord.split("")..sort();
    String wordAfterSorted = sortedWordList.join();   
    // word = "eat"
    // word  ="eat"
    
     if(!anagramMap.containsKey(wordAfterSorted)){  
     anagramMap[wordAfterSorted]= [] ; 
     }
    
     anagramMap[wordAfterSorted]!.add(singleWord);
   
  }
  return anagramMap.values.toList();
  } 


}