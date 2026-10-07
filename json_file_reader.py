import json

# Open JSON file
with open("data.json", "r") as file:
    data = json.load(file)

# Print formatted output
print("Name:", data["name"])
print("Age:", data["age"])
print("Course:", data["course"])
print("Skills:", data["skills"])