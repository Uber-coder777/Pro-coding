// Sem5_lab1.cpp : Defines the entry point for the console application.
//
#include <stdafx.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
//#include <cstring>

struct patient_descr
{
	char name[15];
	char symptoms[30];
	char doc_name[15];
} patient;

int final_cost;
int option;

void input()
{
	printf("Welcome to the website of our private clinic\n");
	printf("Please, enter your name:   \n");
	scanf("%s", &patient.name);
	printf("Please, choose your symptoms from the list:\n");
	printf("1) Cough and temperature\n");
	printf("2) Rhinitis and sore throat\n");
	printf("3) Headache and vomit\n");
	printf("4) Physical injury\n");
	option = _getch();
}

int calculations()
{
	int cost;
	if (option == 1)
	{
		strcpy(patient.symptoms, "Cough and temperature");
		strcpy(patient.doc_name, "Ridus");
		cost = 250;
	}
	else if (option == 2)
	{
		strcpy(patient.symptoms, "Rhinitis and sore throat");
		strcpy(patient.doc_name, "Ridus");
		cost = 200;
	}
	else if (option == 3)
	{
		strcpy(patient.symptoms, "Headache and vomit");
		strcpy(patient.doc_name, "Petterson");
		cost = 400;
	}
	else if (option == 4)
	{
		strcpy(patient.symptoms, "Physical injury");
		strcpy(patient.doc_name, "Smith");
		cost = 350;
	}
	else 
	{
		return 0;
	};
	final_cost = cost;
}


int _tmain()
{
	input();
	calculations();
	printf("\nHere is your ticket\n");
	printf(patient.name);
	printf("\n%s", patient.symptoms);
	printf("\nDoctor %s", patient.doc_name);
	printf("\n%d$", final_cost);
	_getch();
	return 0;
}

