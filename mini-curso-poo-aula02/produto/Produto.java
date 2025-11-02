package produto;

public class Produto {

    private final String nome;
    private double preco;
    private int quantidadeEstoque;

    public Produto(String nome) {
        this.nome = nome;
        this.preco = 0;
        this.quantidadeEstoque = 0;
    }

    public String getNome() {
        return nome;
    }

    public double getPreco() {
        return preco;
    }

    public void setPreco(double preco) {
        if (preco > 0) {
            this.preco = preco;
        }
    }

    public int getQuantidade() {
        return quantidadeEstoque;
    }

    public void adicionarEstoque(int quantidade) {
        if (quantidade > 0) {
            this.quantidadeEstoque += quantidade;
        }
    }

    public boolean removerEstoque(int quantidade) {
        if (quantidade <= this.quantidadeEstoque) {
            this.quantidadeEstoque -= quantidade;
            return true;
        }
        return false;
    }

    @Override
    public String toString() {
        return String.format("%s | %.2f | %d", this.nome, this.preco, this.quantidadeEstoque);
    }

}
