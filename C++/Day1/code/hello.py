
import imp


import pyautogui
import time


comments = ["Hi Mia kholifa price koto?","A tor koyda lage?","Eto gula eksathe samlaw kmne?","Like as Mia Kholifa","You are like Porn star","Next Hrdcore Actor","Sexy 👌","oh Hot🔥","Ekhon Barishal theke vara dew bah!","Id lock kor khanki magi"]
time.sleep(2)

for i in range(100):
    pyautogui.typewrite(comments[i%10])
    pyautogui.typewrite("\n")

    time.sleep(2)
    
    



