studentName = "Bartolomeus"
studentAge = 16
studentProgram = "TE23"
studentCourses = ["Programmering 2", "Engelska 6"]

student1Name = "Bartolomina"
student1Age = 17
student1Program = "EE22"
student1Courses = ["DAODAC", "Programmering 1"]

#print (f"{studentName} går i {studentProgram}")

# Ineffektiv kod ovan, variablerna suger, enkelt sagt.

student = {
    "name": "Bartolomeus", 
    "age": 16,
    "program": "TE23",
    "courses": ["Programmering 2", "Engelska 6"]
}
student1 = {
    "name": "Bartolomina", 
    "age": 17,
    "program": "EE22",
    "courses": ["DAODAC", "Programmering 1"]
}

#Vilket program går 'Student' i?
print (f"{student['name']} går i {student['program']}")

#En databas över elever.
students = [student, student1]

print ("Alla elever i skolan:")
for student in students:
    print(student["name"])

#Räkna ut snitt åldern i skolan.
age = 0
for student in students:
    age += student['age']

age /= len(students)
print (f"Snittåldern är {age}.")