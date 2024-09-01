#include <iostream>
#include "XML.h"
#include "DataAnalyticsTool.h"
#include "Adapter.h"
using namespace std;

int main(){
    XMLData *xml = new XMLData("This is xml data");

    DataAnalyticsTool * tool = new Adapter(xml);

    tool->analysisJSON();


    return 0;
}