
/*
    Given 2 strings, return true if anagrams (same letters diff order)
    Ex. s = "anagram" & t = "nagaram" -> true, s = "rat" & t = "car" -> false

    Count chars, strings should have same # of chars if anagram

    Time: O(n)
    Space: O(26)
*/

class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.length() != t.length()){return false;}

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if (s == t){return true;}
        else{return false;}

    }
};