from colorama import Fore, Style
import random as r

def redText():
    return Fore.RED
def blueText():
    return Fore.BLUE
def greenText():
    return Fore.GREEN
def yellowText():
    return Fore.YELLOW
def brownText():
    Fore.BROWN
def pinkText():
    Fore.PINK


def welcomeMessage():
    welcome = "Welcome to My Program"
    for letter in welcome:
        print(randColor() + letter, end="", flush=True)
        Style.RESET_ALL  

def randColor():
    randint = r.randint(1,4)
    if randint == 1:
        textColor = redText()
    if randint == 2:
        textColor =blueText()
    if randint == 3:
        textColor =greenText()
    if randint == 4:
        textColor =yellowText()
    return textColor
         

welcomeMessage()
end_prog = "y"
while end_prog != "n":
    print(Style.RESET_ALL, "")
    colorChoice = input("\nDo you want to choose a color or have a random color chosen for you?  (c/r)  " )
    if colorChoice == "c":
        print("great!")
        print("What color would you like...")
        colorChoice = input("Blue(B), Red(R), Green(G), or Yellow(Y)?  ")
        if colorChoice.lower() =="b":
            textColor = blueText()
        if colorChoice.lower() =="r":
            textColor = redText()
        if colorChoice.lower() =="g":
            textColor = greenText()
        if colorChoice.lower() =="y":
            textColor = yellowText()
    else:
        randChoice = r.randint(1,4)
        textColor = randColor()
       
    print("The color has been selected!")
    wording = input("What do you want to say?  ")
    print("Great, here is you output...")
    print(textColor, wording, Style.RESET_ALL)
    end_prog = input("\nDo you want to do it again? (y/n) ")

print("That's okay, I hope you had fun!")