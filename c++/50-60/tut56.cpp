#include <iostream>
#include <cstring>

using namespace std;

class Cwh
{
protected:
    string title;
    float rating;

public:
    Cwh(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() {}
};

class CwhVideo : public Cwh
{
    float video_length;

public:
    CwhVideo(string s, float r, float v1) : Cwh(s, r)
    {
        video_length = v1;
    }
    void display()
    {
        cout << "This is the amazing video with title " << title << endl;
        cout << "This is the rating video " << rating << endl;
        cout << "Length of " << video_length << endl;
    }
};
class CwhText : public Cwh
{
    int words;

public:
    CwhText(string s, float r, int wc) : Cwh(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is amzing tutorial with title " << title << endl;
        cout << "Rating of this tutorial " << rating << endl;
        cout << "No of words in this text tutorial " << words << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;
    title = "Django Tutorial";
    vlen = 4.8;
    rating = 7.7;
    CwhVideo djVideo(title, rating, vlen);
    // djVideo.display();

    title = "Django Tutorial Text";
    words = 1000;
    rating = 4.7;
    CwhText djText(title, rating, words);
    // djText.display();

    Cwh *tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}
// rules for virtual function

// cant be static.
// acccess by objects pointers.
// virtual fubctions can be friend of another class.
// a virtual function in base class might not be used.
// if a virtual fuctions defind in base class no need to define in derived class.