a=2
b=2
c=3
x=a
y=b
for i in range(2,c+1):
    a=a+5
    if i%2==1:
        b=b+10
    x=x+a
    y=y+b
print(x,y)
