# 🎹 Button Piano — 4 Notes

> **Arduino Project #04** — أربعة أزرار تعزف نغمات موسيقية مختلفة عبر Buzzer/Speaker

[![Arduino](https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=arduino&logoColor=white)](https://www.arduino.cc/)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://isocpp.org/)
[![Level](https://img.shields.io/badge/Level-Beginner-green?style=for-the-badge)](https://github.com/S-mohannad)

---

## 📋 Description

بيانو بسيط بأربعة أزرار — كل زر يشغّل نغمة موسيقية مختلفة (نوتة) عند الضغط عليه عبر مكبر صوت أو Buzzer على Pin 13:
- **زر 1 (Pin 9)** — نغمة عالية (9261Hz)
- **زر 2 (Pin 8)** — نغمة متوسطة-عالية (7571Hz)
- **زر 3 (Pin 7)** — نغمة متوسطة (5991Hz)
- **زر 4 (Pin 6)** — نغمة منخفضة (3741Hz)

يستخدم `INPUT_PULLUP` لكل الأزرار، فالقراءة تكون 0 عند الضغط.

---

## 🔌 Circuit

```
Arduino UNO
┌─────────────────┐
│            13 ●─┼──🔊 Speaker/Buzzer ── GND
│             9 ●─┼──────────🔘 زر 1 ── GND
│             8 ●─┼──────────🔘 زر 2 ── GND
│             7 ●─┼──────────🔘 زر 3 ── GND
│             6 ●─┼──────────🔘 زر 4 ── GND
└─────────────────┘
```

- 🔊 Speaker/Buzzer على Pin 13
- 🔘 4 أزرار على Pins 9, 8, 7, 6 — لا تحتاج مقاومات خارجية (INPUT_PULLUP مدمجة)

---

## 💡 Concepts Used

- `INPUT_PULLUP` — لأربعة أزرار دفعة واحدة
- `tone(pin, frequency, duration)` — توليد نغمة بتردد ومدة محددة
- `if` منفصلة لكل زر (وليس `else if`) — يسمح بفحص كل الأزرار في كل دورة
- **ربط الإدخال الرقمي بالإخراج الصوتي مباشرة**

---

## 📊 Behavior

| الزر | Pin | التردد | المدة |
|------|-----|--------|-------|
| 1 | 9 | 9261 Hz | 150ms |
| 2 | 8 | 7571 Hz | 150ms |
| 3 | 7 | 5991 Hz | 150ms |
| 4 | 6 | 3741 Hz | 150ms |

---

## 🔗 Code

```cpp
int c=9,d=8,e=7,f=6;
void setup() {
  pinMode(13,OUTPUT);
  pinMode(c,INPUT_PULLUP);
  pinMode(d,INPUT_PULLUP);
  pinMode(e,INPUT_PULLUP);
  pinMode(f,INPUT_PULLUP);
}
void loop() {
if(digitalRead(c)==0)
{tone(13,9261,150);}
if(digitalRead(d)==0)
{tone(13,7571,150);}
if(digitalRead(e)==0)
{tone(13,5991,150);}
if(digitalRead(f)==0)
{tone(13,3741,150);}
}
```

## 🔧 How to Run

1. افتح **Arduino IDE**
2. وصّل الدائرة كما في الرسم
3. انسخ الكود والصقه
4. اختر **Board:** Arduino UNO
5. اختر **Port** الصحيح
6. اضغط ⬆️ **Upload**
7. جرب الضغط على كل زر وشاهد اختلاف النغمة

---

## 👨‍💻 Author

**S-mohannad** — [@S-mohannad](https://github.com/S-mohannad)
