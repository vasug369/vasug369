'''this project will arrange all the pdf,pngs,transaction slips,college admit card, etc inside this app so we can easily access them by one click from this whole laptop'''


from tkinter import * 
from tkinter import messagebox
from PIL import ImageTk,Image
from Doc_buddy_fun_assist import *
import os

def main():
	
	root=Tk()
	root.title("YOUR PERSONAL DOCUMENT VAULT")
	root.geometry("900x900")
	root.iconbitmap(r"C:\Users\vasug\OneDrive\Downloads\doc.ico")
	
	Label(root,text="WELCOME TO YOUR PERSONAL DOCUMENT VAULT" ,font="Chiller 28 bold italic").place(x=120,y=0)

	text=Text(root,wrap=WORD)
	text.insert(INSERT,'''Document management, often referred to as Document Management Systems (DMS), is the use of acomputer system and software to store, manage and track electronic documents and electronic images of paper-based information captured through the use of a document scanner.
Document management is how your organization stores, manages, and tracks its electronic documents.
According to ISO 12b651-2, a document is "recorded information or object which can be treated as a unit." While this sounda little complicated, it is quite simply what you have been using to create, distribute and use for years.
Now, we can define document management as the software that controls and organizes documents throughout an organization. It incorporates document and content capture, workflow, document repositories, COLD/ERM, and output systems, and information retrieval systems.  Also, the processes used to track, store, and control documents.Document management, often referred to as Document Management Systems (DMS), is the use of a computer system and software to store, manage and track electronic documents and electronic images of paper-based information captured through the use of a document scanner.
Document management is how your organization stores, manages, and tracks its electronic documents.
According to ISO 12651-2, a document is "recorded information or object which can be treated as a unit." While this sounds a little complicated, it is quite simply what you have been using to create, distribute and use for years.
Now, we can define document management as the software that controls and organizes documents throughout an organization. It incorporates document and content capture, workflow, document repositories, COLD/ERM, and output systems, and information retrieval systems.  Also, the processes used to track, store, and control documents.''')

	text.place(x=125,y=80)
	text.configure(state="disabled")

	# pic=ImageTk.PhotoImage(r"C:\Users\vasug\OneDrive\Downloads\doc_image.png")

	# image=Label(root,image=pic)
	# image.plbace(x=150,y=80)
	

	b1=Button(root,text="REGISTER",font="algerian 25 bold" ,relief="groove",command=lambda:register(root)).place(x=350,y=500)
	b2=Button(root,text="LOGIN",font="algerian 25 bold",relief="groove",command=lambda:login(root)).place(x=380,y=580)
	
	root.mainloop()














if __name__=="__main__":
	os.system("start c:\\programs\\Doc_buddy_assist.bat")
	os.system("exit")

	main()
