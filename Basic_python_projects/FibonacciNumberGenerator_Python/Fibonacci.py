n=int(input("Enter a number:"))
n1=0
n2=1    # n1 stores the first Fibonacci number (0) and n2 stores the second Fibonacci number (1)
next_n=n2  # initializes the variable next_n with the value of n2
count=1    # used to keep track of how many Fibonacci numbers have been generated 
while count<=n: 
    print(next_n) # prints the current Fibonacci number
    count += 1 
    n1, n2 = n2, next_n # updates n1 and n2 for the next iteration n2 becomes the new n1, and next_n becomes the new n2
    next_n = n1 + n2 # calculates the next Fibonacci num
print() 
    