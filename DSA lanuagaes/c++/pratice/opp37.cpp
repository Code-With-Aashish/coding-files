#include <iostream>
#include <cstring>
using namespace std;
// Pointer banaya base class ka us ko point karaya derived class se tub mai shrif base class function ko hi use kar saka ta hoo lekin agr mai base class ke function ko virtual function bana du tub mai inharited methord use kar sakata hoo tub mai run time polymophism use kar raha hoo.Tub mai derived class ke display function ko run kar sakata hoo
// In protected mode only the derived class and mainclass acess the protectde variable
// CWA is the Abstract base class.Abstract base class is the class those we create to derived class.
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
    virtual void display()
    {
        cout << "hello world!!" << endl;
    }
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
/*
Rules for defining the virtual function.
1.They cannot be the static function.
2.They are acess by the object pointers.
3.Virtal function is the friend of another class.
4.A virtal function in base class might not be used or empty functio also.
5.If a virtual function is define in a base class then we don't need to define the deriver function as a virtual function.
6.If the derived class has no function then the base class function will be called.
*/
// To over right we create the virtual function.
