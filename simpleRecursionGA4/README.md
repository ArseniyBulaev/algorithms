# Простые задачи на применение рекурсии
Задачи из книги: "Грокаем алгоритмы". По ходу решения понял, что разименование nullptr плохая идея(Big brain time)
## Рекурсивное вычисление суммы
* Базовый случай: сумма пустого массива =0, сумма массива из одного элемента = значение этого элемента
* Рекурсивный случай: array[-1] + recursiveSum(array[:-1])
## Рекурсивное вычисление колличества элементов
* Базовый случай: колличество элементов в пустом массиве =0
* Рекурсивный случай: 1 + recursiveCount(array[:-1])
## Рекурсивное вычисление максимального элемента
Реализовал два варианта. До одного додумался сам (на вход передаётся массив, и начальное значение с которым нужно сравнить максимум),второй подсказала книга (Сравнение с результатом из следующего рекурсивного вызова).

* Базовый случай: максимум пустого массива не определён
* Рекурсивный случай: Если последний элемент больше текущего максимума -> обновление максимума. recursiveMax(array[:-1])

## Рекурсивная реализация бинарного поиска
В книги предлагается использовать в качестве базового случай массив из одного элемента, но я сделал по-другому.

* Базовый случай: пустой массив не может содержать искомого элемента. Если текущий индекс нижней границы больше текущего индекса верхней границы, значит данного элемента в массиве нет
* Рекурсивный случай: обновляем индексы нижней или верхней границы в зависимости от расположения элемента, который ищется