#include <iostream>
#include <string>
using namespace std;

int defaultname(string name){
    if(name.length())
        return 1;
        else return 0;
}

void namekiir(string name){
    for(int i=0;i<39;i++)cout<<' ';
    cout << "Good morning, " ;
    if(defaultname(name))cout<<name;
        else cout<<" my friend!";
    cout<<endl;
}

void hisvet(string name){
    for(int i=0;i<39;i++)cout<<' ';
    cout<< "Happy eastern, ";
    if(defaultname(name))cout<<name;
        else cout<<" my friend!";
    cout<<endl;
}

void keret(){
    for(int i=0;i<80;i++)cout<<"*";
}
void csunyakeret(){
    cout<<endl;
    cout<<'*';
    for(int i=0;i<78;i++)cout<<' ';
    cout<<'*';
}
int main()
{
    string name;
    getline(cin,name);
    keret();
    csunyakeret();
    cout<<endl;
    namekiir(name);
    hisvet(name);
    csunyakeret();
    keret();

    return 0;
}
