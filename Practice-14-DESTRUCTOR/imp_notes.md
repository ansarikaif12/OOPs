<!-- virtual constructor ya destructor ya functions ya data members hote hai ya nahi bss shortly btao

Short answer (Placement Ready):

❌ Virtual Constructor → No (C++ me nahi hota.)
✅ Virtual Destructor → Yes
✅ Virtual Function → Yes
❌ Virtual Data Members → No
Yaad rakhne ki trick:
Virtual Constructor   ❌
Virtual Destructor    ✅
Virtual Function      ✅
Virtual Data Member   ❌

Interview Follow-up: Agar pooche "Why virtual constructor is not possible?" to wo hum this pointer aur object creation ke baad padhenge. Uska proper concept baad me cover karenge. -->


<!-- ok aur static constructor ya destructor ya functions ya data members hote hai ya nahi bss shortly btao

Short answer (Placement Ready):

Static Constructor    ❌ No
Static Destructor     ❌ No
Static Function       ✅ Yes
Static Data Member    ✅ Yes
Yaad rakhne ki trick
Constructor  ❌
Destructor   ❌
Function     ✅
Data Member  ✅

Reason (1 line each):

❌ Static Constructor: C++ me nahi hota.
❌ Static Destructor: C++ me nahi hota.
✅ Static Function: Class level function hota hai, object ki zarurat nahi.
✅ Static Data Member: Sabhi objects ke liye ek hi shared copy hoti hai. -->