package Desafio;

public class Moldura {
	//atributos
	public float altura;
	public float comprimento;
	public float espessura;
	
	//construtor
	public Moldura(float h, float c, float e) {
		this.altura =  h;
		this.comprimento = c;
		this.espessura = e;
	}
	
	public float calcularArea() {
		float externo, interno; //Area da moldura = (Área do retangulo externo -  Área do retangulo interno)
		
		externo = this.altura * this.comprimento; //calculando a area do retangulo "maior"
		interno = (this.altura - (2 * this.espessura)) * (this.comprimento - (2 * this.espessura)); //calculando a area do retangulo "menor"
		
		return externo - interno;
	}
	
}
