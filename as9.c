
C Program Undefined Behavior

￼￼

What will be output of following c program? #include "string.h" typedef struct stu1{ char name1[6]; char name2[6]; double marks; }STU1; void main(){ STU1 s1={"rohit","kumar",87.43},*p1; char *p; p1=&s1; p=memchr(p1,'u',sizeof(STU1)); printf("%s",p); } 

The output of the given C program is unpredictable and undefined behavior, as the pointer p is being used to print a string after calling memchr, which searches for the first occurrence of a given character ('u' in this case) within a certain memory block (s1 in this case).

However, memchr returns a pointer to the first occurrence of the character within the memory block, or NULL if the character is not found. In this case, memchr may or may not find the character 'u' within the memory block of s1, which includes the character arrays name1 and name2 along with the marks variable.

Even if memchr finds the character 'u', the pointer p does not necessarily point to a valid string, as the memory block may contain other characters after the first occurrence of 'u'. Additionally, the memory block may not be terminated with a null character, which is required for a C string.

Therefore, the program has undefined behavior, and the output cannot be predicted or relied upon.

