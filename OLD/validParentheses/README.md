# Вход

Строка состоящая из скобок трёх типов ([],{},()). Стороки не пусты

# Правила

Определить валидна ли данная последовательность скобок. Валидной считается только такая последовательность, в которой
* У всех открывающих скобок есть закрывающие
* У всех закрывающих скобок есть открывающие
* Открытые скобки закрываются в правильном порядке (Такого быть не может: "({)}")

# Решение

Мне на ум пришло только решение со стеком. Кажется оно довольно оптимальное (O(n) по времени выполнения).
Написал три варианта решения, и оказалось что решение со словарём и одним if на все случаи скобок оказывается эффективней решения без словаря, но с тремя if. 
Похоже ifы реально решают

