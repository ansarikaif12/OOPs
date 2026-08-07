<!-- 📂 Deep Copy vs Shallow Copy

⭐⭐⭐⭐⭐ Placement Importance: Very High

Lekin isse pehle ek question.

Normal Assignment
Student s1;
Student s2;

s2 = s1;
Question:

Is line ka matlab kya hai?

A. s2 delete ho jayega

B. s1 ka data s2 me copy hoga

C. Dono object destroy ho jayenge

D. Naya constructor call hoga

No hints. Bas iska answer do, fir Deep aur Shallow Copy start karenge.

Is concept ko samajhne ke baad hi Deep vs Shallow Copy 5 minute me clear ho jayega. -->


<!-- 🔥 Correct! 10/10.

Student s1;
Student s2;

s2 = s1;

Matlab:

s1 ka data s2 me copy hoga.

Ab asli concept start.

Step 1: Shallow Copy

Sabse pehle ye class dekho:

class Student
{
public:
    int age;
};

Ab:

Student s1;
s1.age = 20;

Student s2 = s1;

cout << s2.age;

Output:

20

Kya hua?

👉 s1 ka data s2 me copy ho gaya.

Ye bhi Shallow Copy hai.

Ab question aata hai...

🤔 Agar Shallow Copy itni achhi hai to Deep Copy ki zarurat hi kyun padi?

Yahin se actual concept shuru hota hai.

🎯 Important Question

Maan lo class ye hai:

class Student
{
public:
    int *marks;
};

Ab:

Student s1;

Aur:

s1.marks = new int(95);

Memory kuch aisi hogi:

s1
 │
 ▼
marks ─────► 95

Ab agar likhu:

Student s2 = s1;
Question:

Shallow Copy me kya copy hoga?

A.

s2
 │
 ▼
95

(alag memory banegi)

Ya

B.

s1 ------┐
          ▼
         95
          ▲
s2 ------┘

(Dono ek hi memory ko point karenge)

❌ No hints.

Ye answer de diya to Deep Copy 2 minute me khatam ho jayega. 🔥 -->


<!-- 🔥 Correct! Yehi Shallow Copy hai.

Ab asli problem samajho.

Memory
class Student
{
public:
    int *marks;
};

Student s1;
s1.marks = new int(95);

Student s2 = s1;   // Shallow Copy

Memory:

         Heap Memory
        +----------+
        |    95    |
        +----------+
             ▲
             │
      ┌──────┴──────┐
      │             │
+-----------+   +-----------+
|    s1     |   |    s2     |
| marks ----|-->|           |
+-----------+   +-----------+

👉 Dono objects ek hi memory ko point kar rahe hain.

Ab Problem
*s2.marks = 100;

Question:

Ab:

cout << *s1.marks;

Output kya hoga?

A. 95

B. 100

C. Compile Error

D. Runtime Error

No hints. -->



<!-- 🔥 100% Correct!

Output:

100
Kyun?

Memory:

         Heap Memory
        +----------+
        |    95    |
        +----------+
             ▲
             │
      ┌──────┴──────┐
      │             │
+-----------+   +-----------+
|    s1     |   |    s2     |
| marks ----|   | marks ----|
+-----------+   +-----------+

Jab tum likhte ho:

*s2.marks = 100;

To tum heap wali memory change kar rahe ho.

Aur kyunki s1 aur s2 dono usi memory ko point kar rahe hain, isliye:

cout << *s1.marks;

Output:

100
🚨 Sabse Badi Problem

Ab maan lo:

delete s1.marks;

Memory:

s1.marks  ❌ Deleted

s2.marks  ─────► Invalid Address

Ab agar:

cout << *s2.marks;

❌ Undefined Behavior / Runtime Error

Ya agar:

delete s2.marks;

❌ Double Delete Error

Isi wajah se Shallow Copy dangerous hoti hai jab class me pointer ho.

💡 Deep Copy kya karti hai?

Deep Copy nayi memory allocate karti hai.

Memory:

          Heap
      +------+      +------+
      | 95   |      | 95   |
      +------+      +------+
         ▲              ▲
         │              │
      +------+      +------+
      | s1   |      | s2   |
      +------+      +------+

Ab:

*s2.marks = 100;

Memory:

s1 ----► 95

s2 ----► 100

Ab:

cout << *s1.marks;

Output:

95

✅ Dono objects completely independent hain.

⭐ Interview Definition
Shallow Copy

Copies the pointer (address), not the actual data. Both objects share the same memory.

Deep Copy

Copies both the pointer and the actual data by allocating new memory. Each object has its own copy.

🎯 Difference (Ye table yaad kar lena)
Shallow Copy	Deep Copy
Copies address	Copies actual data
Same memory shared	Separate memory
Changes affect both objects	Changes affect only one object
Can cause double delete	Safe
📝 Placement Interview Question

Q. Deep Copy ki zarurat kab padti hai?

Answer:

Jab class me dynamic memory (new, pointers) use hoti hai. Shallow copy se dono objects same memory share karte hain, isliye Deep Copy use karte hain taaki har object ki apni alag memory ho.

🔥 Ab bas ek final step bacha hai:

Copy Constructor se Deep Copy implement kaise karte hain.

Uske baad Deep vs Shallow Copy 100% complete ho jayega. -->