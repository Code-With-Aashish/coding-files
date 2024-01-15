#include <iostream>
#include <cstring>
using namespace std;
// Abstract base class & Pure virtual function.These tow are inter related.
// In any class has the pure virtual function then the class ia Abstract base class.
// CWA is the Abstract base class.Abstract base class is the class those we create to derived class.
// Abstract base class can't create the object.
class CWA
{
protected:
    string title;
    float rating;

public:
    CWA(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0; // Do nothihg --> pure virtual function.
    // {
    //     cout << "hello world!!" << endl;
    // }
};
class CWAvideo : public CWA
{
    float Videolenth;

public:
    CWAvideo(string s, float r, float VL) : CWA(s, r)
    {
        Videolenth = VL;
    }
    void display()
    {
        cout << endl;
        cout << "This is a amazing video with title : " << title << endl;
        cout << "Lenth of the video is : " << Videolenth << " minitues" << endl;
        cout << "This video rating is : " << rating
             << "/10" << endl;
    }
};
class CWAtext : public CWA
{
    int textlenth;

public:
    CWAtext(string s, float r, int TL) : CWA(s, r)
    {
        textlenth = TL;
    }
    void display()
    {
        cout << endl;
        cout << "This is a amazing text tutorial with title : " << title << endl;
        cout << "The text lenth is : " << textlenth << endl;
        cout << "This text tutorial rating is : " << rating
             << "/10" << endl;
    }
};

int main()
{

    string title;
    float rating, Vlen;
    int words;

    // for vide of code with Ashish
    title = "This video is amazing ..";
    Vlen = 12.59;
    rating = 9.9;
    CWAvideo video(title, rating, Vlen);
    // video.display();

    // for text tutorial of code with Ashish
    title = "This text tutorial is amazing ..";
    words = 1000;
    rating = 9.5;
    CWAtext text(title, rating, words);
    // text.display();
    CWA *tute[2];
    tute[0] = &video;
    tute[1] = &text;

    tute[0]->display();
    tute[1]->display();

    return 0;
}
