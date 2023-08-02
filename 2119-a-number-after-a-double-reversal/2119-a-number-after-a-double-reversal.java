class Solution {
     public boolean isSameAfterReversals(int num) {
      
   

//  1200 -->21
//  13000 --> 31
// 1205 --> 5021

         // 12006

// 12006
String s=Integer.toString(num);  
if(s.length() == 1 && s.equals( "0") ) { 
return true;  
}else{
    
   if(s.charAt(s.length()-1) != '0') {
  return true; 
 }
else{   
return  false;
}  
 }
   
 }
     }

