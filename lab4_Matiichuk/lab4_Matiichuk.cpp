#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

class ClassArray
{
    friend int MainF(ClassArray);
private:
    int nArray = 0;
public:


    ClassArray(int nArray)
    {
        this->nArray = nArray;
        int *ptrArray = new int[nArray];
        //delete[]ptrArray;
    }
    
    ~ClassArray()
    {
        delete ptrArray;
    }

    void MainF(ClassArray ppp)
    {
        for (int i = 0; i < nArray; i++) 
        {
            if (i % 2 == 0) 
            {
                ppp.ptrArray[i] = i - 5;
                ppp++;
            }
            else ppp.ptrArray[i] = i;
        }
        cout << ppp;
    }

};


int main()
{
    ClassArray first(11);
    return 0;
}