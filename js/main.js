let s = "";

while (!/ドドスコスコスコ$/.test(s)) {
  s += Math.random() > 0.5 ? "ド" : "スコ";
}
s += "ラブ注入";

console.log(s);
