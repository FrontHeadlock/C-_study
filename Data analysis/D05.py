scores = {'C/C++':'A', 'Java':'B+', '네트워킹':'C','보안':'A+','해킹':'F','시스템':'C+'
}

print('#시나리오1')
print(scores)

print('#시나리오2')
print('Java :',scores['Java'])

print('#시나리오3')
scores['파이썬'] = 'A'
scores['OS'] = 'A+'
print(scores)

print('#시나리오4')
scores['Java'] = 'F'
scores['시스템'] = 'A'
print(scores)

print('#시나리오5')
for key in scores.keys():
    print(key,'\t',scores[key])

def startTemperatureSensor():
    print('온도센서 작동을 시작한다.')
def stopTemperatureSensor():
    print('온도센서 작동을 중지한다.')
startTemperatureSensor()
stopTemperatureSensor()

def greet():
    print('Hello')
    print('Nice to meet you')
greet()
greet()
greet()

def fun1():
    print('fun1 함수를 호출합니다')
def fun2():
    print('fun2 함수를 호출합니다')
def fun3():
    fun1()
    fun2()
    print('fun3 함수를 호출합니다')
fun3()

def add():
    print('덧셈 결과 : ', inputNum1+inputNum2)
def sub():
    print('뺄셈 결과 : ', inputNum1-inputNum2)
def mul():
    print('곱셈 결과 : ', inputNum1*inputNum2)
def div():
    print('나눗셈 결과 : ', inputNum1/inputNum2)
def calc():
    if(selectOperator == 1):
        add()
    elif(selectOperator ==2):
        sub()
    elif (selectOperator == 3):
        mul()
    elif (selectOperator == 4):
        div()
inputNum1 = float(input('숫자를 입력하세요 : '))
selectOperator = int(input('연산자를 선택하세요 1.덧셈 2.뺄셈 3.곱셈 4.나눗셈'))
inputNum2 = float(input('숫자를 입력하세요 : '))

calc()

def greet1(name):
    print(name, '씨,안녕하세요')

greet1('홍길동')
greet1('박찬호')
greet1('박지성')

def addfunction(n1,n2):
    sum = n1+n2
    return sum
result = addfunction(10,20)
print(result)