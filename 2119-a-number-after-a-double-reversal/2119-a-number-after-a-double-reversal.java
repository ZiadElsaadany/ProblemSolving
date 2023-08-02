class Solution {
     public boolean isSameAfterReversals(int num) {
      
   

//  1200 -->21
//  13000 --> 31
// 1205 --> 5021

         // 12006

// 12006
// 13%3 = 1
// 12%3 = 0
// 1000 %2 = 0 
// 1200 %2=0 
// 1200 % 3= 0
// 1800 %9 = 0
// 1800%10 = 0
// 

if(num != 0 &&  num%10 == 0 ) {  
return false;
}
return true; 









// String s=Integer.toString(num);  
// if(s.length() == 1 && s.equals( "0") ) { 
// return true;  
// }else{
    
//    if(s.charAt(s.length()-1) != '0') {
//   return true; 
//  }
// else{   
// return  false;
// }  
//  }
   
 }
     }

