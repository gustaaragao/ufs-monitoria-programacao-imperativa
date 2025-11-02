
import banco.ContaBancaria;

public class TesteContaBancaria {

    public static void main(String[] args) {
        ContaBancaria conta = new ContaBancaria("Gustavo Henrique", "123123");
        System.out.println("Saldo: " + conta.getSaldo());
        
        // Depositar 200 reais
        System.out.println("-- Depositando 200");
        conta.depositar(200);
        System.out.println("Saldo: " + conta.getSaldo());
        
        // Sacar 100 reais
        System.out.println("-- Sacando 100");
        conta.sacar(100);
        System.out.println("Saldo: " + conta.getSaldo());
        
        // Sacar 2000 reais
        System.out.println("-- Sacando 2000");
        conta.sacar(2000);
        System.out.println("Saldo: " + conta.getSaldo());
        
        // Sacar -100 reais
        System.out.println("-- Sacando -100");
        conta.sacar(-100);
        System.out.println("Saldo: " + conta.getSaldo());
    }
}
