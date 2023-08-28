/*
Q.1. You have been given a string str of words.
You need to replace all the spaces between words with @40.
*/
/*
string replaceSpaces(string &str) // time complexity = O(n) // space complexity = O(n) where n is string length
{
    string temp = "";
    for(int i = 0; i<str.length(); i++)
    {
        if(str[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(str[i]);
        }
    }
    return temp;
}
*/

/*
Q.2. Given two strings s and part, perform the following operation on s until all occurrences of the substring part are removed:
Find the leftmost occurrence of the substring part and remove it from s.
Return s after removing all occurrences of part.
A substring is a contiguous sequence of characters in a string.

Example 1:
Input: s = "daabcbaabcbc", part = "abc"
Output: "dab"
Explanation: The following operations are done:
- s = "daabcbaabcbc", remove "abc" starting at index 2, so s = "dabaabcbc".
- s = "dabaabcbc", remove "abc" starting at index 4, so s = "dababc".
- s = "dababc", remove "abc" starting at index 3, so s = "dab".
Now s has no occurrences of "abc".
Example 2:

Input: s = "axxxxyyyyb", part = "xy"
Output: "ab"
Explanation: The following operations are done:
- s = "axxxxyyyyb", remove "xy" starting at index 4 so s = "axxxyyyb".
- s = "axxxyyyb", remove "xy" starting at index 3 so s = "axxyyb".
- s = "axxyyb", remove "xy" starting at index 2 so s = "axyb".
- s = "axyb", remove "xy" starting at index 1 so s = "ab".
Now s has no occurrences of "xy".
*/

/*
    string removeOccurence(string s, string part)
    {
        while(s.length()!=0 && s.find(part) < s.length())
        {
            s.erase(s.find(part), part.length());
        }
        return s;
    }
*/

/*
Q.3. Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.
In other words, return true if one of s1's permutations is the substring of s2.
s1 and s2 consist of lowercase English letters.

Example 1:
Input: s1 = "ab", s2 = "eidbaooo"
Output: true
Explanation: s2 contains one permutation of s1 ("ba").

Example 2:
Input: s1 = "ab", s2 = "eidboaoo"
Output: false
*/

/*

bool checkEqual(int a[26], int b[26])
{
    for(int i=0; i<26; i++)
    {
        if(a[i] != b[i])
        {
            return 0;
        }
    }
    return 1;
}

bool checkInclusion(string s1, string s2) // time complexity = O(m+n) where m and n are lengths of s1 and s2 // space complexity = O(1)
{
    int count1[26] = {0};
    for(int i=0; i<s1.length(); i++)
    {
        int index = s1[i] - 'a';
        count1[index]++;
    }
    int i =0;
    int windowSize = s1.length();
    int count2[26] = {0};
    while(i < windowSize && i< s2.length())
    {
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }
    if(checkEqual(count1, count2))
    {
        return 1;
    }

    while(i<s2.length())
    {
        char newChar = s2[i];
        int index = newChar - 'a';
        count2[index]++;

        char oldChar = s2[i-windowSize];
        index = oldChar - 'a';
        count2[index]--;
        i++;

        if(checkEqual(count1, count2))
        {
            return 1;
        }
    }
}
*/

/*
Q.4. Given an array of characters chars, compress it using the following algorithm:
Begin with an empty string s. For each group of consecutive repeating characters in chars:
If the group's length is 1, append the character to s.
Otherwise, append the character followed by the group's length.
The compressed string s should not be returned separately, but instead, be stored in the input character array chars.
Note that group lengths that are 10 or longer will be split into multiple characters in chars.
After you are done modifying the input array, return the new length of the array.
You must write an algorithm that uses only constant extra space.

Example 1:
Input: chars = ["a","a","b","b","c","c","c"]
Output: Return 6, and the first 6 characters of the input array should be: ["a","2","b","2","c","3"]
Explanation: The groups are "aa", "bb", and "ccc". This compresses to "a2b2c3".

Example 2:
Input: chars = ["a"]
Output: Return 1, and the first character of the input array should be: ["a"]
Explanation: The only group is "a", which remains uncompressed since it's a single character.

Example 3:
Input: chars = ["a","b","b","b","b","b","b","b","b","b","b","b","b"]
Output: Return 4, and the first 4 characters of the input array should be: ["a","b","1","2"].
Explanation: The groups are "a" and "bbbbbbbbbbbb". This compresses to "ab12".
*/

/*
int compress(vector<char>& chars) // space complexity = O(1) // time complexity = O(n) where n is vector size
{
    int i =0;
    int ansIndex = 0;
    int n = chars.size();
    while(i<n)
    {
        int j = i+1;
        while(j < n && chars[i] == chars[j])
        {
            j++;
        }
        chars[ansIndex++] = chars[i];
        int count = j-i;

        if(count > 1)
        {
            string cnt = to_string(count);
            for(char ch: cnt)
            {
                chars[ansIndex++] = ch;
            }
        }
        i = j;
    }
    return ansIndex;
}
*/