class Solution {
  bool isAnagram(String s, String t) {
      
  if(s.length!=t.length)  { 
return false;
  }
  
  List<String> lst  = s.split("");
  List<String> lst2  = t.split("");
  
  lst.sort();  // n log n 
  lst2.sort(); 
  
  for(int i = 0 ; i<lst.length ; i++  )  { 
      if(lst[i]!=lst2[i])
      {  
      return false;
      }  }

      return true; 
   
  }
}