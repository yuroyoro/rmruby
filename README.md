# Rmruby - sample of mruby in ruby.

C拡張でmrubyをrubyに組み込むサンプル。一体何がしたいのか……。

## Installation

  $ ruby extconf.rb --with-mruby-dir=<mruby dir>
  $ make
  $ make install

## Usage

require 'rmruby' and call Rmruby#eval.

  irb(main):001:0> require 'rmruby'
  => true
  irb(main):002:0> Rmruby.eval('3.times do |n| puts "hello #{n}!" end')
  hello 0!
  hello 1!
  hello 2!
  3
  => nil

## Memo

毎回mrbインスタンス作ったりコンテキスト使い捨てしたりしてるし、mrubyからの返り値やコンテキスト内の変数にはruby側からはアクセスできないのだけど、あんまり真面目に作ってないのでカンベン汁

