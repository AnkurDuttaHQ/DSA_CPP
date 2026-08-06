from gtts import gTTS
import pygame
import time
import os

lyrics = [
    "Tu hi hai mujhko bata de",
    "Chahu main ya na",
    "Itna tu dil ka bata de, chahu main ya na",
    "Itna bata doon tujhko",
    "Chahat mein apni mujhko",
    "Dil to nahi ikhtiyar",
    "Phir bhi yeh socha dil ne",
    "Ab jo laga hoon milne",
    "Tu hi hai mujhko bata de",
    "Chahu main ya na",
]

text = "\n".join(lyrics)   # Convert list to one string

tts = gTTS(text=text, lang="hi")
tts.save("line.mp3")

pygame.init()
pygame.mixer.init()

pygame.mixer.music.load("line.mp3")
pygame.mixer.music.play()

while pygame.mixer.music.get_busy():
    time.sleep(0.1)

pygame.quit()
os.remove("line.mp3")