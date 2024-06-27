package notaAluno;

import java.util.Locale;
import java.util.Scanner;

import entities.Student;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		Student student = new Student();

		System.out.println("Digite o nome do aluno seguido de suas notas: ");
		student.nome = sc.nextLine();

		student.n1 = sc.nextDouble();

		student.n2 = sc.nextDouble();

		student.n3 = sc.nextDouble();

		System.out.println("FINAL GRADE = " + student.finalGrade());
		if (student.finalGrade() < 60) {
			System.out.println("FAILED");
			System.out.println("MISSING " + student.missingPoints() + " POINTS");
		}
		else {
			System.out.println("PASS");
		}


		sc.close();
	}

}
