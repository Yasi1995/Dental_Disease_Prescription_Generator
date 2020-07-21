//This program is going to display prescripton for dental diseases and a doctor's report based on the instructions given in the question
//include header files

#include<stdio.h>
//function main begins the program execution
int main(void)
{
        //declare variables
        char name[50];
        int age, weight;
        char gender, symptom1, symptom2, symptom3, symptom4, symptom5, symptom6, symptom7, symptom8, symptom9, disease, pregnant, allergic, gastritis, loop;
        int drugs, flagyl, augmentin;
        int pcount = 0, wcount = 0 , tcount = 0;
        loop = 'Y';
        int count = 0;
        float percentagep, percentagew, tpercentage;

        //loop to enter patient details and generate prescriptions until 10 patients but when there are no patients can stop issuning prescriptions by entering N
        while(((count <= 10)) && ((loop == 'Y') || (loop == 'y')))
        {
        drugs = 500;
        flagyl = 400;
        augmentin = 625;

        printf("***********************************************************************************************\n");
        printf("\n");
        printf("***************************************Patient Information*************************************\n");
        //takes keyboard inputs
        printf("Please enter the Name   : ");
        scanf("%s", &name);
        printf("Please enter the age    : ");
        scanf("%d", &age);
        printf("Please enter the weight : ");
        scanf("%d", &weight);
        printf("Please enter the gender (Male - M/Female -F): ");
        scanf(" %c", &gender);
        if(gender == 'F')
        {
                printf("Is the patient  pregnant enter (Yes - Y/y or No - N) : ");
                scanf(" %c", &pregnant);
        }

        printf("Is the patient Allergic to Amoxylin enter (Yes - Y/y or No - N) : ");
        scanf(" %c", &allergic);
        printf("Is the patient having Gastritis enter (Yes - Y/y or No - N)  : ");
        scanf(" %c", &gastritis);
        printf("************************************************************************************************\n");
        printf("\n");
        printf("*************************************** SYMPTOMS LIST ******************************************\n");
        printf("                        Symptom (1) : Unbearable pain.                                  \n");
        printf("                        Symptom (2) : The difficulty of Chewing.                        \n");

printf("                        Symptom (3) : Difficulty in opening the mouth.                  \n");
        printf("                        Symptom (4) : Swelling and redness.                             \n");
        printf("                        Symptom (5) : Bleeding from the mouth.                          \n");
        printf("                        Symptom (6) : Face getting enlarged or facial asymmetry.        \n");
        printf("                        Symptom (7) : Soft on palpation.                                \n");
        printf("                        Symptom (8) : Headache.                                         \n");
        printf("                        Symptom (9) : Tenderness in palpations.                         \n");
        printf("************************************************************************************************\n");

        printf("If you are having above symptoms please put Yes - y / Y or No - N to the relevant system\n");

        printf("******************************************* SYMPTOMS *******************************************\n");
        printf("                        Symptom (1) : Unbearable pain.                              (Y/y) / N):");
        scanf(" %c", &symptom1);
        printf("                        Symptom (2) : The difficulty of Chewing.                    (Y/y) / N):");
        scanf(" %c", &symptom2);
        printf("                        Symptom (3) : Difficulty in opening the mouth.              (Y/y) / N):");
        scanf(" %c", &symptom3);
        printf("                        Symptom (4) : Swelling and redness.                         (Y/y) / N):");
        scanf(" %c", &symptom4);
        printf("                        Symptom (5) : Bleeding from the mouth.                      (Y/y) / N):");
        scanf(" %c", &symptom5);
        printf("                        Symptom (6) : Face getting enlarged or facial asymmetry.    (Y/y) / N):");
        scanf(" %c", &symptom6);
        printf("                        Symptom (7) : Soft on palpation.                            (Y/y) / N):");
        scanf(" %c", &symptom7);
        printf("                        Symptom (8) : Headache.                                     (Y/y) / N):");
        scanf(" %c", &symptom8);
        printf("                        Symptom (9) : Tenderness in palpations.                     (Y/y) / N):");
        scanf(" %c", &symptom9);

        printf("************************************************************************************************\n");
        printf("\n");
        printf("*********************************** PRESCRIPTION ***********************************************\n");
        printf("\n");
        //displaying patient details
        printf("Prescription ID   :    PID%d \n", count);
        printf("Patient Name      :    %s \n", name);
        printf("Patient Age       :    %d \n", age);
        printf("Patient Gender    :    %c \n", gender);
        printf("Patient Weight    :    %d \n", weight);

        printf("***********************************Medicine Dosage**********************************************\n");
printf("\n");

        //identifying the disease condition
        if(((symptom1 == 'Y') || (symptom1 == 'y')) && ((symptom2 == 'Y') || (symptom2 == 'y')) && ((symptom3 == 'Y') || (symptom3 == 'y')) && ((symptom4 == 'Y') || (symptom4 == 'y')) && ((symptom5 == 'Y') || (symptom5 == 'y')))
        {
                printf("Disease     :    Tooth and bone fractures due to accidents\n");
                disease = 't';
        }
        else if(((symptom1 == 'Y') || (symptom1 == 'y')) && ((symptom2 == 'Y') || (symptom2 == 'y')) && ((symptom8 == 'Y') || (symptom8 == 'y')) && ((symptom9 == 'Y') || (symptom9 == 'y'))){
                printf("Disease     :    Acute dental pain\n");
                disease = 'p';
        }
        else if(((symptom4 == 'Y') || (symptom4 == 'y')) && ((symptom6 == 'Y') || (symptom6 == 'y')) && ((symptom7 == 'Y') || (symptom7 == 'y'))){
                printf("Disease     :    Swelling and absecees\n");
                disease = 'w';
        }
        else{
                printf("Not a Dental disease\n");
        }

        //acute dental pain disease
        if(disease == 'p')
        {
                //full dose is given if both age is greater than 12 and weight is greater than 40
                if((age >= 12) && (weight >= 40))
                {
                        printf("\t\tBrufen %d mg 8 hourly dose for 5 days\n", drugs);
                        printf("\t\t Panadol %d mg 6 hourly dose for 5 days\n", drugs);
                        //checking number of patients of acute dental disease
                        pcount++;
                }
                else if(age >= 6 )
                {
                        //calculating the  dose and displaying medicine for  age between 6 to 12 patients
                        drugs = drugs / 2;
                        printf("\t\t Brufen %d mg 8 hourly dose for 5 days\n", drugs);
                        printf("\t\t Panadol %d  mg 6 hourly dose for 5 days\n", drugs);
                        pcount++;
                }
                else
                {
                        //calculating the dose and displaying medicine for age less than 6 patients
                        drugs = drugs / 4;
                        printf("\t\t Brufen %d  mg 8 hourly dose for 5 days\n", drugs);
                        printf("\t\t Panadol %d  mg 6 hourly dose for 5 days\n", drugs);
                        pcount++;
                }
        }

        //swelling and absus disease
        else if(disease == 'w')
        {
if((age >= 12) && (weight >= 40))
                {
                        //Checking the allergies and giving alternative drug
                        if((allergic == 'Y') || (allergic == 'y'))
                        {
                                 printf("\t\t Erythromycin %d mg 8 hourly dose for 5 days\n", drugs);
                        }
                        else
                        {
                                printf("\t\t Amoxylin %d mg 8 hourly dose for 5 days\n", drugs);

                        }
                        printf("\t\t Diclophanic Sodium %d mg 8 hourly dose for 5 days\n", drugs);
                        wcount++;
                }
                else if(age >= 6 )
                {
                        drugs = drugs / 2;
                        printf("\t\t Amoxylin %d mg 8 hourly dose for 5 days\n", drugs);
                        printf("\t\t Diclophanic Sodium %d  mg 8 hourly dose for 5 days\n", drugs);
                        wcount++;
                }
                else
                {
                        drugs = drugs / 4;
                        printf("\t\t Amoxylin %d  mg 8 hourly dose for 5 days\n", drugs);
                        printf("\t\t Diclophanic Sodium %d  mg 8 hourly dose for 5 days\n", drugs);
                        wcount++;
                }

        }

        //tooth and bone fractures disease
        else if(disease == 't')
        {
                if((age >= 12) && (weight >= 40))
                {
                        //Checking for pregnancy and giving alternative drug
                        if((pregnant == 'Y') || (pregnant == 'y'))
                        {
                                printf("\t\t Augmentin  %d mg hourly dose for 5 days\n", augmentin);
                        }
                        else
                        {
                                printf("\t\t Flagyl %d mg 8 hourly dose for 5 days\n", flagyl);
                        }
                        printf("\t\t Deczamethazone %d mg 12 hourly dose for 5 days\n", drugs);
                        tcount++;
                }
else if(age >= 6 )
                {
                        drugs = drugs / 2;
                        printf("\t\t Flagyl %d mg 8 hourly dose for 5 days\n", flagyl);
                        printf("\t\t Deczamethazone %d  mg 12 hourly dose for 5 days\n", drugs);
                        tcount++;
                }
                else
                {
                        drugs = drugs / 4;
                        printf("\t\t Flagyl %d  mg 8 hourly dose for 5 days\n", flagyl);
                        printf("\t\t Deczamethazone %d  mg 12 hourly dose for 5 days\n", drugs);
                        tcount++;
                }


        }

        else
        {
                printf("Not a dental disesase type : Can't issue dental drug prescription\n");
        }

        //Checking whether  patient is having gastritis and issuing medicine accordingly
        if((gastritis == 'Y') || (gastritis == 'y'))
        {
                drugs = drugs / 25;
                printf("\t\t Omprezole %d mg 12 hourly\n", drugs);
        }
        else
        {
                printf("You don't have gastritis impacts by taking medicine\n");
        }

        //if there are more patients to get prescriptions enter Y/y,enter N if there are no more patients to get prescriptions
        printf("Do you want to continue (Yes – Y or y / No – N or n): ");
        scanf(" %c", &loop);
        count++;
        }//end while

        printf("\n");
        printf("*******************************************************************************************************\n");
        printf("************************************** DOCTORS REPORT *************************************************\n");
        printf("\n");
        //calculating the percentage of patients of acute dental pain out of total patients
        percentagep = (float) pcount / count * 100;
        //calculating the percentage of patients of swelling and abcess disease out of total patients
percentagep = (float) pcount / count * 100;
        //calculating the percentage of patients of swelling and abcess disease out of total patients
        percentagew = (float) wcount / count * 100;
        //calculating the percentage of patients of tooth and bone fracture patients out of total patients
        tpercentage = (float) tcount / count * 100;

        //displaying total number of patients from each dental disease and the percentage
        printf("Number of Tooth and bone fractures due to accidents  %d and the percentage %.2f\n", tcount, tpercentage);
        printf("Number of acute dental pain patients %d and the percentage %.2f\n", pcount, percentagep);
        printf("Number of swelling and abseces patients %d and the percentage %.2f\n", wcount, percentagew);
        printf("\n");
        printf("*******************************************************************************************************\n");
        printf("\n");
        return 0;
}//end function main


