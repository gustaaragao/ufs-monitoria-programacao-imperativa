package funcionario;

public class Funcionario {

    private String nome;
    private String matricula;
    private String funcao;
    private double salario;

    public Funcionario(String nome, String matricula) {
        this.nome = nome;
        this.matricula = matricula;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getMatricula() {
        return matricula;
    }

    public void setMatricula(String matricula) {
        this.matricula = matricula;
    }

    public String getFuncao() {
        return funcao;
    }

    public void setFuncao(String funcao) {
        this.funcao = funcao;
    }

    public double getSalario() {
        return salario;
    }

    public void setSalario(double salario) {
        if (salario > 0) {
            this.salario = salario;
        } else {
            System.out.println("Salário inválido.");
        }
    }

    @Override
    public String toString() {
        return String.format("%s | %s | %s | %.2f", this.nome, this.matricula, this.funcao, this.salario);
    }

}
