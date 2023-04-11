# cook your dish here
try:
    a,b = input().split()
    a = int(a)
    b = int(b)
    
    if((a+b) > 6):
        print("YES")
    else:
        print("NO")
except:
    print("NO")