
import produto.Produto;

public class TesteProduto {

    public static void main(String[] args) {
        Produto labubu = new Produto("Labubu");
        labubu.setPreco(50);
        labubu.adicionarEstoque(20);
        System.out.println(labubu);

        // Tentando comprar 30 labubus
        if (labubu.removerEstoque(30)) {
            System.out.println("Labubus comprados com sucesso!");
        } else {
            System.out.println("Não foi possível comprar os labubus!");
        }
        System.out.println(labubu);

        // Tentando comprar 10 labubus
        if (labubu.removerEstoque(10)) {
            System.out.println("Labubus comprados com sucesso!");
        } else {
            System.out.println("Não foi possível comprar os labubus!");
        }
        System.out.println(labubu);
    }

}
