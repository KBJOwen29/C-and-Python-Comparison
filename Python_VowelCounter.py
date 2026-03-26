# Function to check if a character is a vowel
def is_vowel(ch):
    return ch.lower() in ['a', 'e', 'i', 'o', 'u']

text = input("Enter a word or sentence: ")

vowel_count = 0
consonant_count = 0

for ch in text:
    if ch.isalpha():  # only letters
        if is_vowel(ch):
            vowel_count += 1
        else:
            consonant_count += 1

print("Total vowels:", vowel_count)
print("Total consonants:", consonant_count)
