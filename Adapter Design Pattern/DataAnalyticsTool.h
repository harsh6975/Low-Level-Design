#pragma once
#include <iostream>

using namespace std;

class DataAnalyticsTool{
    string json;

    public:
        DataAnalyticsTool(){};
        DataAnalyticsTool(string json):json(json){};

        virtual void analysisJSON(){
            cout<<"Analysing Json...";
        }

};