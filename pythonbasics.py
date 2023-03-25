# print("hello world")

# to display the keywords listed
# help("keywords");
# these cannot be used as variable names

# a=23.4
# print(a)
# here a is stored in stack and 23.4 is stored in heap
# //MEMORY STORAGE
# print(id(a))//12345
# a=2
# print(id(a))//12376

# # DATA TYPES
# a=2
# b=2.3
# c=True
# # true is not valid
# # VALID STRINGS
# # starting symbol=ending symbol
# d="hemanth"
# e='srinivas'
# # MULTILINE STRINGS
# f="""
# my name is hemanth
# i love 27
# """
# print(f)
# print(type(f))
# # NONE=NULL(C/C++)
# g=None
# print(type(g))

# INPUT FUNCTION
# TYPE CONVERSION
# x=input("Enter a number ")
# print(x)
# print(type(x))#type=string
# y=float(x)
# print(y)
# print(type(y))
# z=int(y)
# print(z)
# print(type(z))

# PRINTING MULTIPLE VALUES
# print("Hemanth",23,23.4,True)

# KNOWING ABOUT SEP AND END IN PRINT FUNCTION
# print("Hemanth","Srinivas",sep="/",end="~")
# by default sep=" "(space) and end="\n"(next line)

# ARITHMETIC OPERATORS
# a=-2
# b=3
# print(a+b)
# print(a-b)
# print(a/b)#always a float value
# print(a//b)#floor division returns greatest integer factor
# print(a*b)
# print(a**b)
# print(a,b)

# # STRING CONCATENATION
# first="hemanth"
# last="srinivas"
# print(first+last)
# print(first*3+last*3)

# COMPARISION OPERATOR
# a=2
# b=3
# print(a>=b)
# print(a<=b)
# print(a!=b)
# print(a==b)

# ASSIGNMENT OPERATORS
# a=2
# a+=2
# print(a)
# a-=1
# print(a)
# a/=2
# print(a)
# a*=2
# print(a)

# LOGICAL OPERATORS
# a=2
# b=3
# c=4
# d=5
# print(b>a and d>c)
# print(b>a or c>d)
# print(not a>b)

# IS OPERATOR AND IN OPERATOR
# name="hemanth srinivas"
# print("srini" in name)
# a=5
# b=5
# print(id(a),id(b))
# print(a is b)
# c=2
# d=5
# print(c is d)

# # IF ELSE
# a=int(input("enter your age"))
# if a>=18:
#     print("you are eligible to vote")
# else:
#     print("you cannot drive")

# NESTED IF ELSE
# a=int(input("Enter you age"))
# if a>18:
#     if a>65:
#         print("take rest")
#     else:
#         print("you are eligible")
# else:
#     print("you are too young to drive")


# ELIF
# a=20
# if a>20:
#     print(">20")
# elif a>10:
#     print(">10")
# else:
#     print(a)

# PROBLEM 1 -LOOP BASICS
# marks=[90,85,100,20,30]
# highest=marks[0]
# for i in marks:
#     if i>highest:
#         highest=i
# print(highest)        
# print(max(marks))
# print(min(marks))

#  WHILE LOOP
# i=0
# while i<=6:
#     print("you are best")
#     i+=1
#numbers in range
# i=1
# while i<=10:
#         print(i,sep=" ")
#         i=i+1
# even numbers in range
# i=1;
# while i<=10:
#     if i%2==0:
#         print(i,sep=" ")
#     i+=1
# sum of numbers 1 to 10
# i=1
# sum=0
# while i<=10:
#     sum+=i
#     i+=1

# print(sum)

# RANGE FUNCTION
# print(list(range(5)))//0,1,2,3,4
# print(list(range(1,5)))//1,2,3,4
# print(list(range(1,5,2)))//1,3
# print(list(range(-2,-10,-2)))//-2,-4,-6,-8,-10

# FOR LOOP
# for i in range(0,11):
#     print(i,end=" ")

# MULTIPLICATION TABLE
# n=5
# for i in range(1,11):
#     print(n*i)

# # pattern 1
# for i in range(4):
#     for j in range(4):
#         print("#",end=" ")
#     print()#to move into new line

# pattern 2
# n=4
# for i in range(1,n+1):
#     for j in range(i):
#         print("#",end=" ")
#     print()#to move into new line

# BREAK,CONTINUE,PASS
# def fun():
#     pass#to control the error

# for i in range(1,11):
#     if i==5:
#         continue
#     elif i==6:
#         break
#     print(i)