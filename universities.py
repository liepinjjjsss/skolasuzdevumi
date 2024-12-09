import requests

url = "http://universities.hipolabs.com/search?country="

response = requests.get(url+"Latvia")
dati = response.json()

universities = []
for university in dati:
    universities.append(university["name"])
    
universities.sort()
for university in universities:
    print(university)

