from tkinter import *
from tkinter import messagebox

def mainroot():
	root=Tk()
	root.title("school management system")
	root.geometry("800x500")
	
	Label(root,text="School Management System",font="verdana 20 bold").place(x=180,y=0)
	
	name=Label(root,text="Name",font="verdana 18").place(x=10,y=50)
	ename=Entry(root).place(x=100,y=60)
	
	mail=Label(root,text="Email",font="verdana 18").place(x=10,y=100)
	e_mail=Entry(root).place(x=100,y=110)

	clas=Label(root,text="class",font="verdana 18").place(x=10,y=150)
	e_clas=Entry(root).place(x=100,y=150)

	fname=Label(root,text="father's name",font="verdana 18").place(x=10,y=200)
	e_fname=Entry(root).place(x=190,y=210)


	



	root.mainloop()







if __name__=="__main__":
	mainroot()