int lengthOfLongestSubstring(string s)
{
    int n = s.length();
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    int max = 1;
    for (int i = 0; i < n; i++)
    {
        unordered_map<char, int> mymap;
        mymap[s[i]]++;
        for (int j = i + 1; j < n; j++)
        {
            if (mymap.find(s[j]) == mymap.end())
            {
                mymap[s[j]]++;
                if (j == n - 1)
                    return mymap.size();
            }
            else
            {
                cout << "else ";
                if (mymap.size() > max)
                    max = mymap.size();
            }
        }
    }
    return max;
}