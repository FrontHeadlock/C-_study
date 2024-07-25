'''
standardPrice = {'쌀':9900, '상추':1900, '고추':2900,'마늘':8900,'통닭':5600,'햄':6900,'치즈':3900}

def getDiscountPrice(rate):
    dcPrice={}
    for goods in standardPrice.keys():
        disPric = int(standardPrice[goods] * (1-(rate/100)))
        dcPrice[goods] = disPric
    return dcPrice

def printPrice(priceList):
    for goods in priceList.keys():
        print(goods, '\t:',standardPrice[goods], '원\t', inputData, '%DC->',priceList[goods],'원')

print('-----------------------------------')
print('-- 한빛마트 오늘의 할인 가격표 출력 시스템 --')
print('-----------------------------------')

inputData = int(input('오늘의 할인율을 입력하세요.'))
getDiscountPrice = getDiscountPrice(inputData)

printPrice(getDiscountPrice)
print('-----------------------------------')

import calculator as ca

ca.addition(1,2)
ca.substraction(1,2)
ca.multiplication(1,2)
ca.division(1,2)
ca.rest(1,2)
ca.portion(1,2)


import circleMod as c

print('원 둘레: ', c.getCircleLength(6))
print('원 넓이: ', c.getCircleArea(6))

file = open('/Users/kyumin/Desktop/백준_1/JOON/test19.txt','r')
result = file.read()
print('result : ',result)
sum = result +1
print('sum: ',sum)
file.close()'''

from time import strftime,localtime

def getDay():
    return strftime("%Y-%m-%d",localtime())

def getTime():
    return strftime('%H:%M:%S',localtime())

print('*************** 한 줄 일기 ***************')

dFlag = True
while dFlag:
    print('\n다음 항목을 선택하세요.')
    selectItem = int(input('1.일기 작성 \t2.일기 보기\t3.종료'))

    if selectItem ==1:
        print('\n['+getDay()+']한 줄 일기를 작성하세요.')
        todayDiary = input()

        with open('diary.txt','a')as f:
            f.write('['+getDay()+' '+getTime()+'] ')
            f.write(todayDiary+'\n')

    elif selectItem ==2:
        with open('diary.txt','r')as f:
            str = f.read()
            print(str)
    elif selectItem ==3:
        print('\nBye~~')
        dFlag = False
