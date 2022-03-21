#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Attribute
{
    string name;
    string value;
};

struct Tag
{
    string name;
    vector<Attribute> attributes;
    vector<Tag> *children;
    Tag *parent;
};

Tag parseTokens(string line)
{
    Tag tag;

    string token = "";
    string value = "";

    int i = 0;
    while (line[i] != '\0')
    {
        while (line[i] != '<' && line[i] != '\0')
            i++;
        while (!isalnum(line[i]) && line[i] != '\0')
            i++;
        while (isalnum(line[i]) && line[i] != '\0')
            token += line[i++];
        // cout << "name: " << token << endl;
        tag.name = token;
        token = "";
        while (line[i] != '>' && line[i] != '\0')
        {
            while (!isalnum(line[i]) && line[i] != '\0')
                i++;
            while (isalnum(line[i]) && line[i] != '\0')
                token += line[i++];
            // cout << "token: " << token << endl;
            while ((line[i] != '=') && line[i] != '\0')
                i++;
            while (!isalnum(line[i]) && line[i] != '\0')
                i++;
            while (isalnum(line[i]) && line[i] != '\0')
                value += line[i++];
            // cout << "value: " << value << endl;
            if (!token.empty() && !value.empty())
            {
                Attribute attribute;
                attribute.name = token;
                attribute.value = value;
                tag.attributes.push_back(attribute);
            }
            token = "";
            value = "";
            i++; // final increment
        }
        i++;
    }
    return tag;
}

Tag parseTags(int n)
{
    Tag root;
    string line;
    while (line.empty())
    {
        getline(cin, line);
    }
    root = parseTokens(line);
    return root;
}

int main()
{
    int n, q;
    scanf("%d %d", &n, &q);
    Tag root = parseTags(n);
    cout << "root.name: " << root.name << endl;
    return 0;
}
