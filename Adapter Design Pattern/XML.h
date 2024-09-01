#pragma once
#include <iostream>

using namespace std;

class XMLData{
    string xml;

    public:
        XMLData(string xml):xml(xml){};

        string getXMLData(){
            return xml;
        }

};