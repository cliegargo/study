<?
    function elevator($left, $right, $call) {
        if($left >= $call) {
            return "left";
        } else {
            return "right";
        }
    }



    echo elevator(0, 1, 0);
?>