// Static Members

// ⭐⭐⭐⭐⭐ Placement Importance: High

// Static Data Member
// Normal Data Member
// class Student
// {
// public:
//     int marks;
// };

// Agar:

// Student s1;
// Student s2;
// Student s3;

// to memory:

// s1 → marks
// s2 → marks
// s3 → marks

// 👉 3 objects = 3 copies

// Static Data Member
// class Student
// {
// public:
//     static int count;
// };

// Agar:

// Student s1;
// Student s2;
// Student s3;

// to memory:

// count
//  ↑
//  |
// s1
// s2
// s3

// 👉 3 objects = Sirf 1 shared copy

// ⭐ Golden Rule
// Normal Data Member
// → Every object has its own copy.

// Static Data Member
// → Only one shared copy for the entire class.
// Syntax
// class Student
// {
// public:
//     static int count;
// };

// Class ke bahar memory allocate karni padti hai:

// int Student::count = 0;

// ⚠️ Ye line placement me bahut poochi jaati hai.