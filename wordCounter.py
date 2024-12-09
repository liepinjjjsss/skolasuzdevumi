word_counter = {}

with open("teksts.txt", 'r') as textFile:
    for text in textFile:
        words = text.split()
        for word in words:
            if word.lower() not in word_counter:
                word_counter[word.lower()] = 1
            else:
                word_counter[word.lower()] += 1

n = len(word_counter)
items = list(word_counter.items())
for i in range(n):
    for j in range(n-1):
        if items[i][1] < items[j][1]:
            temp = items[i]
            items[i] = items[j]
            items[j] = temp
        else:
            continue

for i in range(5):
    print(f"{i+1}. most used word is \"{items[-1-i][0]}\" with {items[-1-i][1]} uses.")
