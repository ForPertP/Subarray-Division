#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'birthday' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY s
 *  2. INTEGER d
 *  3. INTEGER m
 */

int birthday(vector<int> s, int d, int m)
{    
    int count = 0;
    for (auto it = s.cbegin(); it <= s.cend()-m; ++it)
    {
        if (d == std::accumulate(it, it + m, 0))
        {
            count++;
        }
    }
    
    return count;
}

int birthday2(vector<int> s, int d, int m)
{
    int count = 0;
    for (size_t i = 0; i <= s.size()-m; ++i)
    {
        int accumulate = 0;
        
        for (int j = 0; j < m; ++j)
        {
            accumulate += s[i+j];        
        }
        
        if (accumulate == d )
        {
            count++;
        }
    }

    return count;
}
