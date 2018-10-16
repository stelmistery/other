<?php
define("GBook", "gbook.dat"); //имя файла с данными гостевой книги
require_once  "model.php";

$book = loadBook(GBook);
if (!empty($_REQUEST['doAdd']))
{
    $book = [time() => $_REQUEST['new']] + $book;
    saveBook(GBook, $book);
}

include "view.php";