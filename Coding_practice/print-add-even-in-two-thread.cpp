/*
 Print odd and even number in two thread
*/

#include <iostream>
    #include <thread>
    #include <mutex> 
    using namespace std;

    std::mutex m;
    int count = 0;

    void printEven()
    {
        cout << "Entered Even\n" << endl;
        while(count <= 10)
        {
            m.lock();
            if(count%2 == 0)
                cout <<"Entered Even"<< count++ << " ";
             m.unlock();
        }
    }
    
    void printOdd()
    {
        cout << "Entered Odd" << endl;
        while(count < 10)
        {
             m.lock();
            if(count%2 == 1)
                cout <<"Entered Odd"<<count++ << " ";
             m.unlock();
        }
    }

    int main()
    {
       std::thread t1(printOdd);
       std::thread t2(printEven);
       t1.join();
       t2.join();
        return 0;
    }