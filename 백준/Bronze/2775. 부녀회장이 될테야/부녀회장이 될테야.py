T = int(input())
for i in range(T):
    floor = int(input()) # 층
    room = int(input()) # 호수

    base = [i for i in range(1, room+1)] # 0층 부분 초기화

    # 각 층에 대한 리스트를 다시 생성
    for j in range(floor):
        for k in range(1, room): # 각 층별 인원수 중 0번째 인덱스는 항상 1이기 때문에 1부터 반복
            base[k] += base[k-1]
    print(base[room-1]) # 인덱스 번호에 해당되는 값을 출력해야 한다
        
        