import pyttsx3,os
from tkinter import *
from tkinter import messagebox
from tkinter.filedialog import askopenfile 
def speak(body):
	engine=pyttsx3.init()
	voice=engine.getProperty('voices')
	engine.setProperty('voice',voice[1].id)
	rate=engine.getProperty('rate')
	engine.setProperty('rate',5)
	engine.say(body)
	engine.runAndWait()
if __name__=="__main__":
	root=Tk()
	root.geometry("500x600")
	root.title("speak the text file")
	file=askopenfile(mode='r',filetypes=[('text files','*.txt')])
	content=file.read()
	speak(content)
	root.mainloop()
