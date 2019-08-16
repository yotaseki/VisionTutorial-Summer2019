# Getting started with OpenCV

OpenCVについて
---
> OpenCVとはインテルが開発・公開したオープンソースのコンピュータビジョン向けライブラリ  
*wikipediaから引用(https://ja.wikipedia.org/wiki/OpenCV)*

OpenCVを使って画像を表示する
---
1. ソースコードを確認してみる

```bash
gedit main.cpp
```

2. ソースコードをビルドして実行する

```bash
cmake .
make
./ShowImage
```
ロボットの画像が表示されたら成功

表示する画像を変えてみる
---
1. main.cppを開く
```bash
gedit main.cpp
```
2. 下記の行にあるファイル名の番号を変更する
```c++
変更前    img = cv::imread("images/image00000.jpg");
                                           ↓
変更後    img = cv::imread("images/image00001.jpg");
```

3. ソースコードをビルドして実行する

```bash
make
./ShowImage
```
ロボット視点の画像に変わっていたら成功


Advanced
---
インターネット上から画像をダウンロードして、表示させてみる
