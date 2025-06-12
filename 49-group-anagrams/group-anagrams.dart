class Solution {
  List<List<String>> groupAnagrams(List<String> strs) {
 List<String> strsTest = [...strs];
  
  List<String>  strsIndividualSorted= [];
  
  int  i = 0 ; 
  while(i < strsTest.length )  { 
   List<String>  z= strsTest[i].split("");
    z.sort() ; 
     strsIndividualSorted.add(z.join());
    i++ ;
  }
  
  List<List<String>>   strsGroupSorted = [] ; 
  Set<int> visited = {};

  for(int i = 0 ; i<strsIndividualSorted.length; i++ ) { 
   if (visited.contains(i)) continue;
    String a= strsIndividualSorted[i]; 
     List<String>   z = [] ;
   for(int  j = i  ;  j < strsIndividualSorted.length; j++ ){ 
   
   if(a== strsIndividualSorted[j]) {  
  z.add(strs[j]);
     visited.add(j);
   }
   }
    
      
    strsGroupSorted.add(z);
   
  }
  
  return strsGroupSorted;
  }
  
}