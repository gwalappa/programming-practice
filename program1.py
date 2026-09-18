num1=int(input("enter the first number:"))
num2=int(input("enter the second number:"))
print("enter which operation would like to ferform?")
ch=input("enter any of the charcter for specific operator +,-,*,/:")
result=0
if ch=='+':
    result=num1+num2
elif ch=='-':
    result=num1-num2
elif ch=='*':
    result=num1*num2
elif ch=='/$Recycle.Bin':
    result=num1/num2
else:
    print("invalid operation____")
print(num1,ch,num2,"=",result)
