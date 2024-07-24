'''num =1
while num<=30:
    if num%2 ==0:
        print('짝수 : ',num)
    else:
        print('홀수 : ',num)
    num+=1


num=1
minNum=0;

while num<=100:
    if num%3==0 and num%8==0:
        print(f'공배수 :{num}')
        if minNum ==0: minNum= num
    num +=1

print(f'최소공배수 : {minNum}')


currentTemperature = 30.0
targetTemperature = float(input('희망 온도를 입력하세요: '))

for i in range(1000):
    currentTemperature -=0.1
    print(f'현재 온도: {currentTemperature:.2f}')

    if currentTemperature <= targetTemperature:
        break;

print('냉방 기능 종료!')

num =0

while num<3:
    print('안녕하세요')

for num in range(1,11):
    if num%2==0:continue
    print(num)

for num in range(1,6):
    print(num)
else: print('반복이 끝났습니다')


count = 1
maxArea = 150

while(1):
    result = ((count*2)*(count*3))/2
    if result > maxArea: break
    print(f'삼각형의 넓이는 {result}')
    count+=1


for num in range(1,6):
    for num2 in range(num):
        print('*', end="")
    print()

import turtle
t = turtle.Turtle()
t.shape('turtle')

for i in range(1,11):
    t.circle(20)
    t.up()
    t.goto(i*30,0)
    t.down()
turtle.exitonclick()


for n1 in range(1,10,1):
    for n2 in range(2,10,1):
        print(n2, end='')
        print(' x ', end='')
        print(n1,end='')
        print(' = ',end='')
        print(n2*n1,'',end='')
    print()

for i in range(1,100,1):
    if(i<10):
        if(i%3==0):
            print(f'{i} 짝!', end='')
        else:
            print(f'{i}', end='')
    else:
        print(i, end='')

        A = i//10
        B = i%10

        if(A%3==0):
            print('짝!', end='')

        if B%3==0 and B!=0:
            print('짝!',end='')
    print()


numbers = [1,2,3,4,5]
print(len(numbers))

message = input('메시지를 입력하세요')
print(len(message))

numbers = [10,20,30,40,50]
print(numbers.index(40))

hobby = ['독서','등산','요리']
print(f'Hobbys : {hobby}')

hobby.append('배구')
print(f'홍길동의 취미: {hobby}')


numbers=[1,2,3,4,5,7,8,9]
print(f'numbers : {numbers}')
numbers.insert(5,6)
numbers.append(10)
print(f'numbers : {numbers}')

numbers.pop()
print(numbers)
num=numbers.pop(1)
print(num)


toDoList = ['cleaning','shopping','Toeic Study','exercise']
print(f'오늘 할 일: {toDoList}')
for i in range(len(toDoList)):
    print(f'끝난 일 :{toDoList.pop(0)}')
    if len(toDoList)!=0:
        print(f'남은 일 : {toDoList}')
    else:
        print('할 일 끝!!')


languages = ['java','c/c++','c#','java']
print(languages)

for str in languages:
    if str == 'java':
        languages.remove('java')

print(languages)
'''

scores = [55,35,40,70,65,30]

total = 0
underSubject = 0
avg = 0

for score in scores:
    if score <40:
        underSubject +=1
    total += score

print (f'40점 미만 과목의 수 : {underSubject}')
avg = total/len(scores)
print(f'평균 점수 : {avg:.2f}')

if underSubject >0 or avg<60:
    print('아쉽지만 불합격하셨습니다ㅜ')
else:
    print('축하드립니다 합격하셨습니다!')


