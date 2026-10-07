text = """Hello my name is Abhinit.
I am learning Python.
Python is easy to learn."""

# Count characters
characters = len(text)

# Count words
words = len(text.split())

# Count lines
lines = len(text.splitlines())

print("Characters:", characters)
print("Words:", words)
print("Lines:", lines)
