function main() {
    Display(4, 4);
}
function Display(row, col) {
    var name = "A";
    var no;
    no = name.charCodeAt(0);
    var list;
    var all;
    for (var i = row; i >= 0; i--) {
        no = row;
        // no=name.charCodeAt(0)
        for (var j = 0; j < col; j++) {
            // console.log(name.charAt(0));
            //console.log(String.fromCharCode(no));
            all = all + no;
            all = all + " ";
        }
        //no--;
        console.log(all);
        all = "";
        //  name="A";
    }
}
main();
