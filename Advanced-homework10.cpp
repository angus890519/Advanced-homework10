/* �p������׹��-�i���m�ߧ@�~-�@�~10 */
/* �s�@�H�G���f�W */
/* �����ɶ��G2019/04/11 16:31 */
#include<iostream>//��ܮw 
int main()
{
	int number; //�w�q��J�� 
    int i; 
    printf("�p������׹��-�i���m�ߧ@�~-�@�~10\n");
	printf("�s�@�H�G���f�W\n");
	printf("�����ɶ��G2019/04/11 16:31\n");
	printf("-----------------------------------\n");
	printf("��]�Ƥ���-�п�J�@�ӥ���ơG");
    scanf("%d",& number); //��J��  
    printf ("��]��%d���Ѫ���]�Ƭ��G",number); //��� 
      for ( i = 2 ; i <= number ; i ++) { //����J�Ȫ����� 
        while ( number != i ) {    //���h 
            if ( number % i == 0 ) { //��Q�㰣 
                printf ( "%d*" , i ); //��� 
                number = number / i ; //�Ʀr�b���Q�㰣���� 
            } else
                break ;//���� 
        }
    }
    printf ( "%d \n " , number );
    return 0;
}
