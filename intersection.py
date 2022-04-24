a=[1,2,3,3,1,4]
b=[2,1,3,1,5,4]
common=[]
for i in range(len(a)):
	for j in range(len(b)):
		if a[i]==b[j]:
			common.append(a[i])
			b[j]=-b[j]
		else:
			continue
print(common)