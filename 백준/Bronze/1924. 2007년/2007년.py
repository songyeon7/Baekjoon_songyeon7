import calendar
a, b = map(int , input().split())
yoil = calendar.weekday(2007, a, b)
if(yoil == 0):
    print('MON')
if(yoil == 1):
    print('TUE')
if(yoil == 2):
    print('WED')
if(yoil == 3):
    print('THU')
if(yoil == 4):
    print('FRI')
if(yoil == 5):
    print('SAT')
if(yoil == 6):
    print('SUN')