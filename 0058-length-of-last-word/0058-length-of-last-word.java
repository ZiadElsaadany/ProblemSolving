class Solution {
    public int lengthOfLastWord(String s) {
        
String str = s; 
String[] arrOfStr = str.split(" ");
return arrOfStr[arrOfStr.length-1].length();
    }
}