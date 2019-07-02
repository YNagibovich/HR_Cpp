# Тестовое задание для разработчика C++

## Задача программы
1. Загрузить с диска цветное изображение в память
    - формат изображения не имеет значения *(.jpg, .png)*
    - способ загрузки изображения в память не имеет значения, не нужно решать задачу распаковки формата сжатия изображения. Допускается использование сторонниз библиотек, которые позволяют загрузить изображение в память и получить доступ к этому участку памяти напрямую *(opencv, dlib, etc.)*
2. Перевести изображение в памяти в формат Grayscale *(aka Desaturate)*
3. Произвести над grayscale изображением операцию Gaussian Blur
4. Сохранить получившееся изображение на диск в новый файл. Здесь также допускается использование сторонней библиотеки

## Детали
* Обе операции (grayscale, gaussian blur) с изображением должны производиться напрямую с массивом данных в памяти. Запрещается использовать для них встроенные функции библиотек.
* Программа должна иметь возможность выполнения задачи как в одном потоке, так и в нескольких потоках параллельно (управление через параметр коммандной строки)
* Программа должна измерять время выполнения и выводить его перед завершением, чтобы была возможность сравнить преимущества работы в несколько потоков по сравнению с одним потоком.

## Технические детали
* OC: Ubuntu 16.04
* Система сборки CMake
* CXX11
* Запуск: `./program ~/path/to/image.jpg [OPTIONAL int]`
  - Первый параметр: путь к исходному изображению
  - Второй параметр: количество потоков, если отсутствует - запускаем на всех доступных в системе ядрах процессора
* Результат выложить на GitHub. В README.md указать особенности сборки, запуска, если таковые будут.
* Если сможете реализовать программу с использованием Nvidia CUDA на GPU - будет большим плюсом. В этом случае контроль количества потоков через командную строку не требуется.
