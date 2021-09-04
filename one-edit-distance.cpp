/*Given two strings s and t, return true if they are both one edit distance apart, otherwise return false.

A string s is said to be one distance apart from a string t if you can:


Insert exactly one character into s to get t.
Delete exactly one character from s to get t.
Replace exactly one character of s with a different character to get t.
 
s= "random"  t="randomc"
Example 1:

Input: s = "ab", t = "acb"
Output: true
Explanation: We can insert 'c' into s to get t.

Example 2:
Input: s = "", t = ""
Output: false
Explanation: We cannot get t from s by only one step.

Example 3:
Input: s = "a", t = ""
Output: true

Example 4:
Input: s = "", t = "A"
Output: true*/

bool checker(string s0,string s1)
{
    //if with the size s=2 t=4
    bool temp=false;
    if(s1.length()-s0.length()>1 || s0.length()-s1.length()>1)
    {
        temp=false;
    }
    //if both are empty return false
    else if(s1.length()==0 && s0.length()==0)
    {
        temp=false;
    }
    else
    {
    //insertion   s<t
    int i=0;
    int j=0;
    int counter_insert=0;
    int counter_delete=0;
    int counter_replacing=0;

        while(s0.length()<s1.length())
        {
            //Input: s = "ab", t = "acb"
            if(i==s0.length() ||j==s1.length())
            {
                break;
            }
            else if(s0[i]!=s1[j])
            {
                counter_insert=counter_insert+1;
                j++;
            }
            
            else{
                i++;
                j++;
            }
        }

    //
    int i=0;
    int j=0;

    //deleteion s>t
        while(s0.length()>s1.length())
        {
            //Input: s = "abc", t = "ac"
             if(i==s0.length() ||j==s1.length())
            {
                break;
            }
            else if(s0[i]!=s1[j])
            {
                counter_delete=counter_delete+1;
                i++;
            }
            else
            {
                i++;
                j++;
            }
        }

    //replacing s==t
    int i=0;
    int j=0;
    while(s0.length()==s1.length())
    {
         if(i==s0.length() ||j==s1.length())
            {
                break;
            }
        else if(s0[i]!=s1[j])
        {
            counter_replacing=counter_replacing+1;
            i++;
            j++;
            
        }
        else{
            i++;
            j++;
        }
    }

    if(counter_insert==1)
    {
        temp= true;
    }
    else if(counter_delete==1)
    {
        temp= true;
    }
    else if(counter_replacing==1)
    {
        temp= true;
    }
    }
    return temp;
}
/*class Solution(object):
    def isOneEditDistance(self, s, t):
        ns, nt = len(s), len(t)
        if s == t:
            return False

        # Ensure that s is shorter than t.
        if ns > nt:
            return self.isOneEditDistance(t, s)

        # The strings are NOT one edit away distance  
        # if the length diff is more than 1.
        if nt - ns > 1:
            return False

        for i in range(ns):
            if s[i] != t[i]:
                # if strings have the same length
                if ns == nt:
                    return s[i + 1:] == t[i + 1:]
                # if strings have different lengths
                else:
                    return s[i:] == t[i + 1:]
        
        # If there is no diffs on ns distance
        # the strings are one edit away only if
        # t has one more character. 
        return True*/