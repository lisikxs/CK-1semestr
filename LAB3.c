#include <stdio.h>
 
int main() { 
    int x; 
    printf("������� �  10 ������� ���������: "); 
    scanf("%d", &x); 
 
    int y = x; 
    printf("�������� � 16 ������� ���������: %x \n", y); 
 
    int bitwise_right1 = x << 4; 
    printf("��������� ����� � 16 ������� ��������� ��������� �� 4 ���� �����: %x \n", bitwise_right1); 
 
    int not_x = ~x;
    printf("������� �������� ���������: %x \n", not_x); 
 
    int z; 
    printf("������� ����� � 16 ������� ���������: "); 
    scanf("%x", &z); 
 
    int bitwise_and = (z & y); 
    printf("���������: %d", bitwise_and); 
 
    return 0; 
}