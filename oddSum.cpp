#include<iostream>
using namespace std;
int main()
{
    int i, n=100,oddSum=0;





    for(i=1; i<=100; i++)
    {

        if(i%2!=0)
        {
            oddSum= oddSum+i;
        }
    }
    cout<<"odd sum is : "<< oddSum;

    return 0;
}
