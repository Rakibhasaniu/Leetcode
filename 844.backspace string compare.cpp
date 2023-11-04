class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        stack<char> c1, c2;
        for (char e : s)
        {
            if (e == '#')
            {
                if (!c1.empty())
                    c1.pop();
            }
            else
            {
                c1.push(e);
            }
        }
        for (char e : t)
        {
            if (e == '#')
            {
                if (!c2.empty())
                    c2.pop();
            }
            else
            {
                c2.push(e);
            }
        }
        if (c1 == c2)
            return true;
        else
            return false;
    }
};