
import funcionario.Funcionario;

public class TesteFuncionario {

    public static void main(String[] args) {
        Funcionario funcionario = new Funcionario("Gustavo", "202300027310");

        System.out.println(funcionario);

        funcionario.setFuncao("Monitor de Programação");
        funcionario.setSalario(1234.56);

        System.out.println(funcionario);
    }
}
