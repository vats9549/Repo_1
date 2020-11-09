
def push(list1, a):
    list1.append(a)

def pop(list1):
    a=list1[len(list1)-1]
    del list1[len(list1)-1]
    return a
i=1
list1=[]
x=0
x=int(input("enter no. of elements to be pushed or poped"))
for i in range(0, x):
    z=int(input("enter command : 1 for push or 2 for pop"))
    
    if(z==1):
        c=int(input("enter element"))
        j=0
        for j in list1:
            if(list1[j]!=c):
                list1.append(c)
                j=j+1
            
    if(z==2):
        c=int(input("enter element"))
        for j in list1:
            if(list1[j]==c):
                list1.pop(c)
                j=j+1
            

    i=i+1
    
print(list1)
