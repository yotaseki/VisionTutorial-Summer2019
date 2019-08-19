# Pixel

画素とは
---
>ピクセル、または画素とは、コンピュータで画像を扱うときの、色情報 を持つ最小単位、最小要素  
wikipedia引用(https://ja.wikipedia.org/wiki/%E3%83%94%E3%82%AF%E3%82%BB%E3%83%AB)

cv::Matを用いて、画素についての理解を深める
---
1. ソースコードを確認
```
gedit main.cpp
```

2. CMake & ビルド
```
cmake .
make
```

3. プログラムを実行
```
./CopyImage
```
4. 画素をいじる
  - ソースコードの以下の行に着目
```c++
            empty_img.data[y * empty_img.step + x * empty_img.elemSize() + 0] = B;
            empty_img.data[y * empty_img.step + x * empty_img.elemSize() + 1] = G;
            empty_img.data[y * empty_img.step + x * empty_img.elemSize() + 2] = R;
```
B : 青成分  
G : 緑成分  
R : 赤成分  　を表している  

* GとRを 0 に置き換えて実行すると...? 
* BとRを入れ替えて実行すると...?

Advanced
---
画素のB, G, Rの値をいじって、白黒写真のような灰色の画像にしてみよう
