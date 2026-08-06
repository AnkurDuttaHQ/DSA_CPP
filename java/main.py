import time
import sys

lyrics = [
    "Tu hi hai mujhko bata de",
    "Chahu main ya na",
    "Itna tu dilka bata de chahu main ya na",
    "Itna Bata du tujhko",
    "Chahat mein apni mujhko",
    "DIl to nahi iktyaar",
    "Phir bhi yeh socha dil ne",
    "Abh jo laga hu milne",
    "Tu hi hai mujhko bata de",
    "Chahu main ya na",
]

for line in lyrics:
    for char in line:
        print(char, end='', flush=True)
        time.sleep(0.1)  # Wait for 0.1 seconds before printing the next character
    print()  # Print a newline after each line
    time.sleep(1)  # Wait for 1 second before printing the next line