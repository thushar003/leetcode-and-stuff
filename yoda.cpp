/*
 * Program Name: yoda.cpp
 * @author: Thushar Joseph Joji
 * Date: March 2024
 * Purpose: IT contest 2024 problem "YODA".
 */


#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    int N, M;
    string num1, num2;
    cin >> num1;
    cin >> num2;
    
    int compareSize = (num1.size() < num2.size()) ? num1.size() : num2.size();
    int lesserSize = (num1.size() < num2.size()) ? num1.size() : num2.size();
    int largerSize = (num1.size() > num2.size()) ? num1.size() : num2.size();
    //string lesserNum = (num1.size() < num2.size()) ? num1 : num2;
    //string largerNum = (num1.size() < num2.size()) ? num2 : num1;
    if (num1.size() < num2.size()) {
        while (num1.size() < num2.size())
        {
            num1.insert(0, "0");
        }
    }
    else if (num2.size() < num1.size()) {
        while (num2.size() < num1.size())
        {
            num2.insert(0, "0");
        }
    }
    for (int i = 0; i < num1.size(); i++)
    {
        if (num1[i] < num2[i])
        {
            //lesserNum.replace(i, 1, "", 0, 1);
            //lesserNum.erase(i, 1);
            num1.replace(i, 1, "X", 0, 1);
        }
        else if (num2[i] < num1[i])
        {
            //largerNum.replace(i, 1, "", 0, 1);
            //largerNum.erase(i, 1);
            num2.replace(i, 1, "X", 0, 1);
        }
    }
    
    string finalNum1 = "";
    string finalNum2 = "";
    for (int i = 0; i < num1.size(); i++)
    {
        if (num1[i] != 'X')
        {
            finalNum1 += num1[i];
        }
    }
    for (int i = 0; i < num2.size(); i++)
    {
        if (num2[i] != 'X')
        {
            finalNum2 += num2[i];
        }
    }
    if (finalNum1.size() == 0)
    {
        finalNum1 = "YODA";
    }
    else if (finalNum2.size() == 0)
    {
        finalNum2 = "YODA";
    }
    istringstream iss1(finalNum1);
    istringstream iss2(finalNum2);
    if (finalNum1 != "YODA") {
        iss1 >> N;
        cout << N << endl;
    }
    else
    {
        cout << "YODA" << endl;
    }
    if (finalNum2 != "YODA") {
        iss2 >> M;
        cout << M << endl;
    }
    else
    {
        cout << "YODA" << endl;
    }
    
    
}