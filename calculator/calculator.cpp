#include "framework.h"
#include "calculator.h"

//#define :  상수 치환 (내가 알아보기 쉬운 단어로 치환)
//ADD 를 쓰면 1로 인식
#define NONE 0
#define ADD 1
#define SUB 2
#define MUL 3
#define DIV 4

//HWND 

INT_PTR CALLBACK DlgProc(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    //플래그 : 어떤 연산기호가 눌린 상태냐, 연산기호가 이전에 눌렸었냐(수자 새로쓰기 여부)
    //static : 함수가 끝나도 공간이 삭제되지 않는 지역변수(유사 전역변수)

    static int oper;
    static int reset_flag;
    static int first_num;

    switch (message)
    {
    case WM_INITDIALOG:
        //처음 실행하면 동작하는 부분
        //oper = NONE;                       전역변수 static 변수는 자동 초기화 됨
        //reset_flag = 0;

        return (INT_PTR)TRUE;

    case WM_COMMAND:
        int key = LOWORD(wParam);

        if (key == IDCANCEL)
        {
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
        }
        else if (key == IDOK ) {
             
            //확인 버튼을  누르면 동작할 코드 (=)

            if (oper == ADD) {

                int num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);

                SetDlgItemInt(hDlg, IDC_EDIT1, first_num + num, TRUE);
               
            }
            else if (oper == SUB) {

                int num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);

                SetDlgItemInt(hDlg, IDC_EDIT1, first_num - num, TRUE);

            }
            else if (oper == MUL) {

                int num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);

                SetDlgItemInt(hDlg, IDC_EDIT1, first_num * num, TRUE);

            }
            else if (oper == DIV) {

                int num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);

                if (num != 0) {

                    SetDlgItemInt(hDlg, IDC_EDIT1, first_num / num, TRUE);
                }
                else {
                    SetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
                }
            }

            oper = NONE;
            reset_flag = 1;

  /*          MessageBox(hDlg, L"확인버튼 눌림", L"제목", MB_OKCANCEL);*/
        }
        else if (key == IDC_BUTTON0){

            if (reset_flag == 0) {

                int num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);     //현재 쓰여있는 값을 읽어 온다

                SetDlgItemInt(hDlg, IDC_EDIT1, num * 10 + 0, TRUE);
            }
            else {
                SetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
                reset_flag = 0;
            }
        }
        else if (key == IDC_BUTTON1){
            if (reset_flag == 0) {

                int num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);     //현재 쓰여있는 값을 읽어 온다

                SetDlgItemInt(hDlg, IDC_EDIT1, num * 10 + 1, TRUE);
            }
            else {
                SetDlgItemInt(hDlg, IDC_EDIT1, 1, TRUE);
                reset_flag = 0;
            }
        }
        else if (key == IDC_BUTTON2){
            if (reset_flag == 0) {

                int num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);     //현재 쓰여있는 값을 읽어 온다

                SetDlgItemInt(hDlg, IDC_EDIT1, num * 10 + 2, TRUE);
            }
            else {
                SetDlgItemInt(hDlg, IDC_EDIT1, 2, TRUE);
                reset_flag = 0;
            }
        }
        else if (key == IDC_BUTTON3){
            if (reset_flag == 0) {

                int num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);     //현재 쓰여있는 값을 읽어 온다

                SetDlgItemInt(hDlg, IDC_EDIT1, num * 10 + 3, TRUE);
            }
            else {
                SetDlgItemInt(hDlg, IDC_EDIT1, 3, TRUE);
                reset_flag = 0;
            }
        }
        else if (key == IDC_BUTTON4){
            if (reset_flag == 0) {

                int num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);     //현재 쓰여있는 값을 읽어 온다

                SetDlgItemInt(hDlg, IDC_EDIT1, num * 10 + 4, TRUE);
            }
            else {
                SetDlgItemInt(hDlg, IDC_EDIT1, 4, TRUE);
                reset_flag = 0;
            }
        }
        else if (key == IDC_BUTTON5){
            if (reset_flag == 0) {

                int num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);     //현재 쓰여있는 값을 읽어 온다

                SetDlgItemInt(hDlg, IDC_EDIT1, num * 10 + 5, TRUE);
            }
            else {
                SetDlgItemInt(hDlg, IDC_EDIT1, 5, TRUE);
                reset_flag = 0;
            }
        }
        else if (key == IDC_BUTTON6){
            if (reset_flag == 0) {

                int num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);     //현재 쓰여있는 값을 읽어 온다

                SetDlgItemInt(hDlg, IDC_EDIT1, num * 10 + 6, TRUE);
            }
            else {
                SetDlgItemInt(hDlg, IDC_EDIT1, 6, TRUE);
                reset_flag = 0;
            }
        }
        else if (key == IDC_BUTTON7){
            if (reset_flag == 0) {

                int num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);     //현재 쓰여있는 값을 읽어 온다

                SetDlgItemInt(hDlg, IDC_EDIT1, num * 10 + 7, TRUE);
            }
            else {
                SetDlgItemInt(hDlg, IDC_EDIT1, 7, TRUE);
                reset_flag = 0;
            }
        }
        else if (key == IDC_BUTTON8){
            if (reset_flag == 0) {

                int num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);     //현재 쓰여있는 값을 읽어 온다

                SetDlgItemInt(hDlg, IDC_EDIT1, num * 10 + 8, TRUE);
            }
            else {
                SetDlgItemInt(hDlg, IDC_EDIT1, 8, TRUE);
                reset_flag = 0;
            }
        }
        else if (key == IDC_BUTTON9){
            if (reset_flag == 0) {

                int num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);     //현재 쓰여있는 값을 읽어 온다

                SetDlgItemInt(hDlg, IDC_EDIT1, num * 10 + 9, TRUE);
            }
            else {
                SetDlgItemInt(hDlg, IDC_EDIT1, 9, TRUE);
                reset_flag = 0;
            }
        }
        else if (key == IDC_CLEAR) {
            reset_flag = 0;
            oper = NONE;
            first_num = 0;
            SetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
        }
        else if (key == IDC_BACK) {
            int num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);

            SetDlgItemInt(hDlg, IDC_EDIT1, num / 10, TRUE);
        }
        else if (key == IDC_ADD) {
            first_num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
            reset_flag = 1;
            oper = ADD;     //1
        }
        else if (key == IDC_SUB) {
            first_num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
            reset_flag = 1;
            oper = SUB;     //2
        }
        else if (key == IDC_MUL) {
            first_num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
            reset_flag = 1;
            oper = MUL;     //3
        }
        else if (key == IDC_DIV) {
            first_num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
            reset_flag = 1;
            oper = DIV;     //4
        }

        break;
    }
    return (INT_PTR)FALSE;
}


int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
   
    DialogBox(hInstance, MAKEINTRESOURCE(IDD_DIALOG1), 0, DlgProc);

    return 0;
}




