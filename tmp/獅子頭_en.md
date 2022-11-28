# 鎌倉宮 獅子頭 (Kamakura-gū Lion-head) #000 ビルドガイド

*English version is [here](https://github.com/hide-key/testamatta/blob/main/sunflower/buildguide_sunflower_001_en.md).



![1]()



[TOC]

自作キーボードを触り始めると、いろいろなものがキーボードに見える時があります。私もそんな感じになっており「何か面白いネタはないかなぁ〜」と部屋の中を見回していました。「あれ？この[お守り](https://ja.wikipedia.org/wiki/%E3%81%8A%E5%AE%88%E3%82%8A)の鼻の部分、キーキャップに見える」という感覚になり、早速、プロトタイプの製作に着手しました。



When you start touching a self-made keyboard, there are times when various things look like a keyboard. I was feeling the same way, and I was looking around the room, wondering if there was anything interesting I could find. "Huh? The nose part of this amulet looks like a keycap" I feel it. I started working on a prototype right away.



※説明は前後しますが、プロトタイプが完成後、鎌倉宮の宮司に直々にお会いして「獅子頭のお守りをセルフメイドキーボードとして製作して良いでしょうか？」と。また私は「完成後、SNSなどに発信をして良いでしょうか？」といろいろと話をさせて頂きました。最初は、メールや電話での話の段階では、理解を得られなかったのですが、プロトタイプを持ち込んだことで、理解して頂くことが出来ました。結果として、鎌倉宮から快諾を得ることが出来ました。



*The explanation will be back and forth, but after the prototype was completed, I personally met with the **chief priest** of **Kamakura Shrine** and asked, "Is it okay to make a lion-headed amulet as a self-made keyboard?" Also, I asked him if it would be okay to post it on social media after it was completed. I was able to get permission from the **chief priest**.



**<u>※[鎌倉宮](https://en.wikipedia.org/wiki/Kamakura-g%C5%AB)とは[神社](https://en.wikipedia.org/wiki/Shinto_shrine)であり、日本固有の宗教である[神道](https://en.wikipedia.org/wiki/Shinto)の信仰に基づく[祭祀](https://ja.wikipedia.org/wiki/祭)[施設](https://ja.wikipedia.org/wiki/施設)です。←EN版</u>****

**<u>※獅子頭とは[獅子舞](https://en.wikipedia.org/wiki/Lion_dance)の頭を指します。獅子舞とは東アジアおよび東南アジアでみられる[伝統芸能](https://ja.wikipedia.org/wiki/伝統芸能)の一つで、[祭囃子](https://ja.wikipedia.org/wiki/祭囃子)にあわせて[獅子](https://ja.wikipedia.org/wiki/狛犬)が舞い踊るものです。←EN版</u>**



## ■デザイン

この獅子頭のお守りは数種類あるのですが、主に参考とするのは大サイズにしました。

まずは、シルエット情報を得る為に、今回は[Photogrammetry](https://en.wikipedia.org/wiki/Photogrammetry)([写真測量法](https://ja.wikipedia.org/wiki/%E5%86%99%E7%9C%9F%E6%B8%AC%E9%87%8F%E6%B3%95))にて3Dスキャンを使用しました。スマートフォンでスキャンを行ったのと、スキャン対象物が小サイズだったのもあり、かなり粗くなってしまいました。しかし、おおよそのシルエット情報は得られたので十分です。その他として、ネットで[画像検索](https://www.google.com/search?q=%E7%8D%85%E5%AD%90%E9%A0%AD+%E3%81%8A%E5%AE%88%E3%82%8A&tbm=isch&ved=2ahUKEwi5k_WB-s_7AhVWxGEKHa5pA2IQ2-cCegQIABAA&oq=%E7%8D%85%E5%AD%90%E9%A0%AD&gs_lcp=CgNpbWcQARgBMgQIIxAnMgQIIxAnMgUIABCABDIFCAAQgAQyBQgAEIAEMgUIABCABDIFCAAQgAQyBQgAEIAEMgUIABCABDIFCAAQgARQAFgAYL0SaABwAHgAgAFNiAFNkgEBMZgBAKoBC2d3cy13aXotaW1nwAEB&sclient=img&ei=kC2EY7mLC9aIhwOu042QBg&bih=809&biw=1470)をおこない、情報を補完しました。

最終的なサイズは、キースイッチ類のサイズに合わせてデザイン。おおよそ中サイズのお守りと同じくらいのサイズとなりました。

~~3Dデータ自体はFusion360を使用しており、回路基板の設計にはKiCadを使用しました。KiCadの設計データをSTEPファイル形式でエクスポート、Fusion360にインポートして、最終的なサイズ調整を行いました。~~



## ■必要なパーツ

下記のパーツを準備して下さい。

|         名称         |                             型番                             | 数量  |
| :------------------: | :----------------------------------------------------------: | :---: |
|         MCU          |                         XIAO RP2040                          | 1 pcs |
|     キースイッチ     |                      Kailh Low Profile                       | 3 pcs |
|      ダイオード      |                            1N4148                            | 3 pcs |
| ロータリーエンコーダ |                         EC12E2440301                         | 2 pcs |
|         ネジ         |                           M2 10mm                            | 4 pcs |
|    クッションゴム    | [7.9x2.2mm 丸形](https://www.amazon.co.jp/gp/product/B00V5MQQB4/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1) | 4 pcs |

※ダイオードは、スルーホールでも問題はありません。



## ■3Dデータ

下記にモデルデータ(STEP、STL)があります。

- **STEPデータ :** ~~https://github.com/hide-key/testamatta/tree/main/sunflower/model_data/step~~
- **STLデータ :** ~~https://github.com/hide-key/testamatta/tree/main/sunflower/model_data/stl~~



各パーツは、下記のようになってます。

| 名称 | 数量 | メモ |
| :--: | :--: | :--: |
|      |      |      |
|      |      |      |
|      |      |      |
|      |      |      |
|      |      |      |
|      |      |      |



## ■3Dプリント

前述の3Dデータをプリントします。私は光造形方式(SLA)にて行いました。プリントサービスを利用するのも良いかもしれません。

![]()



## ■塗装

塗装は好みで行ってください。私の行った塗装は「サーフェイサー→研ぎ→サーフェイサー→塗装色→つや消しクリア」が基本的な手順です。本物の獅子頭のお守りは、墨汁の黒と朱色、金色で塗られているような仕上げになっています。なので、それを意識した仕上げとして、つや消しクリアを使用しております。

![]()



## ■回路基板データ

下記にガーバーファイルがあります。PCB製造サービスに発注してください。

- **ガーバーファイル :** ~~https://github.com/hide-key/testamatta/blob/main/sunflower/pcb/sunflower_001a.zip~~

  

## ■ファームウェア

下記にUF2ファイル、JSONファイル、ソースファイルがあります。

- **UF2ファイル :** ~~https://github.com/hide-key/testamatta/blob/main/sunflower/uf2/testamatta_sunflower_000_xiao_rp2040_default.uf2~~
- **JSONファイル :** ~~https://github.com/hide-key/testamatta/blob/main/sunflower/json/sunflower_000_xiao_rp2040.json~~
- **ソースファイル :** ~~https://github.com/hide-key/testamatta/tree/main/sunflower/000/xiao_rp2040~~



UF2ファイルを使用する場合、XIAO RP2040をブートローダーモードで起動させて、ダウンロードしたUF2ファイルをアップロードします。

※XIAO RP2040と作業用のPCをUSBケーブルで接続して、BOOTボタンを押しながらRESETボタンを押します。 ドライブとして認識されるので、UF2ファイルをドラッグアンドドロップしてください。アップロードすると、マウント解除され、自動的に再接続されます。

あとは、[**REMAP**](https://remap-keys.app/)を使用して好みのキーマップにしてください。デフォルトでは、左から0, 1, 2 となっており、ロータリーエンコーダは、左側がUP & DOWNキー、右側がPgUP & PgDOWNキーとなっています。ロータリーエンコーダのキーアサインを変更する場合は、ソースファイルを変更してビルドしてください。



## ■組み立て

回路基板の組み立てを行い、その他のパーツ類を装着していきます。

![4]()



**注意点：**

- XIAO RP2040は、PCBに直付けで設計しています。(ピンヘッダやコンスルーは使用しません)



## ■完成

組み立てが完了したら、葉っぱを添えて、完成となります。

![]()



## ■最後に

下記のSNSにも投稿をしております。



- ~~**[Twitter]()** ※準備中…~~
- ~~**[Reddit]()** ※準備中…~~
- ~~**[instructables]()** ※準備中…~~



最後まで読んで頂きありがとうございました。

この度の製作につきまして、ご快諾を頂きました鎌倉宮に感謝を申し上げます。



良きキーボードライフを。