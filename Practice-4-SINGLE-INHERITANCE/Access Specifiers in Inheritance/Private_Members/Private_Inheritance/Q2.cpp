💻 Final Question on Access Inheritance (⭐⭐⭐⭐☆)

Ye inheritance access modes ka last coding question hai.

class A
{
public:
    void f1()
    {
        cout << "F1";
    }

protected:
    void f2()
    {
        cout << "F2";
    }
};

class B : private A
{
public:
    void test()
    {
        // Complete
    }
};

int main()
{
    B obj;

    obj.test();

    obj.f1();   // ?
}
Questions
Complete test().
Will obj.f1() compile?
Why?

❌ No hints.

📌 Uske baad

Access inheritance complete. 🎉

Phir hum start karenge:

Multilevel Inheritance

Aur wahan se questions aur interesting honge, kyunki constructor chaining aur 3-level inheritance ke placement questions aayenge. 💪

test(){ f1(); f2();}
obj.f1() will not compile
the reason is f1 is the public member of base class but child class private inherit the all functions or data from base class that can't be access

🔥 Outstanding! 10/10 ⭐⭐⭐⭐⭐

Ab tum access inheritance ka concept genuinely samajh gaye ho.

✅ test()
void test()
{
    f1();
    f2();
}

✔ Correct.

✅ obj.f1()

Will not compile

✔ Correct.

✅ Reason

Tumne likha:

the reason is f1 is the public member of base class but child class private inherit the all functions or data from base class that can't be access

Concept bilkul sahi hai.

Bas interview me is tarah bolo:

f1() is a public member of class A, but due to private inheritance it becomes a private member of class B. Private members cannot be accessed from outside the class through an object, so obj.f1() results in a compilation error.