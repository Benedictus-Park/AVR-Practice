# ATmega 128A 공부용 예제
## 개발보드
- NEWTC 社의 AM-128PRO 사용 중
    - 때문에 PA0을 주기적으로 깜빡거리는 코드는 늘 들어감.
    - 당 개발보드는 PA0 출력이 메인보드의 LED를 점등시키기 때문에, 보드가 잘 돌아가고 있는지 확인하기 위함임.
## 특이사항
- 16MHz External Clock Source (XTal) 사용함.
    
    $\leftrightarrows$ 아직 Internal Clock Source는 사용하고 있지 않음.
## 현재까지 다뤄본 것
### 1. 단순 Pin 5V Out 및 Busy Wait 사용
- util/delay.h의 _delay_ms 사용
### 2. Timer/Counter0 CTC 사용
- $\approx$ 2049.18Hz로 Passive Buzzer 사용하기

## 공부한 내용에 관한 글
### 블로그 링크
https://until.blog/@benedictuspark/collections/atmega128a