s=input()
a,b=s.split()

a=int(a)
b=int(b)
num1=a
num2=b
if(a<b):
    temp2=a
    a=b
    b=temp2    

while (b!=0):
    if(a>=b):
        temp=a
        a=b
        b=temp%b

print (a)
print(a*int((num1/a))*int((num2/a)))
