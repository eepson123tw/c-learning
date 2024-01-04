# C 語言的數據類型

包括基本數值類型、指針類型以及結構（struct）、聯合（union）和枚舉（enum）。以下是這些類型的簡單介紹和案例

## 1. 基本數值類型

- **整數類型**（如 `int`、`short`、`long`）：用於表示整數。
- **浮點類型**（如 `float`、`double`）：用於表示小數。

  **案例**：

  ```c
  int integer = 10;
  float floatingPoint = 3.14;
  ```

## 2. 指針類型

- **指針**（如 `int*`、`char*`）：存儲變量的內存地址。

  **案例**：

  ```c
  int value = 5;
  int *pointer = &value;
  ```

## 3. 結構（Struct）

- **結構體**：可以包含不同類型的數據，是一種自定義的數據類型。

  **案例**：

  ```c
  struct Person {
      char name[50];
      int age;
  };
  struct Person person;
  ```

## 4. 聯合（Union）

- **聯合體**：允許在相同的內存位置存儲不同的數據類型，但只能同時使用其中一種。

  **案例**：

  ```c
  union Data {
      int intVal;
      float floatVal;
      char charVal;
  };
  union Data data;
  ```

## 5. 枚舉（Enum）

- **枚舉**：用於定義命名的整數常量，提高代碼的可讀性。

  **案例**：

  ```c
  enum Color { RED, GREEN, BLUE };
  enum Color color = RED;
  ```

通過這些類型，C 語言為程序員提供了豐富的數據表示方式，從而能夠處理各種複雜的數據結構和算法。這些類型是理解和有效使用 C 語言的基礎。
