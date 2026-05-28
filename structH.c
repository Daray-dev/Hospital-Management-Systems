// Structure for Hospital
struct Hospital {
      char name[50];
      char city[50];
      int beds;
      float price;
      float rating;
      int reviews;
};

//structure for Patients
struct Patient {
    char name[50];
    int age;
};


//Function to print hostpital data
void printHospital(struct Hospital hosp) {
    printf("Hostpital Name: %s\n", hosp.name);
    printf("City: %s\n", hosp.city);
    printf("Total Beds: %d\n", hosp.beds);
    printf("Price per Bed: $%.2f\n", hosp.beds);
    printf("Rating: %.1f\n", hosp.rating);
    printf("Reviews: %d\n", hosp.reviews);
    printf("\n");
}


// Function to print patient data
void printPatient(struct Patient patient) {
    printf("Patient Name: %s\n", patient.name);
    printf("Age: %d\n", patient.age);
    printf("\n");
}

//Function to sort hospitals by beds price (ascending)
void sortBYPrice(struct Hospital hospitals[], int n) {
    // Implement sorting logic: bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (hospitals[j].price > hospitals[j + 1].price) {
               struct Hospital temp = hospitals[j];
               hospitals[j] = hospitals[j + 1];
               hospitals[j + 1] = temp;
            }
        }
    }
}

//Function to sort hospitals by available beds (descending)
void sortByBeds(struct Hospital hospitals[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (hospitals[j].beds < hospitals[j +1].beds) {
                struct Hospital temp = hospitals[j + 1];
                hospitals[j] = hospitals[j + 1];
                hospitals[j + 1] = temp; 
            }
        }
    }
}

//Funcation to sort hospitals by name (ascending)
void sortByName (struct Hospital hospital[], int n) {
    // Using strcmp
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
             if (strcmp(hospitals[j].name, hospitals[j + 1].name) > 0) {
                struct Hospital temp = hospitals[j];
                hospitals[j] = hospitals[j + 1];
                hospitals[j + 1] = temp;
             }
        }
    }
}

// Function to sort hospitals by rating and reviews (descending)
void sortByRating(struct Hospital hospitals[], int n) {
    // Based on reviews
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (hospitals[j].rating * hospitals[j].reviews < hospitals[j + 1]. rating *
hospitals[j +  1]. reviews) {
                struct Hospital temp = hospitals[j];
                hospitals[j] = hospitals[j + 1];
                hospitals[j + 1] = temp

         }
        }
    }
}