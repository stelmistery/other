<?php
// CONNECT TO SERVER
try
{
    $pdo = new PDO('mysql:host=localhost;dbname=test', 'root', '11111111');
}
catch (PDOException $e) {
    echo "Невозможно соединиться с базой данных";
}

$title = strip_tags(trim($_POST['new[name]']));
$text = strip_tags(trim($_POST['new[text]']));


$query = "INSERT INTO `sms` (`Name`, `Message`) VALUES ('$title', '$text')";


$send = $pdo->exec($query);
if ($send !== false)
{
    echo "Сообщение занесено в базу";
} else
{
    echo "Сообщение НЕ занесено в базу";
}


function loadBook($fname)
{
    if (!file_exists($fname)) return[];
    $book = unserialize(file_get_contents($fname));
    return $book;
}

function saveBook($fname, $book)
{
    file_put_contents($fname, serialize($book));
}


?>