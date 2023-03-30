# BASICS-1
# print("hello world")

# to display the keywords listed
# help("keywords");
# these cannot be used as variable names

# MEMORY LOCATION ALLOCATION
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


# # to get ASCII VALUE OF A CHARACTER
# print(ord("a"))
# print(ord(" "))
# # to get THE CHARACTER AT THE NUMBER
# print(chr(97))
# print(chr(2325))

# STRINGS
# name="hemanth#"
# print(len(name))
# print(name[3])
# print(name[0])
# print(name[-len(name)])
# print(name[0]==name[-len(name)])#true



# print(name[0:len(name):])#hemanth
# print(name[::-1])#htnameh
# print(name[-1:-(len(name)+1):-1])#htnameh
# print(name[-1:0])#NULL
# print(name[::])#hemanth

# STRING METHODS BASICS
# name="hemanth#"
# print(name.capitalize())
# print(name.title())
# print(name.upper())
# print(name.lower())
# print(name.find("h"))
# print(name.count("h"))
# print(name.index("h"))
# print(name.replace("a","A"))
# print(name.split())
# print(name.split("h"))
# print(name.isupper())
# print(name.islower())
# print(name.isalnum())
# print(name.isalpha())

# print("hemanth srinivas".isalpha())#false as there is a space between two words

# #STRING FORMATTING
# name="hemanth"
# age=19
# print("hey my name is ",name,". and my age is ",age)
# print("hey my name is {}. and my age is {}".format(name,age))
# # latest method keep f in front of text
# print(f"hey my name is {name}.and my age is {age}")

# STRING CONCATENATION
# fname="hemanth"
# lname="srinivas"
# print(fname+lname)
# print(fname*3)

# #printing vowels
# name="hemanth srinivas"
# for i in name:
#     if(i=="a" or i=="e" or i=="i" or i=="o" or i=="u"):
#         print(i)

# # STRING PALINDROME
# str=input("Enter the text ")
# if str==str[::-1]:
#     print("it is a palindrome")
# else:
#     print("it is not a palindrome")

# LISTS
# lists are mutable/changeable
# l1=[2,3,4,5]
# print(type(l1))
# l1[0]=1
# for i in l1:
#     print(i,end=" ")

# list slicing is similar to string slicing

# l1=[0,1000,100,200,300,100]
# print(l1.count(100))
# print(l1.index(100))
# print(l1.pop())

# # you cannot print directly below three ,first you need to enter them
# # print(l1.remove(200))
# # print(l1.sort())
# # print(l1.insert(0,-1))
 
# l1.remove(200)
# print(l1)
# l1.sort()
# print(l1)
# l1.insert(0,-1)
# print(l1)

# APPEND AND EXTEND methods
# l1=[1,2,3]
# # APPEND method adds the whole thing at a time considering it as one
# #EXTEND method adds the each single value after iterating throught the object
# l1.append(4)
# print(l1)
# l2=[4,5,6]
# l1.append(l2)
# print(l1)
# l1.extend(l2)
# print(l1)
# name="hemanth"
# l1.extend(name)
# print(l1)

#2D LISTS
# l1=[[1,2],[3,4]]
# print(l1[0][0])#1
# print(l1[1][1])#4
# # iterating over 2d list
# for i in l1:
#     for j in i:
#         print(j)

# LIST COMPREHENSION
# SIMPLE APPROACH
# l=[]
# for i in range(10):
#     l.append(i)
# print(l)
# # MODERN APPROACH
# l1=[i for i in range(10)]
# print(l1)
# l2=[i**2 for i in range(10)]
# print(l2)

# TUPLES
# these are immutable,cannot be edited or changed
# a=("hemanth",1,4,3)
# print(a)
# a[1]=3 not possible 

# CREATING A TUPLE
# # 1//
# t=tuple()
# print(type(t))
# t1=tuple("hemanth")
# print(t1)
# # Single element tuple initailization
# t2=(2)#integer
# print(type(t2))
# t3=(2,)#tuple
# print(type(t3))


# you can change the value of element of list that is present inside a tuple
# t=([1,2,3],"string")
# t[0][1]=-1
# print(t)

# # TUPLE UNPACKING
# a,b=1,2
# print(a,b)
# t=(1,2,3,4)
# a,b,c,d=t
# print(a,b,c,d)

# TUPLE METHODS
# a=(1,2,1,3)
# print(a.count(1))
# print(a.index(1))
# c=(4,5,6,0)
# b=a+c
# print(b)
# print(b*2)

# # TUPLE TO LIST AND LIST TO TUPLE
# l1=list(a)
# print(l1)
# l2=tuple(l1)
# print(l2)

# # DICTIONARIES
# d=dict()
# print(type(d))
# d1={}
# print(type(d1))
# d2={
#     "Apple":120,
#     "Mango":140,
#     "Orange":160
# }
# print(d2)

# LISTS TO DICTIONARY
# name=["Apple", "Mango", "Orange"]
# prices=[120,140,160]
# d3=dict(zip(name, prices))
# print(d3)

# # PRINTING 1
# print(d3["Apple"])
# # print(d3["Google"]) It shows error message,so to avoid error we use get method instead
# # PRINTING 2
# # print(d3.get("Apple"))
# # print(d3.get("Google","no google is not available"))

# # UPDATING EXOSTING VALUE IN DICTIONARY
# d2={
#     "Apple":120,
#     "Mango":140,
#     "Orange":160
# }
# # print(d2["Apple"]);
# # d2["Mango"]={"large":140, "medium":70};
# # print(d2)

# # # ADDING ONE NEW KEY,VALUE TO DICTIONARY
# # d2["Grapes"]=180
# # print(d2)

# # #ADDING MULTIPLE NEW KEY,VALUE TO DICTIONARY
# # new={"Carrot":200,"Potato":220,"Brinjal":240}
# # d2.update(new)
# # print(d2)

# # CHECKING CITIZENSHIP OF KEY
# print("Mango" in d2);#true
# print("pineapple" in d2);#false

# # #DELETING RANDOM VALUE
# # d2.pop("Apple");
# # print(d2)#mango,orange
# # #DELETING LAST VALUE
# # d2.popitem();#mango
# # print(d2)
# #DELETING WHOLE DICTIONARY
# # del d2#the whole dictionary d2 will be erased from computre memeory
# # print(d2)


# #ITERATING ON DICTIONARY
# #1
# for i in d2:
#     print(i , d2[i])
# #2
# for key,value in d2.items():
#     print(key,value)
    
# #VALUES,KEYS,ITEMS METHODS
# print(d2.keys(),d2.values(),d2.items(),sep='\n')    

# # TO DISPLAY FREQUENCY OF ALPHABETS IN A WORD
# name=input("Enter your name:")
# freq={}
# for i in name:
#     if i not in freq:
#         freq[i]=1
#     else: 
#         freq[i]+=1
# print(freq)