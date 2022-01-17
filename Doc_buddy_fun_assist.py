from tkinter import *
from tkinter import messagebox
import random
import os

def SUBMIT(root1,s,e1,first_name,last_name,uid,pas,captcha):


	firstname_val=first_name.get()							#getting entry widget values
	lastname_val=last_name.get()
	uid_val=uid.get()
	pas_val=pas.get()
	captcha_val=captcha.get()

	lis=[firstname_val,lastname_val,uid_val,pas_val,captcha_val]

	if s==captcha_val:                              #validate captcha
		# print("yes tgey ar eeq")
		messagebox.showinfo("REGISTRATION COMPLETED","your data has been saved successfully")
		f=open("c:\\DocumentSafe\\data.txt","a+")
		for i in lis:
			f.writelines(i+"  ")
			a=len(lis)
			if i==lis[a-1]:
				f.writelines("\n"+"")
		f.close()


	else:
		messagebox.showerror("fill captcha correctly")
		# e1.insert(0,str(firstname_val))
		# e1.place(x=350,y=80)

	root1.mainloop()

def submit(root1,userid,psw):


	userid_val=userid.get()							#getting entry widget values
	pas_val=psw.get()

	#lis1=[userid_val,pas_val]
	f=open("c:\\DocumentSafe\\data.txt","r")
	
	data=f.readlines()
	ori_data=[]
	
	for j in data:
		ori_data.append(j)

	flag=0

	for l in range(len(ori_data)):
		ori_individual=ori_data[l].split()
		match_ori_id=ori_individual[2]
		match_ori_psw=ori_individual[3]
		
		if str(userid_val)==match_ori_id and str(pas_val)==match_ori_psw: 
			messagebox.showinfo("login successfully","WELCOME %s"%(ori_individual[0]+" "+ori_individual[1]).upper())
			choose_doc(root1)

		elif str(userid_val)!=match_ori_id or str(pas_val)!=match_ori_psw:
			flag+=1
			continue
	if flag==len(ori_data):
		messagebox.showerror("invalid credentials","your id or password is invalid")
			

		

def register(root):
	
	root1=Toplevel(root)
	root1.title("YOUR REGISTRATION WINDOW")
	root1.geometry("800x800")
	
	Label(root1,text="NEW ACCOUNT",font="chiller 28 bold").place(x=250,y=0)
	
	l1=Label(root1,text="First name",font="verdana 20").place(x=50,y=80)
	l2=Label(root1,text="Last name",font="verdana 20").place(x=50,y=120)
	id_l=Label(root1,text="User id",font="verdana 20").place(x=50,y=160)
	pas_l=Label(root1,text="Password",font="verdana 20").place(x=50,y=200)
	l3=Label(root1,text="Enter the captcha",font="verdana 20").place(x=40,y=290)


	s=""
	alpha="abcdefghijklmnopqrstuvwxyz"

	while(len(s)<6):                           #generating captcha

		temp_index=random.randint(0,25)
		temp_num=random.randint(0,1000)
		temp_num=str(temp_num)
		temp_alpha=alpha[temp_index]
		s=s+temp_num+temp_alpha
	

	text=Text(root1,height="1",width="20")
	text.insert(INSERT,s)
	text.configure(state="disabled")
	text.place(x=550,y=300)

	# print("ye hai taza captch.get ",captcha.get())

	
	first_name=StringVar()
	last_name=StringVar()
	pas=StringVar()
	uid=StringVar()
	pas=StringVar()
	captcha=StringVar()

	
	e1=Entry(root1,textvariable=first_name,width="50").place(x=350,y=80)
	e2=Entry(root1,textvariable=last_name,width="50").place(x=350,y=120)
	e3=Entry(root1,textvariable=uid,width="50").place(x=350,y=160)
	e4=Entry(root1,show="*",textvariable=pas,width="50").place(x=350,y=200)
	e5=Entry(root1,textvariable=captcha,width="30").place(x=350,y=300)


	b1=Button(root1,text="SUBMIT",font="algerian 25 bold",relief="groove",command=lambda:SUBMIT(root1,s,e1,first_name,last_name,uid,pas,captcha)).place(x=290,y=380)

def login(root):
	
	root1=Toplevel(root)
	root1.title("LOGIN TO YOUR ACCOUNT")
	root1.geometry("800x800")
	
	Label(root1,text="LOGIN WINDOW",font="chiller 28 bold").place(x=250,y=0)
	
	l1=Label(root1,text="Enter your UserId",font="verdana 20").place(x=50,y=80)
	l2=Label(root1,text="Enter your password",font="verdana 20").place(x=5,y=120)


		

	
	
	userid=StringVar()
	psw=StringVar()

	
	e1=Entry(root1,textvariable=userid,width="50").place(x=350,y=80)
	e2=Entry(root1,textvariable=psw,show="*",width="50").place(x=350,y=120)
	

	b1=Button(root1,text="Submit",font="algerian 25 bold",relief="groove",command=lambda:submit(root1,userid,psw)).place(x=290,y=380)


	

	root1.mainloop()

def choose_doc(root1):
	
	root2=Toplevel(root1)

	root2.title("PERSONALL Document VAULT")
	root2.geometry("800x800")
	
	Label(root2,text="Select The Document You Want To Search",font="chiller 28 bold").place(x=220,y=0)
	
	aadhar=Label(root1,text="Aadhar card",font="verdana 20").place(x=50,y=80)

	def open_doc():

		#label.config( text = clicked.get() )
		doc_sel=clicked.get()
		if doc_sel=="aadhar card":
			os.system(r"start C:\Users\vasug\Desktop\documents\EAadhaar.pdf")

		if doc_sel=="my profile photo":
			os.system(r"start C:\Users\vasug\Desktop\documents\\cec211354_p.pdf")

		elif doc_sel=="10th marksheet":
			os.system(r"start C:\Users\vasug\Desktop\documents\10_marksheet.pdf")

		elif doc_sel=="12th marksheet":
			os.system(r"start C:\Users\vasug\Desktop\documents\12th_marksheet.pdf")

		elif doc_sel=="hostel fee receipt":
			os.system(r"start C:\Users\vasug\Desktop\documents\hostel_fee_receipt.jpeg")

		elif doc_sel=="college fee receipt":
			os.system(r"start C:\Users\vasug\Desktop\documents\EAadhaar.pdf")

		elif doc_sel=="Syallabus":
			os.system(r"start C:\Users\vasug\Desktop\PTU_syallabus\1st_and_2nd_sem_syallabus.pdf")

		elif doc_sel=="vaccine certificate":
			os.system(r"start C:\Users\vasug\Desktop\documents\vaccine_certificate.pdf")
		
		elif doc_sel=="signature":
			os.system(r"start C:\Users\vasug\Desktop\documents\\cec211354_s.pdf")

		elif doc_sel=="jee score card":
			os.system(r"start C:\Users\vasug\Desktop\documents\jee_score_card.pdf")





		else:
			pass

# Dropdown menu options
	options = [
		"aadhar card",
		"my profile photo",
		"10th marksheet",
		"12th marksheet",
		"hostel fee receipt",
		"college fee receipt",
		"Syallabus",
		"vaccine certificate",
		"signature",
		"jee score card"	
	]

# datatype of menu text
	clicked = StringVar()

# initial menu text
	clicked.set( "aadhar card" )

# Create Dropdown menu
	drop = OptionMenu( root2 , clicked , *options ).place(x=250,y=50)

	label = Label( root2, text = " " ).place(x=0,y=0)


# Create button, it will change label text
	button = Button( root2, text = "click here to open document", command = open_doc ).place(x=250,y=100)


# Execute tkinter
	root2.mainloop()

	# l2=Label(root1,text="Last name",font="verdana 20").place(x=50,y=120)
	# id_l=Label(root1,text="User id",font="verdana 20").place(x=50,y=160)
	# pas_l=Label(root1,text="Password",font="verdana 20").place(x=50,y=200)
	# l3=Label(root1,text="Enter the captcha",font="verdana 20").place(x=40,y=290)
	# first_name=StringVar()
	# last_name=StringVar()
	# pas=StringVar()
	# uid=StringVar()
	# pas=StringVar()
	# captcha=StringVar()

	
	# e1=Entry(root1,textvariable=first_name,width="50").place(x=350,y=80)
	# e2=Entry(root1,textvariable=last_name,width="50").place(x=350,y=120)
	# e3=Entry(root1,textvariable=uid,width="50").place(x=350,y=160)
	# e4=Entry(root1,show="*",textvariable=pas,width="50").place(x=350,y=200)
	# e5=Entry(root1,textvariable=captcha,width="30").place(x=350,y=300)


	# b1=Button(root1,text="SUBMIT",font="algerian 25 bold",relief="groove",command=lambda:SUBMIT(root1,s,e1,first_name,last_name,uid,pas,captcha)).place(x=290,y=380)



