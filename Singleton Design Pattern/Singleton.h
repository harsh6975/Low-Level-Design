#include <iostream>

using namespace std;

class Singleton
{
    // make constructor private to avoide multiple instance created
    static Singleton *instance;
    // just for testing
    static int noOfTIimesConstructorCalled;
    Singleton(){
        noOfTIimesConstructorCalled++;
        cout << "Singleton instance created! No of times it is called "<< noOfTIimesConstructorCalled <<'\n';
    }

    public:
        static Singleton *getInstance(){
            if(!instance){
                instance = new Singleton();
            }
            return instance;
        }

        void printMsg(string msg){
            cout<<msg<<'\n';
        }
};
