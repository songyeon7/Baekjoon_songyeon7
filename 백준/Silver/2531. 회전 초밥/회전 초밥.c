#include <stdio.h>

int N, d, k, coupon;
inline int max(int A, int B) { if (A > B) return A; return B; }
int arr[3000000 + 3000 + 10], check[3000 + 10];
int cnt, ans;

void input(void){
    scanf("%d %d %d %d", &N, &d, &k, &coupon);
    for (int i = 0; i < N; i++)
        scanf("%d", arr + i);
}

void solve(void){
    // 쿠폰 처리
    check[coupon] = 1; cnt = 1;

    // k개 만큼 초밥을 먹습니다.
    for (int i = 0; i < k; i++){
        // 새로운 종류의 초밥인 경우
        if (check[arr[i]] == 0) cnt++;
        // 종류의 개수
        check[arr[i]]++;
        // 원형 큐 대신에 배열의 뒤에 추가
        arr[N + i] = arr[i];
    }

    // k 크기로 슬라이딩 윈도우 기법으로 먹은 초밥 갱신
    for (int i = 0; i < N; i++){
        ans = max(cnt, ans);
        
        check[arr[i]]--;
        // 해당 초밥을 먹은게 없어진 경우
        if (check[arr[i]] == 0) cnt--;

        if (check[arr[i + k]] == 0) cnt++;
        check[arr[i + k]]++;
    }
}

int main(void)
{
    input();
    solve();
    printf("%d", ans);
}