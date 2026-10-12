// vectors are dynamic containers
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size: ";
    cin>>n;
    if (n<=0){
        cout<<"Invalid size"<<endl;
        return 1;
    }

    vector<int> v;
    cout<<"Enter vector elements:"<<endl;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int maxVal = v[0];
    int total=0;
    for(int i=0; i<n; i++){
        if(v[i]>maxVal){
            maxVal=v[i];
        }
        total+=v[i];
    }
    cout<<"Max Element = "<<maxVal<<endl;
    cout<<"AVG = "<<(double)total/n<<endl;
    
    int size = v.size();
    for(int i=size-1; i>=0; i--){
        cout<<v[i]<<" ";
    }
    return 0;
}