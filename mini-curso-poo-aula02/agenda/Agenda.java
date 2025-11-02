package agenda;

public class Agenda {

    private int dia;
    private int mes;
    private String descricao;

    public void anotar(int dia, int mes, String descricao) {
        if (validarData(dia, mes)) {
            this.dia = dia;
            this.mes = mes;
            this.descricao = descricao;
        } else {
            System.out.println("Data inválida!");
        }
    }

    public void exibirAnotacao() {
        if (this.dia != 0 && this.mes != 0 && this.descricao != null) {
            System.out.println(String.format("%d/%d: %s", this.dia, this.mes, this.descricao));
        } else {
            System.out.println("Não há evento cadastrado!");
        }
    }

    private boolean validarData(int dia, int mes) {
        return dia >= 1 && dia <= 31 && mes >= 1 && mes <= 12;
    }
}