#include <iostream>
#include <vector>

using namespace std;

int main()
{   
    vector <float> v;
    int number, pos_ins;
    float data;
    
    cout << "Enter number of element = ";
    cin >> number;
    for(int i=0; i<number; i++)
    {
    v.push_back(rand()%10-5);
  }
  
  cout << "New vector: ";
  for (int i=0; i<v.size(); i++) 
      cout << v[i] << " ";

    cout << "\nEnter position when erase = ";
  cin >> pos_ins;
  if (pos_ins>=0 && pos_ins<=v.size())
  {
    v.erase(v.begin()+pos_ins);
  }
    
    cout << "Enter position when replace = ";
  cin >> pos_ins;
  cout << "Enter element = ";
  cin >> data;
  v[pos_ins] = data;
  
  for (int i=0; i<v.size(); i++) 
      cout << v[i] << " ";
      
    vector<float> v2;
    cout << "\nEnter number of element = ";
    cin >> number;
    for(int i=0; i<number; i++)
    {
    v2.push_back(rand()%10-5);
  }
  cout << "New vector: ";
  for (int i=0; i<v2.size(); i++) 
      cout << v2[i] << " ";
      
  cout << "\nEnter position from which to erase = ";
  cin >> pos_ins;
  if (pos_ins>=0 && pos_ins<=v.size())
  {
    v.erase(v.begin()+pos_ins,v.end());
  }
    
    for(int i=0; i<v2.size(); i++)
    {
        v.push_back(v2[i]);
    }
    for (int i=0; i<v.size(); i++) 
      cout << v[i] << " ";
    
    return 0;
}