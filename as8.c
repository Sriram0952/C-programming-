# Initialize the array and the element to search for
arr = [1, 2, 3, 4, 5]
X = 3

# Loop through the array and look for the element
for i in range(len(arr)):
    if arr[i] == X:
        print(i)
        break
else:
    print(-1)

New chat

￼￼

Find the index of first occurrence of X in the array of N elements, if the element not present then print -1 

Sure, here's how you can find the index of the first occurrence of a given element X in an array of N elements, or print -1 if the element is not present:

pythonCopy code

# Initialize the array and the element to search for arr = [1, 2, 3, 4, 5] X = 3 # Loop through the array and look for the element for i in range(len(arr)): if arr[i] == X: print(i) break else: print(-1) 

Here's what's happening in the code:

We initialize the array arr and the element to search for X.

We loop through the array using a for loop and range(len(arr)), which generates the indices of the array.

Inside the loop, we check if the element at the current index is equal to X.

If we find the first occurrence of X, we print the index i and break out of the loop.

If we loop through the entire array and do not find X, the else block will execute and we will print -1. The else block is only executed if the loop is not terminated by a break statement.

Note that this code assumes that the array contains only unique elements. If the array contains duplicates and you want to find the index of the first occurrence of X, you can modify the code as follows:
# Initialize the array and the element to search for
arr = [1, 2, 3, 4, 3, 5]
X = 3

# Loop through the array and look for the element
for i in range(len(arr)):
    if arr[i] == X:
        print(i)
        break
else:
    print(-1)

