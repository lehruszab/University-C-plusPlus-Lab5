#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{   
    vector <int> v;
    int number, sum=0;
    
    cout << "Enter number of element = ";
    cin >> number;
    for(int i=0; i<number; i++)
    {
    v.push_back(rand()%10-5);   
    }   
    cout << "New vector: ";
    for (int i=0; i<v.size(); i++) 
        cout << v[i] << " ";


    std::vector<int>::iterator min;
    min = min_element(v.begin(),v.end());
    for(int s=0; s<v.size(); s++)
        if(v[s]==*min)
            cout <<"\nНомер минимального элемента = "<< s;

    int firstPos = -1, secondPos = -1;
    for(int q=0; q<v.size(); q++)
    {
        if(v[q]<0 && firstPos == -1)
            firstPos = q; 
        if(v[q]<0 && firstPos != -1)
            secondPos = q;
    }
    int w = firstPos+1;
    for(int p=w; w<secondPos; w++)
    {
        sum += v[w];
    }
    cout <<"\nСумма между первым и вторым негативsими элемэнтами: "<<sum;
    
    int d=0, temp;
    for(int s=0; s<v.size(); s++)
    {
        if(abs(v[s])<=1)
        {
            temp = v[d];
            v[d] = v[s];
            v[s] = temp;
            d++;
        }
    }
    cout<<"\n";
    for (int i=0; i<v.size(); i++) 
        cout << v[i] << " "; 
        
    return 0;
}