
import agenda.Agenda;

public class TesteAgenda {

    public static void main(String[] args) {
        Agenda agenda1 = new Agenda();
        Agenda agenda2 = new Agenda();

        // Não há evento cadastrado
        agenda1.exibirAnotacao();

        // Cadastrando meu aniversário
        agenda1.anotar(27, 5, "Meu aniversário!");
        agenda1.exibirAnotacao();

        // Anotando a data da aula
        agenda2.anotar(4, 11, "Aula de Encapsulamento");
        agenda2.exibirAnotacao();
    }

}
