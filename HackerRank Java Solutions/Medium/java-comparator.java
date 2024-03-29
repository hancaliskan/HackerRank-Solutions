import java.util.*;

/*
Karşılaştırma yöntemi, ilk bağımsız değişkenin ikinciden küçük, ona eşit veya ikinciden büyük olmasına bağlı olarak negatif bir tamsayı, 0 veya pozitif bir tamsayı döndürerek iki argümanını karşılaştırır.

Azalan sıralamaya ihtiyacımız olduğu için, sıra artıyor gibi göründüğünde karşılaştırıcı pozitif bir değer vermelidir, böylece sırayı değiştirecek ve tekrar azaltacaktır. Dolayısıyla, b.score - a.score return ediyoruz.
*/

class Checker implements Comparator<Player>{
    @Override
    public int compare(Player a, Player b){
        if(a.score == b.score){
            return a.name.compareTo(b.name);
        }
        else{
            return b.score - a.score;
        }
    }
}

class Player{
    String name;
    int score;
    
    Player(String name, int score){
        this.name = name;
        this.score = score;
    }
}

class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();

        Player[] player = new Player[n];
        Checker checker = new Checker();
        
        for(int i = 0; i < n; i++){
            player[i] = new Player(scan.next(), scan.nextInt());
        }
        scan.close();
     
        Arrays.sort(player, checker);
        for(int i = 0; i < player.length; i++){
            System.out.printf("%s %s\n", player[i].name, player[i].score);
        }
    }
}

