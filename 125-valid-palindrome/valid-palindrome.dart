class Solution {
  bool isPalindrome(String s) {
    // solution 1 
//  String newSWithoutSpecialCharacterAndLower=  s.replaceAll( RegExp(r'[^\w\s]+'),'').replaceAll(" ","").toLowerCas();  
//   String reverseString = newSWithoutSpecialCharacterAndLower.split("").reversed.join();
//     if(newSWithoutSpecialCharacterAndLower == reverseString) { 
// return true; 

//   }else{ 
// return false; 
//   }

// solution 2 
  String newSWithoutSpecialCharacterAndLower = s
      .replaceAll(RegExp(r'[^0-9a-zA-Z]+'), '')
      .replaceAll(" ", "")
      .toLowerCase();

  int end = newSWithoutSpecialCharacterAndLower.length - 1;
  for (int i = 0; i < (newSWithoutSpecialCharacterAndLower.length / 2); i++) {
    if (newSWithoutSpecialCharacterAndLower[i] !=
        newSWithoutSpecialCharacterAndLower[end - i]) {
      return false;
    }
  }
return true;
  }
}