// 💻 Practice 34 ⭐⭐⭐⭐☆ (Placement)

// Create 3 classes.

// Camera
// Public:
// clickPhoto()
// MusicPlayer
// Public:
// playMusic()
// SmartPhone
// Publicly inherit from both classes.
// Public:
// makeCall()
// main()

// Create:

// SmartPhone s1;

// Call all possible functions.

// Rules
// ❌ No hints
// ❌ No theory
// ❌ No expected output

#include<iostream>
using namespace std;

class Camera{
    public:
    void clickPhoto(){
        cout<<"Click Photo"<<endl;
    }
};

class MusicPlayer{
    public:
    void playMusic(){
        cout<<"Play Music"<<endl;
    }
};

class SmartPhone: public MusicPlayer, public Camera{
    public:
    void makeCall(){
        cout<<"Make Call"<<endl;
    }
};

int main(){
    SmartPhone s1;
    s1.clickPhoto();
    s1.playMusic();
    s1.makeCall();
}


// Note: Agar tum likhte:
// class SmartPhone : public Camera, public MusicPlayer
// To bhi 100% correct hota.
// Inheritance order sirf constructor execution order me matter karega, function access me nahi.

// Q1.

// How many parent classes?

// 2

// ✅ Correct.

// Q2.

// How many functions can SmartPhone access?

// 3

// ✅ Correct.

// clickPhoto()
// playMusic()
// makeCall()


// Q3
// Camera c1;

// c1.makeCall();

// Your Answer:

// No because parent class can't inherit the child class property

// ✅ Correct.

// Placement answer:

// makeCall() belongs to the SmartPhone class. Camera neither defines nor inherits this function. Therefore, a Camera object cannot call makeCall().

// Q4
// MusicPlayer m1;

// m1.clickPhoto();

// Your Answer:

// Yes

// ❌ Incorrect.

// Think carefully.

// Who inherits whom?

// Camera        MusicPlayer
//       \      /
//        \    /
//       SmartPhone

// Who inherits?

// 👉 SmartPhone inherits Camera and MusicPlayer.

// Does MusicPlayer inherit Camera?

// ❌ No.

// Therefore,

// MusicPlayer m1;

// m1.clickPhoto();

// ❌ Compile-time Error

// Reason:

// clickPhoto() is a member of the Camera class. MusicPlayer neither defines nor inherits this function, so a MusicPlayer object cannot access it.

// 🎯 Golden Rule

// Never think sideways.

// Inheritance always goes downwards, never horizontally.

//         Camera

//             ↓

//       SmartPhone

//             ↑

//      MusicPlayer
// ❌ Camera cannot access MusicPlayer.
// ❌ MusicPlayer cannot access Camera.
// ✅ SmartPhone can access both.
// 🏆 Placement Tip

// Jab bhi interview me confusion ho, bas ye ek question puchho:

// "Who inherits whom?"

// Agar answer mil gaya, 90% inheritance questions solve ho jayenge.