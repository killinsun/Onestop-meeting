= LT/登壇資料を作るための方針とテクニック

//flushright{
もっと@mottox2
//}

LTや登壇で重要なのはコンテンツ。ただ、資料作りに意識を割かれて登壇のクオリティが上がらないのは本末転倒です。
本章では、資料を作るためのテクニックを紹介します。

== 方針を立てる

=== 使用するソフト・ツール・テンプレートを決める

まずはスライドを作るためのソフト・ツールを決めましょう。

定番のスライドツールはOffice（Microsoft）のPowerPoint、iWork（Apple）のKeynoteです。

PowerPointは会社でもよく使われているツールで、OfficeがプリインストールされているPCも多く最も普及しているツールといっても過言ではありません。
使っている人も多い分、ネット上の情報が豊富でありトラブルへの対処がしやすい、テーマが豊富に配布されているといったメリットもあります。
とりあえず始めてスライドを作るのであればPowerPointを選んでおけば間違いはないでしょう。

一方、KeynoteはmacOS, iOS上で無料で使えるプレゼンテーションツールです。
PowerPointほどユーザーがいないため、情報やテーマは少ないですが、ある程度雑に作ってもそれなりに見やすいデザインになるのが魅力です。
Officeを導入していないmacユーザーであればKeynoteがおすすめです。

PowerPointやKeynoteはネット上で配布する際はpdf出力を行い、Speaker Deck・SlideShareといったサイトにアップロードすることになります。
もちろんこの際、プレゼンテーション内の動画は再生できませんし、URLをクリックしても開けなくなります。そういったデメリットを受け入れるのであればいい選択肢になると思います。

動画情報やURLをクリックできる状態で公開したいのであれば「Google スライド」がおすすめです。
Google スライドはその名の通りGoogleの提供するプレゼンテーションツールです。Webブラウザ上で動作するアプリケーションで、複数人で同時に編集したり、フルスクリーンモードでプレゼンを行えたり、Web上でそのまま公開できる点が強みのツールです。
ただし、使えるフォントが限られる、プレゼンテーションモードで日本語フォントが変わったり絵文字が表示できない、日本語に特化したテーマが極端に少ないなどの問題もあり、それらのトレードオフを受け入れられるのであればいい選択肢になります。
ただ、筆者の観測上、便利ではありますがSpeaker Deckのようなサイトにアップロードするのと比べて人に拡散されにくい印象を持っています。

また、Web上でインタラクティブにスライドを表現するのはGoogleスライドだけではありません。JavaScriptで作られたプレゼンテーションツールも多く存在しています。
マネージドなサービスではslides.com、自分で色々やるサービスとしてはreveal.jsとmdx-deckが有名です。
JavaScriptによる自由度を与えられると、工夫の余地が無限にあるので、カスタマイズして満足といったことにならないよう注意してください。

ただし、本章ではPowerPoint、Keynote、Googleスライドを対象とした説明を行うので説明は割愛させていただきます。

=== 配色を事前に決めておく

スライドツールを決めたら、まずはスライドの配色を決めましょう。
配色を事前に決めておけば、後々に迷うことが少なくなりスムーズにスライドを作れるようになります。

配色といっても決めるのは次の4色だけです！

 * 背景色
 * 文字色
 * メインカラー
 * アクセントカラー（なくてもよい）

この4色を決めるだけでそれなりのスライドが作れるようになります。
それぞれの色について考えていきましょう。

@<b>{背景色}は多くの場合白と黒が選択されます。ちょっとこりたいのであれば、ほんの少し白や黒に色味を加えるといいでしょう。

@<b>{文字色}:は背景色が白系の色であれば黒、黒系の色であれば白を選ぶといいでしょう。ただし、黒といっても#000000を選ぶときつい配色になるので、グレー寄りな黒を選ぶと柔らかい印象になります。また、黒でも濃い黒とグレー寄りな薄い黒を使い分けるとコントラストが生まれ重要な箇所が伝わりやすくなります。白を文字色にする場合もグレーを用意しておきましょう。

@<b>{メインカラー}はスライドの印象を決定づける色です。会社のスライドを見ると会社のロゴのメインカラーであることが多いです。個人の場合はTwitterやGihHubで使っているアイコンの色から選択すると統一感が出て、自分のスライドであると印象づけることができます。

@<b>{アクセントカラー}は必須ではありませんが、メインカラーと差が出るような色を選び、重要な箇所に使うような色になります。

基本的にこの3(4)色でスライドを作っていきます。これ以上色を加えると調和を整えるのが難しく、エンジニアの片手間で作るというのが難しくなってしまいます。
説明されてもわからないと思うので、筆者のスライドで使っている色をご紹介します。

 * 背景色: #ffffff
 * 文字色: #444444, #888888
 * メインカラー: #659DBD（アイコンに使われている水色系の色）
 * アクセントカラー: #EE230A（赤系の色）

#@# また、世の中には色のパレットだけをコレクションするようなサイトも存在するのでいくつかご紹介します。

#@# TODO: 色の割合

=== 日本語フォントはNoto Fontsがおすすめ
日本語フォントに関しては、Noto Fontsがおすすめです。
Noto FontはGoogleとAdobeが共同で開発したオープンソースフォントです。
このフォントを使うと特にWindows OS標準でついているフォント、MSゴシックやメイリオと比べると癖が弱くプレゼンが絞まって見えます。

ゴシック体はNoto Sans、明朝体はNoto selifと両方用意されていますし、公式ではありませんがNoto Sansをもとに有志によって制作されている源柔ゴシック@<fn>{genjyuu}という丸ゴシック体のフォントも存在しています。

//footnote[genjyuu][http://jikasei.me/font/genjyuu/]

手書きのフォントや癖のあるフォントで特徴を出したいといった気持ちがないのであればNoto Fontを選んでおくと失敗はありません。

#@# 英語フォントについて

== 魅力的なスライドを作る

使うソフト、フォントや色は決まったので、構成で作った内容をスライドに落とし込んでいきましょう。

=== グラフィカルな要素を入れる

偏見が混じっているかもしれませんが、エンジニアが作ったスライドは文字が多くなりがちです。
文字が多いスライドですと、聞いている方も時間が立つうちに集中力が切れてしまいます。

#@# TODO: 流れがおかしい

そこで有効なのが@<b>{画像を使ってスライドにメリハリをつける}方法です。
画像といっても、スライド背景に使う画像や、インパクトを狙った画像じゃなくても構いません。
そういった画像が嫌いな方でも内容に関連するものを選べば問題ありません。

==== ツールの紹介時に公式サイトのスクリーンショットを載せる。

ツールの説明をするときに、ツールのURLと特徴だけを説明することはありませんか？
そういったときにスクリーンショットを載せることで、よりツールの魅力が伝わりやすくなります

#@# 本当に？

==== 作ったもののスクリーンショットを載せる。

LTや登壇のために作ったものがあるなら、そういった成果物のスクリーンショットも載せましょう。説得力が増します。

==== 仕組みや構成の解説に図を載せる

仕組みや作ったものの構成をする際に、構成図を入れると伝わりやすくなります。

図を書くのが面倒、苦手であるかたも問題ありません。
自作をせずとも、構成図の作成補助ツールを利用することで簡単に図を作れます。

例えば、AWSやGCPのシステム構成を説明したい時も『draw.io』というサービスを使えば簡単に作れます。

draw.ioは図を書くWebサービスですが、豊富なテンプレートが用意されており、AWSやGCPのシステム構成のテンプレートも用意されています。@<img>{drawio}はdraw.ioで用意されているGCP構成のテンプレートです。

//image[drawio][draw.io]

AWSやGCPの構成以外にもデータベースの表現をするER図、電子回路、UMLなどのテンプレートも用意されています。そういった自分で作るのが面倒な図もツールに任せれば簡単に作れます。

他にもAWSのクォータービューに特化したCloudcraft、ER図に特化したwwwsqldesignerなどいろんなツールがあります。

図が必要となったら、自分で作るのではなく@<b>{まず先人がそういったツールを作っていないかを確認する}ことが大切です。

==== コードもグラフィカルに見せる

コードも視覚的な要素になります。
せっかくコードを入れるならコードハイライトを入れて見やすい形で見せたいですよね。

ただ、コードハイライトを自分で入力するのは骨が折れますし、（主要な読者と思われる）ITエンジニアがやることではありません。
先人の作ったツールをありがたく使わせてもらいましょう。

コードハイライトをする上でおすすめなツールが『Carbon』です。（@<img>{carbon}）

//image[carbon][https://carbon.now.sh][scale=0.8]

Carbonを使うには使用する言語とフォントを選択して、コードを入力するとコードハイライトが有効になった画像が吐き出されます。
画像はpng、svgで書き出されるのでその画像をスライドに貼るだけで、見やすいコードをスライドに載せられます。

非常にお手軽な反面、コードの中身を変更する際、毎回cabonにアクセスして画像を作り直す必要があるのが唯一の欠点です。

　

一方、お手軽感はないですが、RTF（リッチ・テキスト・フォーマット）のペーストに対応しているプレゼンツールを使っている場合、コードハイライトを当てたRTFな出力が可能なツールを使うという手段もあります。

その中でも筆者は『highlight』というCLIツールを好んで使っています。

インストール方法は割愛しますが、次のようなコマンドでRTF形式の出力を得ます。

//cmd{
$ highlight sample.js -s darkplus -O rtf -S js -l
//}

#@# ==== インパクトある数字も画像的な要素に
#@# 「この数字はなんだかわかりますか？」は使い古された言い回しですが、いい導入です。

#@# 話に説得力を持たせたい「結果を出してみた」系のテーマに非常に相性がいい

=== 情報量が多かったらスライドを分割する

情報量が多いスライドで話そうとすると、スライドの変化もなくただ読み上げる形になりがちです。それを避けるにはスライドを分割するといいでしょう。

1枚のスライドで伝えたいことは、基本1つにする形にするといいでしょう。

フォントサイズを一定以上に設定することで達成できる。

=== 話が変わる箇所はスライドも大胆に


== ワンランク上のスライドを目指す

=== スライド表紙の重要性を認識する

スライド表紙に力を入れていますか？もしかして、何らかのテーマの初期設定のタイトルを使っていませんか？

「スライドの表紙なんて、トークの最初に登場するだけじゃないか？」とお思いの方もいるかもしれません。
しかし、筆者はスライド表紙は「トークの第一印象になる」、「SNSから見た場合の第一印象になる」という意味で非常に重要と考えています。

#@# わかりにくい

トークの第一印象になる、というのはわかりやすいと思います。話始める前の一瞬ですが、リスナーはそのタイトルを見てどういうスタンスで聞くか決めます。
もちろん、聞いてもらえるようなタイトルを設定するのが一番効果的ですが、スライドでトークの魅力が伝わるような表現を目指しましょう。

一方、SNSでの第一印象というのはどういうことなのでしょうか？@<img>{twitter-share}を見てください。

//image[twitter-share][スライドのシェア画像]

ほとんど同じテーマを取り扱っているのですが、左の方が魅力的に見えるのではないでしょうか？

会場に足を運ばなかったユーザーからすれば、スライドのシェア画像が第一印象になります。「SNSにシェアされた時にどう見えるか？」という観点を持って表紙のスライドを作ってみてください。

また、シェアは当日に勉強会のハッシュタグでツイートするのが効果的です。当日来た人にトーク内容を伝えるのが一番ですが、より多くの人に読まれるスライドを作っていきたいですね。

=== ハッシュタグを入れる

通常、勉強会ではTwitterのハッシュタグが設定されていると思います。そのハッシュタグをスライドの四隅のどこかに入れておきましょう。

実際に口頭で「質問はありますか？」と言っても反応はないですが、Twitterではその心理的安全性からか「○○ってなんだろう？」みたいな質問や意見が拾えることがあります。

時間に余裕があれば、最後にTwitterから質問を拾って、口頭で返すみたいなこともできます。

LTや登壇をするにあたって、こういった反応は次へのモチベーションになるので、小さな工夫で反応が増えるのであればやらない手はないでしょう。

=== 自分のアイコンを見せる

懇親会に出るまでが登壇です。せっかくトークした勉強会ではフィードバック欲しくないですか？感想聞きたくないですか？

より、多くの感想を聞きたいのであれば、スライド中でアイコンを使って覚えてもらうような取り組みをしておきましょう。参考ですが、自分は@<img>{thankyou-icon}のような形で、スライドの最後に自分のアイコンをデカデカと載せています。

//image[thankyou-icon][最後のスライドで猛アピールしている例][scale=0.7]

筆者は人と話すことがそれほど得意ではないので、こういった形で「話しかけてくださいね」とアピールして、懇親会での振る舞いが楽になるような工夫をしています。

== まとめ

ここまでいろんなスライドづくりのテクニックを紹介しました。ただ、LTや登壇における主役はあくまでコンテンツです。ここにあるテクニックは、コンテンツの魅力を損なわずに伝える小技です。

スライドづくりで考えることが減って、より良いコンテンツが届けられるよう祈っています。