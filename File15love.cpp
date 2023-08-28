//karenge baad me
/*
Q.1. Given an array arr of integer numbers where arr[i] represents the number of pages in the ith book.
There are m numbers of students and the task is to allocate all the books to their students.
Allocate books in such a way that:
1. Each student gets atleast one book.
2. Each book should be allocated to a student.
3. Book allocation should be in a contiguous manner.
You have to allocate the book to m students such that the maximum number of pages assigned to a student is minimum.
*/
/*
Example: let m = 2, arr = {10,20,30,40}
three ways to allocate books:-
A. 10 and 20,30,40 max1 = max(10,90)
A. 10,20 and 30,40 max2 = max(30,70)
A. 10,20,30 and 40 max3 = max(60,40)

Answer = minimum of (max1,max2,max3) which is 60.
*/