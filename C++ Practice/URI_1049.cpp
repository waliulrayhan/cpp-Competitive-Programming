#include<iostream>
using namespace std;
int main()
{
    string word1, word2, word3;

    cin>>word1>>word2>>word3;

    if(word1=="vertebrado" && word2=="ave" && word3=="carnivoro")
    {
        cout<<"aguia"<<endl;
    }

    else if(word1=="vertebrado" && word2=="ave" && word3=="onivoro")
    {
        cout<<"pomba"<<endl;
    }

    else if(word1=="vertebrado" && word2=="mamifero" && word3=="onivoro")
    {
        cout<<"homem"<<endl;
    }

    else if(word1=="vertebrado" && word2=="mamifero" && word3=="herbivoro")
    {
        cout<<"vaca"<<endl;
    }

    else if(word1=="invertebrado" && word2=="inseto" && word3=="hematofago")
    {
        cout<<"pulga"<<endl;
    }

    else if(word1=="invertebrado" && word2=="inseto" && word3=="herbivoro")
    {
        cout<<"lagarta"<<endl;
    }

    else if(word1=="invertebrado" && word2=="anelideo" && word3=="hematofago")
    {
        cout<<"sanguessuga"<<endl;
    }

    else if(word1=="invertebrado" && word2=="anelideo" && word3=="onivoro")
    {
        cout<<"minhoca"<<endl;
    }

    return 0;  
}