<!-- Encapsulation

⭐⭐⭐⭐⭐ Placement Importance: Very High

Sabse pehle definition nahi, concept samajhte hain.

Real Life Example 🏧

Socho tum ATM use kar rahe ho.

Tum kya kar sakte ho?

✅ Withdraw
✅ Deposit
✅ Check Balance

Lekin tum ATM ke andar ka code ya bank database directly access nahi kar sakte.

Matlab:

Data hidden hai.
Sirf controlled functions ke through access milta hai.

Isi concept ko Encapsulation kehte hain.

C++ Example
class Student
{
private:
    int marks;

public:
    void setMarks(int m)
    {
        marks = m;
    }

    int getMarks()
    {
        return marks;
    }
};

Yahan:

marks

private hai.

Direct access:

Student s;

s.marks = 90;

❌ Compile Error

Lekin:

s.setMarks(90);

cout << s.getMarks();

✅ Allowed

Definition (Placement)

Encapsulation is the process of binding data and functions into a single unit (class) and hiding the data using private access so that it can only be accessed through public member functions.

Hindi me:

Data aur functions ko ek class ke andar rakhna aur data ko private karke sirf public functions ke through access dena hi Encapsulation hai.

⭐ Golden Rule
private Data
        ↓
Getter / Setter
        ↓
Public Access -->