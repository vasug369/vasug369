def main():
	n=int(input("enter the number of rows:"))
	l=(n+1)//2
	for i in range(1,l+1):
		space=n-i
		star=i*2-1
		print(" "*space,end="*"*star)
		print()
	k=(n-1)//2
	for j in range(k,0,-1):
		space+=1
		star=j*2-1
		print(" "*space,end="*"*star)
		print()

if __name__=="__main__":
	main()