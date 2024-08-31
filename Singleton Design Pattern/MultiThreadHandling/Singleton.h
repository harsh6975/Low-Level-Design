#include <iostream>
#include <mutex>
using namespace std;

class Singleton
{
    // make constructor private to avoide multiple instance created
    static Singleton *instance;
    static mutex mutex_; // Mutex for thread-safe singleton instance creation
    // just for testing
    static int noOfTimesConstructorCalled;
    Singleton(){
        noOfTimesConstructorCalled++;
        cout << "Singleton instance created! No of times it is called "<< noOfTimesConstructorCalled <<'\n';
    }

    // we have to also make other contructors private to avoid multiple objs

    //1 Copy constructor

    Singleton(const Singleton&)

    //2. Equal to overload constructor

    Singleton operator=(const Singleton &);

    public:
        static Singleton *getInstance(){
            if(!instance){
                mutex_.lock();
                if(!instance){
                    instance = new Singleton();
                }
                mutex_.unlock();
            }
            
            return instance;
        }

        void printMsg(string msg){
            cout<<msg<<'\n';
        }
};
