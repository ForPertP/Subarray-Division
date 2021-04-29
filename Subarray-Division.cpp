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
