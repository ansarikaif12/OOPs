// 🔥 Friend Function - Output Question 1

// Predict the output without running the code.

#include <iostream>
using namespace std;

class Test
{
    int x;

public:
    Test(int a)
    {
        x = a;
    }

    friend void show(Test);
};

void show(Test t)
{
    cout << t.x;
}

int main()
{
    Test t1(50);

    show(t1);

}


// Questions
// Output kya hoga?: 50
// Friend function x ko kaise access kar pa raha hai? :show() function x ko access kar pa raha hai kyunki Test class ne friend keyword ke through usse special permission di hai. Isliye wo class ka member na hote hue bhi private member x ko access kar sakta hai.