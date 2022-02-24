#include <iostream>
#include <cstring>
using namespace std;
class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() {
        cout<<"Bogus code"<<endl;
    }
};

class CWHVideo : public CWH
{
    float videolength;
    public : 
        CWHVideo(string s, float r, float vl): CWH(s, r){
            videolength = vl;
        }
        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Rating: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<videolength<<" Minutes"<<endl;
        }
};

class CWHText : public CWH
{
    int words;
    public:
        CWHText(string s, float r, int wc): CWH(s, r){
            words = wc;
        }
         void display(){
            cout<<"This is an amazing text tutorial with title"<<title<<endl;
            cout<<"Rating of this tutorial: "<<rating<<" out of 5 stars"<<endl;
            cout<<"No. of words of in this video tutorial is: "<<words<<" words"<<endl;
        }
};

int main()
{
    string title;
    // char * title = new char[30];
    float rating, vlen;
    int words;

    // for Code with Harry Video
    cout<<"---------------------------------------------CWHVideo-------------------------------------------"<<endl;
    title = "Django tutorials";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);
    djVideo.display();
    cout<<"***********************************************************************************************"<<endl;
    // for Code with Harry Text
    title = "Django tutorials text";
    words = 456;
    rating = 4.19;
    CWHText djText(title, words, rating);
    djText.display();

cout<<"---------------------------------------Pointers Call-------------------------------------------------"<<endl;
    CWH* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
}


// Rules of virtual function
/*
1. They cannot be static
2. They are accessed by object pointers.
3. Virtual functions can be friend of another class
4. A virtual function in base class might not be used
5. A virtual function defined in a base class, there is no necessity of redefining it in the derived class.
*/