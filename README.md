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
- [util/delay.h의 _delay_ms 사용](https://until.blog/@benedictuspark/atmega128a--led-%EB%91%90-%EA%B0%9C-%EB%B2%88%EA%B0%88%EC%95%84-%EA%B9%9C%EB%B9%A1%EC%9D%B4%EA%B8%B0)
### 2. Timer/Counter0 CTC 사용
- [$\approx$ 2049.18Hz로 Passive Buzzer 사용하기](https://until.blog/@benedictuspark/atmega128a-8bit-timer-counter0-ctc%EB%A1%9C-%EB%B6%80%EC%A0%80-%EB%8B%A4%EB%A3%A8%EA%B8%B0-)