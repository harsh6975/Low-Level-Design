#include <iostream>
#include "DataAnalyticsTool.h"
#include "XML.h"
using namespace std;

class Adapter: public DataAnalyticsTool{
    XMLData* xml;

    public:
        Adapter( XMLData* xml):xml(xml){};

        void analysisJSON() override{
            cout<<"Started conveting XML data: "<<xml->getXMLData()<<" to Json"<<'\n';
            cout<<"Analysing converted Json...";
        }

};