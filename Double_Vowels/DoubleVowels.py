#!/usr/bin/python3

def doubleVowels(str: str) -> str:
  vowels = ["a", "e", "i", "o", "u"]
  result = ""

  for i in str:
    if i in vowels:
      result += i + i
    else:
      result += i

  return result
