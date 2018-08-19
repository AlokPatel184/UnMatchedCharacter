// TestUncommonChar.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <unordered_map>


using namespace std;


string findUnMatchingChar(string base,string toEvaluate)
{   
    string res = "";
 
    unordered_map<char, int> m;
    for (int i = 0; i < base.size(); i++)
        m[base[i]] = 1;
 
    for (int i = 0; i < toEvaluate.size(); i++)
    {
        if (m.find(toEvaluate[i]) == m.end())
            res += toEvaluate[i];
        else
            m[toEvaluate[i]] = 2;
    }
 
    return res;
}
 
int main()
{
    string toEvaluate = "Alukk";
    string base = "Alok";
    cout << findUnMatchingChar(base,toEvaluate);
    return 0;
}

