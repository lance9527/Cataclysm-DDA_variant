
# Cataclysm-DDA_variant_jp

プルリクのテスト。

English version (broken english warning!!)

[https://github.com/roloa/Cataclysm-DDA_variant/blob/variant_jp/README_en.md](https://github.com/roloa/Cataclysm-DDA_variant/blob/variant_jp/README_en.md)

## これはなに？

Cataclysm DDAを独自改造したバージョン、いわゆるヴァリアントになります。
安定板0.E(#10478)がベースです。

## 注意

- 人によって好みが分かれる要素がありますが、なるべくオプションから無効にできるようにしてます。
  - 排泄要素。
  - 異界のメイドさんとの*Lovely Activity*。


## ダウンロードと遊び方

- ヴァリアント本体に同梱されているもの
	- ヴァリアント本体
		- [https://ux.getuploader.com/cdda_variant_jp/](https://ux.getuploader.com/cdda_variant_jp/)
		- こちらのアップローダーで配布しています。
		- だいたい、一番上のが最新版です。
	- Battle Maid Mod(現バージョン対応済み)
		- 改変、再配布は大丈夫との事だそうなので、これも同梱させて頂いています。
		- アドオンとしても常識の範囲をはみ出してるのは自覚してますが、あくまでアドオンなのでで通りますでしょうか...？

- 各自ご用意いただきたい物
	- UnDeadPeopleタイルセット
		- なくてもプレイにそこまで支障はないですが、タイルはこれのみ対応なので是非。

- 翻訳について
	- 日本語_variantという言語を同梱し、オプションから選べるようにしています。
	- 新要素の翻訳はこちらにしか入っていないので、オプションから言語の変更をお願いします。

- 同梱modについて
  - コア - Variant Addition
    - ヴァリアントに必須のファイルです。
  - コア - LittleMaid
    - 愛玩用リトルメイド(搾乳可能)から召喚可能なリトルメイドをクラフトできるようにします。
    - ショゴスのメイドさんに対してヴァリアントの機能を使えるようにします。
    - メイド要素がいらない人は、Battle Maidともども入れなくても通常のプレイには問題ないはずです。
  - 追加 - Vibrator Junkyard
		- こまごまとした様々なアイテムを追加します。ほとんどが名前の通りJunkでヴァリアントとはあまり関係ないオマケアイテムです。
		- 一部のアイテムがヴァリアントの追加機能を使っています。詳しくはmodファイル内を見てみてください。

## 新要素

新要素の詳細は以下のファイルにまとめました。

[https://github.com/roloa/Cataclysm-DDA_variant/blob/variant_jp/doc/VARIANT_FEATURE.md](https://github.com/roloa/Cataclysm-DDA_variant/blob/variant_jp/doc/VARIANT_FEATURE.md)

代表的な新要素の簡単な紹介です。

### うんちを出そう

@さんが食事を消化するにしたがって、腸内に何かがたまってきます。

もよおしてきたら、ちょっとゾンビに邪魔されない所でかがんで、出すものを出しましょう。

出すべきところで出せば、さらなる意欲アップにつながります。

人によってはいらないジャマな要素になるので、世界設定のオプションからオフにもできます。

### シャワーを浴びよう

車載シャワーブースを作って車に搭載すれば、いつでもシャワーを浴びられます。

シャワーを浴びるためには車載タンクの綺麗な水30リットルと自動車用バッテリー1個分の電気をを消費します。

### メイドともっと楽しもう

Battle Maid Mod内ではアイテムだけの存在だった愛玩用リトルメイドを、友好モンスターとして召喚したり逆に片付けたりできます。

また、ショゴスのメイドさんや愛玩用リトルメイドに対して待機命令を出したり、一緒に遊んだりできます。

### 酸性雨には気を付けよう

デフォルトの設定だと、まれに酸性雨が降ります。世界設定のオプションから調整できます。

酸性雨を浴びると多大な苦痛と少量のダメージを受けます。レインコートを着たり、傘を構えることで被害を大幅、あるいは完全に軽減できます。

まれに、非常に強力な酸性嵐 [Acid Storm] に発展します。もはや傘では防げないレベルなので、屋根のあるところに避難しましょう。

冬には、酸性雨と小酸性雨のかわりに、酸性雪と小酸性雪が降ります。効果はほぼ同じです。

### 洗濯をしよう

車載洗濯機を使って衣類・防具類を洗濯すると、いい香りになります。（手洗いではダメ）

いい香りの衣類を着ていると、意欲が上がります。

衣類の香りは時間経過などでは消えませんが、雨や浅水域などの濡れ判定か、敵からの攻撃判定を受けるとすぐに消えます。

### NPCの食事を準備しよう

**試験的機能なので注意して使ってください。**

車載パーツの「食糧庫タグ」を車両のカーゴに付けると、

味方NPCは一緒に車両に乗っている時、お腹が空くと勝手にタグの付いたカーゴから食料を食べるようになります。

味方NPC1人の状態のテストは大方大丈夫みたいですが、味方NPCが2人以上いる場合の動作確認をほとんどしてないです。

### etc...

ここでは紹介しきれない様々な微調整もあります。

こちらで全要素を紹介しています。

[https://github.com/roloa/Cataclysm-DDA_variant/blob/variant_jp/doc/VARIANT_FEATURE.md](https://github.com/roloa/Cataclysm-DDA_variant/blob/variant_jp/doc/VARIANT_FEATURE.md)


## 謝辞（謝罪）

- Kevin Granadeさま、ならびにCDDAコントリビューターの皆さま
- Battle Maid Modの作者さま
- UnDeadPeopleタイルセットに入ってるメイド関連のチップの作者さま

以上の皆様に感謝とともに非礼をお詫びいたします。

こんなヴァリアントつくってすみません。でも作りたかったんです。

## 共同開発者について

  - lispcoc < https://github.com/lispcoc >
  - roloa (リポジトリオーナー) < https://github.com/roloa >

(敬称略)

このヴァリアントには以上の開発者によってつくられました。

みなさまのご協力に大変感謝します。

## ライセンスについて

クリエイティブコモンズの 表示 - 継承 3.0 非移植 ライセンスとします。

詳しくは以下のファイルを見てください。

https://github.com/roloa/Cataclysm-DDA/blob/variant_sca/LICENSE.txt

## Discord

[https://discord.gg/kGNU8Jg](https://discord.gg/kGNU8Jg)

サーバー参加時のランダムメッセージは切ってあるのでご気軽にご参加して、こっそり脱退してみてください。

不具合報告や、要望、ご意見、ご感想などお待ちしております。

