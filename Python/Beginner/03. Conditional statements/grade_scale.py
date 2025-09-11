"""Program to rate grades using an if-elif-else block."""

if __name__ == "__main__":
    numeric_grade = int(input("Enter your grade mark (number among 0 and 100): "))
    if numeric_grade >= 90:
        print("Your grade is A")
    elif numeric_grade >= 80:
        print("Your grade is B")
    elif numeric_grade >= 70:
        print("Your grade is C")
    elif numeric_grade >= 60:
        print("Your grade is D")
    elif numeric_grade >= 50:
        print("Your grade is E")
    else:
        print("Your grade is F")
