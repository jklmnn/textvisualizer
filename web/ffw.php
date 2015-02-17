<div>
<?php
  if ($dir = opendir('img')){
    $i = 0;
    echo "<table>";
    while (false !== ($file = readdir($dir))){
      if($file != "." && $file != ".."){
        $i++;
        if($i % 2){
	  echo '<tr><td><a href="img/'.$file.'"><img src="img/'.$file.'"></a></td>';
        }else{
          echo '<td><a href="img/'.$file.'"><img src="img/'.$file.'"></a></td></tr>';
        }
      }
    }
    echo "</table>";
  }
?>
</div>
