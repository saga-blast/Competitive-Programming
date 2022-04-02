import math
def check(n):
    if n<=1 :
        return False
    elif n<=3 :
        return True
    if n%2==0 or n%3==0 : 
        return False
    for i in range(5,math.sqrt(n)) :
        if n%i==0 or n%(i+2)==0:
            return False
        i+=6
        if i*i>n :
            break 
    return True

n=int(input())
cnt=0
temp=1
while(n!=1):
     cnt=0
     temp+=1
     for i in range(1,n) :
        if(check(i)) :
            cnt+=1
     n-=cnt;
print(temp) 

