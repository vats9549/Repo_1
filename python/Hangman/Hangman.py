import random
import json

f=open('/home/vatsal/Downloads/words.json',)
ListWords = json.load(f)
Word=random.choice(ListWords['data'])
print("Guess The Chars")
turns = 12
guesses = ''
while turns > 0:
    failed = 0
    for char in Word:
        for char in guesses:
            print(guesses)
        else:
            print("_")
        
        failed += 1
        if failed ==0:
            print("You Win")

            print("the word is"+Word)
            break
        turns = turns -1

f.close()
