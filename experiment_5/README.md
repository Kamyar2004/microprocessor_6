## آزمایش شماره پنج : ساخت یک پیانو با استفاده از پیزو 💡

### هدف 🎯

در این آزمایش به دنبال آن هستیم که به کمک قطعه <strong>پیزوالکتریک</strong> یک پیانو کوچک که دارای 4 عدد نت موسیقی می باشد بسازیم به طوری که بتوان با فشار دادن هر کلید یک نت آن را پخش کرد.

---

### مواد و وسایل مورد نیاز 🛠️

<div align="right">
<table>
<thead>
<tr>
<th>ردیف</th><th>قطعه</th><th>تعداد</th>
</tr>
</thead>
<tbody align="center">
<tr>
<td>1</td><td>بردبورد</td><td>یک عدد</td>
</tr>
<tr>
<td>2</td><td>برد آردوینو UNO</td><td>یک عدد</td>
</tr>
<tr>
<td>3</td><td>سیم جامپر</td><td>یازده عدد</td>
</tr>
<tr>
<td>4</td><td>کابل USB</td><td>یک عدد</td>
</tr>
<tr>
<td>5</td><td>پیزو الکتریک</td><td>یک عدد</td>
</tr>
<tr>
<td>6</td><td>push button</td><td>چهار عدد</td>
</tr>
</tbody>
</table>
</div>

---

### توضیحات کلی 📝

در آزمایش قبلی نت ها خودشان به طور متوالی پخش می شدند اما در این آزمایش 4 نت موسیقی تعیین می کنیم و برای هر نت یک کلید قرار می دهیم به طوری که با فشار دادن هر کلید، نت موسیقی مرتبط به آن از طریق پیزو پخش شود.

---

### سورس کد 💻

```cpp
#define T_C 262
#define T_D 294
#define T_E 330
#define T_F 349

int x1 = 4;
int x2 = 3;
int x3 = 2;
int x4 = 1;
int speacker = 8;

void setup() {
 for (int i = 1; i < 5; i++) {
  pinMode(i, INPUT);
  digitalWrite(i, HIGH);
  }
}

void loop() {
 while(digitalRead(x1) == LOW) {
  tone(speacker, T_C);
  }

  while(digitalRead(x2) == LOW) {
  tone(speacker, T_D);
  }

  while(digitalRead(x3) == LOW) {
  tone(speacker, T_E);
  }

  while(digitalRead(x4) == LOW) {
  tone(speacker, T_F);
  }

  noTone(speacker);
}
```

---

### توصیف کد های برنامه 🧑🏻‍💻

4 عدد نت موسیقی با فرکانس های مختلف را تعریف می کنیم. در تابع setup در حلقه for، به ترتیب از پین شماره 1 تا 4 آردوینو را به عنوان ورودی برای کلیدها تعیین می کنیم و همچنین برای هر ورودی یک ولتاژ High می فرستیم.  
در تابع loop، به ازای هر کلید یک حلقه while تنظیم می کنیم به صورتی که هر گاه یکی از کلیدها فشار داده شد پس ولتاژ Low به ورودی آن فرستاده می شود و از این طریق شرط حلقه مربوط به آن کلید true شده و بدنه آن اجرا می شود یعنی نت موسیقی معادل آن پخش می شود. در انتها نیز یک متد noTone قرار داده شده است که اگر ارتباط کلید قطع شد و از بدنه حلقه بیرون آمد سپس متد noTone صدای خروجی از پیزو را قطع کند.

---

### شرح کارکرد مدار به صورت ویدیویی 🎥

<div align="center">
<img src="/media/microprocessor_17.gif">
</div>

---

### شماتیک مدار 🗺️

<br>

<div align="center">
<img src="/media/schematic_15.jpg" width="600px" height="300px">
</div>

---

### توضیحات شماتیک مدار ✒️

<ol>
<li>
اتصالات پیزو
<ul>
<li>یک پایه به پین 8 آردوینو</li>
<li>یک پایه به پین Gnd آردوینو</li>
</ul>
</li>
<li>
اتصالات کلیدها
<ul>
<li>یک پایه به پین Gnd آردوینو</li>
<li>یک پایه به ترتیب به پین های 1 تا 4 آردوینو</li>
</ul>
</li>
</ol>

---

### نتیجه گیری 👀

با داشتن کلید های بیشتر می توان نت های موسیقی بیشتری را تنظیم کرد تا بتوانیم یک ساز موسیقی کامل بسازیم.