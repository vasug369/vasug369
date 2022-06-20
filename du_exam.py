# def series_sum(n):
# 	sum=0
# 	for i in range(1,n+1):
# 		if i%2!=0:
# 			sum+=i**2
# 		else:
# 			sum-=i**2
# 	return sum

# n=int(input("enter the value of n:"))
# print(series_sum(n))



# def func(string):
# 	length=len(string)
# 	repeat=1
# 	final_str=""
# 	for i in range(0,length):
# 		final_str+=a[i]*repeat+" "
# 		repeat+=1
# 	return(final_str)




# a=str(input("enter the string:"))
# print(func(a))



# def f(n):
# 	if n % 5 == 0:
# 		return n * 10
# 	else:
# 		return n + 10
# def display(m = 5):
# 	for i in range(0, m):
# 		print(f(i), end = '$')
# 		print('\n')
 
# display(7)
# display()
# display(3)



# def fn(s):
# 	try:
# 		print(s[5])
# 		except IndexError:
# 		print("Trying to access something beyond valid index")
# 		raise ValueError("Some error")
# 		print("Working properly")
# 	try:
# 		fn("Friend")
# 		fn("Tom")
# 		fn("Karishma")
# 		except ValueError as msg:
# 		print(msg)

def r(s):
	if s == '':
		return s
	else:
		return r(s[1:]) + s[0].upper()
print(r("Hello"))
