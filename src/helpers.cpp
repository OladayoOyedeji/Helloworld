#include "helpers.h"

int    get_new_state(const unordered_set<int>    & states)
{
    int size = states.size();
    int sum = 0;
    if (states.find(size) == states.end())
    {
        return size;
    }

    int bitset = 0;

    for (auto p : states)
    {
        bitset |= (1 << p);
        sum += p;
    }

    bitset = ~bitset;

    int i = 0;
    while (bitset)
    {
        int bit = bitset & 1;
        if (bit)
            return i;
        i++;
        bitset >= 1;
    }

    // dont have an edge case for this
    if (states.find(size) == states.end())
        return sum;
    else
        cerr << "Cannot generate new state\n";
}

string get_new_state(const unordered_set<string> & states)
{
    string s;

    for (auto p: states)
    {
        s = s + p;
    }
    return s;
}

char   get_new_state(const unordered_set<char>   & states)
{
    int size = states.size();
    int sum = 0;
    if (states.find(size) == states.end())
    {
        return size;
    }

    int bitset = 0;

    for (auto p : states)
    {
        bitset |= (1 << p);
        sum += p;
    }

    bitset = ~bitset;

    int i = 0;
    while (bitset)
    {
        int bit = bitset & 1;
        if (bit)
            return i;
        i++;
        bitset >= 1;
    }

    // dont have an edge case for this
    return sum;
}
