var isHappy = function(n) {
    var res = [];
    if(n === 1){
        return true;
    }
    while(n !== 1){
        var array_1 = (n + "").split("");
        var temp = 0;
        for(var i = 0; i < array_1.length; i++){
            temp += Math.pow(array_1[i], 2);
        }
        if(res[temp]===undefined){
            res[temp] = 1;
        }
        else{
            return false;
        }
        if(temp === 1){
            return true;
        }
        else{
            n = temp;
        }
    }
};