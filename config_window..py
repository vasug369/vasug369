from tkinter import *
from tkinter import messagebox

def display(c,l1):
	l1.config(text=f"{c.get()}")
	l1.place(x=5,y=60)
	print(c.get())
	





root=Tk()
root.geometry("500x600")
root.config(bg="aqua")

l=Label(root,width="500",height="2")
l.config(bg="white")
l.place(x=0,y=0)
# b1=Button(root,text="file",width=7)
# b1.config(bg="white")
# b1.place(x=0,y=8)
choice=StringVar()
choice.set("new")
# choice.set("about")
options=["new ",
		"file",
		"edit",
		"about",
]

l1=Label(root,text=" ")


drop=OptionMenu(root,choice,*options,command=lambda:display).place(x=0,y=0)

root.mainloop()
