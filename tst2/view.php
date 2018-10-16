<html><head><title>Гостевая книга</title></head>
<body>
<h1>Добавьте своё сообщение:</h1>
<form action="controller.php" method="post">
Ваше имя: <input type="text" name="new[name]"><br />
Комментарий: <br>
<textarea name="new[text]" id="" cols="60" rows="5"></textarea> <br>
<input type="submit" name="doAdd" value="Добавить!">
</form>
<h2>Гостевая книга:</h2>
<?php
foreach ($book as $id => $e) { ?>
    Имя человека: <?=$e['name']?><br>
    Его комментарий: <br> <?=$e['text']?> <br>
<?php } ?>
</body>
</html>