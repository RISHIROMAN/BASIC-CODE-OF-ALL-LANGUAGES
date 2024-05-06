


nums = [1,0,0,0,1,0,0,1]
k=2

a = []
c= []

for i in range(0,len(nums),1):
    if nums[i] ==1:
        a.append(i)
print(a)

for i in range(0,len(a)-1,1):
    b=a[i+1]-a[i]
    c.append(b)
print(c)

for i in c:
    if i<k:
        print(False)
    else:
        print(True)
