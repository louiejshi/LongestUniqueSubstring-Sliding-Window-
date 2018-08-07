//
//  main.cpp
//  LongestUniqueSubstring(Sliding Window)
//
//  Created by Louie Shi on 8/6/18.
//  Copyright © 2018 Louie Shi. All rights reserved.
//

#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

int lengthOfLongestSubstring(string str)
{
    int i = 0;
    int j = 0;
    int ans = 0;
    set<char> mySet;
    
    while( (i < str.length()) && (j < str.length()) )
    {
        if(mySet.find(str[j]) == mySet.end())
        {
            mySet.insert(str[j++]);
            ans = max(ans, j - i);
        }
        else
        {
            mySet.erase(str[i++]);
        }
    }
    
    return ans;
}

int main(int argc, const char * argv[])
{
    string str1 = "aabcdd";
    
    cout << lengthOfLongestSubstring(str1) << endl;
    
    return 0;
}
